#include <iostream>

using namespace std;
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;
void create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        t=last;
    }
}
int length(struct Node *p)
{
    int len=0;
    while(p!=0)
    {
        len++;
        p=p->next;
    }
    return len;
}
void inserting(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index<0||index>length(first))
        return;
    if(index==0)
    {
        t=new Node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next!=NULL)
        {
            p->next->prev=t;
            p->next=t;
        }
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<" "<<p->data;
        p=p->next;
    }
}
int main()
{
    int a[]={1,23,34,55,59};
    create(a,5);
    inserting(first,2,100);
    display(first);

    return 0;
}
