#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Node //单个模块
{
public:
	int data;
	int num;
	Node *next;
};

class LinkList{
	public:
	LinkList();
	~LinkList();
	int CreateLinkList(int size);
	int TrevaLinkList();
	int ChangeLinkList(int n);
	int DeleteLinkList(int n);
	private:
	Node *head;
	int size;
};

LinkList::LinkList()
{
	head = new Node;
	head->next = NULL;
	size = 0;
}

LinkList::~LinkList()
{
	delete head;
}

int LinkList::CreateLinkList(int n)//创建链表
{
	if (n<0)
	{
		cout<<"error"<<endl;
		return -1;
	}
	int num = 1;
	Node *p,*q;
	this->size = n;
	q = this->head;
	for(int i=0;i<n;i++,num++)
	{
		p = new Node; //建立下一个模块
		p->next=NULL;
		cout<<"enter a num for "<<num<<"num"<<endl; //输入数据
		cin>>p->data;
		p->num = num;
		q->next = p; //将上一个模块的next同当前模块连接
		q = p;//位下一个模块的连接做准备
	}
	cout<<"over"<<endl;//创建链表结束
	return 0;
}

int LinkList::TrevaLinkList()//输出链表
{
	Node *op;
	op = this->head->next; //指定到开头
	if(this->head == NULL) //判断链表内容是否为空
	{
		cout<<"Empty!!!"<<endl;
		return -1;
	}
	while(op) //链表若不为空，输出数据，空则跳出循环
	{
		cout << op->data << endl;//输出数据
		op = op->next;//指向下一个模块，为下一次循环做准备
	}
	cout << "Treva Over !!!!" << endl; //输出结束
	return 0;
}

int LinkList::ChangeLinkList(int n)
{
	Node *p = this->head->next;
	int num;
	for(int i = 1;i != n;i++)
	{
		p = p->next;
	}
	cout<<"Find the Data"<<endl;
	cout<<"Enter the num you want to chang"<<endl;
	cin >> num;
	p->data = num;
	cout << "Change Over!!!"<<endl;
	return 0;
}

int main()
{
	LinkList Num;
	int n;
	int i;
	cout<<"Enter a num of the long of the list"<<endl;
	cin>>n;
	Num.CreateLinkList(n);
	Num.TrevaLinkList();
	cout<<"Enter the part num"<<endl;
	cin >> i;
	Num.ChangeLinkList(i);
	Num.TrevaLinkList();
	system("pause");
	return 0;
}