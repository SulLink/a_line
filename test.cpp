#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Node //����ģ��
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

int LinkList::CreateLinkList(int n)//��������
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
		p = new Node; //������һ��ģ��
		p->next=NULL;
		cout<<"enter a num for "<<num<<"num"<<endl; //��������
		cin>>p->data;
		p->num = num;
		q->next = p; //����һ��ģ���nextͬ��ǰģ������
		q = p;//λ��һ��ģ���������׼��
	}
	cout<<"over"<<endl;//�����������
	return 0;
}

int LinkList::TrevaLinkList()//�������
{
	Node *op;
	op = this->head->next; //ָ������ͷ
	if(this->head == NULL) //�ж����������Ƿ�Ϊ��
	{
		cout<<"Empty!!!"<<endl;
		return -1;
	}
	while(op) //��������Ϊ�գ�������ݣ���������ѭ��
	{
		cout << op->data << endl;//�������
		op = op->next;//ָ����һ��ģ�飬Ϊ��һ��ѭ����׼��
	}
	cout << "Treva Over !!!!" << endl; //�������
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