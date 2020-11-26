#include <iostream>
#include <string>
using namespace std;

#define NULL 0

typedef int DataType;

class Node{
    public:
    DataType data;
    Node *next;
};

class LinkList{
    public:
    LinkList();
    ~LinkList();
    int CreateLinkList(int size);
    int BYELinkList();
    int TravalLinkLisst();
    int InsertLinkList(Node *data,int n);
    int DeleteLinkList(int n);

    int GetLen();
    bool IsEmply;

    Node *head;
    int size;
};