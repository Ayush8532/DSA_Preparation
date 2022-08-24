#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *lchild,*rchild;
};
Node *newNode(int data)
{
    Node *temp=new Node;
    temp->data=data;
    temp->lchild=temp->rchild=NULL;
    return temp;
}
void preorder(struct Node *q)
{
    if(q==NULL){
        return;
    }
    cout<<q->data<<" ";
    preorder(q->lchild);
    preorder(q->rchild);
}
int main(){
    struct Node *root=newNode(1);
    root->lchild=newNode(2);
    root->rchild=newNode(3);
    root->lchild->rchild=newNode(4);
    cout<<"The preorder is \n";
    preorder(root);
    return 0;
}
