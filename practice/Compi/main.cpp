#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first;

void create1(int a[],int n)
{
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=first;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    do
    {
        cout<<" "<<p->data;
        p=p->next;
    }while(p!=first);
}
int length(struct Node *p)
{
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=first);
    return len;
}
void cir_insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index<0 ||index>length(p))
    {
        return;
    }
    if(index==0)
    {
        t=new Node;
        t->data=x;
        if(first==NULL)
        {
            first=t;
            first->next=first;
        }
        else
        {
            while(p->next!=first)
            {
                p=p->next;
            }
            p->next=t;
            t->next=first;
            first=t;
        }
    }
        else
        {
            for(i=0;i<index-1;i++)
            {
                p=p->next;
            }
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
}

int main()
{
    int a[]={1,2,3,4,5};
    create1(a,5);
    cir_insert(first,3,33);
    display(first);

    return 0;

}
