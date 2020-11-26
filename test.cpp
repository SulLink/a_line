#include <string>
#include <iostream>
using namespace std;

class Node //µ¥¸öÄ£¿é
{
public:
	int data;
	Node *next;
};

class LinkList{
	public:
	LinkList();
	~LinkList();
	int CreateLinkList(int size);
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

int LinkList::CreateLinkList(int n)
{
	if (n<0)
	{
		cout<<"error"<<endl;
		return -1;
	}
	int num;
	Node *p,*q;
	for(int i=0;i<n;i++)
	{
		p = new Node;
		p->next=NULL;
		cout<<"enter a num"<<endl;
		cin>>p->data;
		head->next = p;
		
	}
}