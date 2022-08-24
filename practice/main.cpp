#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
     t=new Node;
     t->data=a[i];
     t->next=NULL;
     last->next=t;
     last=t;
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
int coun(struct Node *p)
{
    if(p!=NULL)
    {
        return coun(p->next)+1;
    }
    else
        return 0;
}

int sumof(struct Node *p)
{
    if(p!=NULL)
    {

        return sumof(p->next)+p->data;
    }
    else
        return 0;
}
int maxel(struct Node *p)
{
    int max_ele=INT_MIN;
    while(p!=0)
    {
        if(max_ele<p->data)
            max_ele=p->data;
        else
            p=p->next;
    }
    return max_ele;
}
int maxele(struct Node *p)
{
    int x=0;
    if(p==0)
    {
        return INT_MIN;
    }
    else
    {
        x=maxele(p->next);
        if(x<p->data)
        {
            return p->data;
        }
        else
            return x;
    }
}
int minele(struct Node *p)
{
    int min_ele=INT_MAX;
    while(p!=0)
    {
        if(min_ele>p->data)
            min_ele=p->data;
        else{
            p=p->next;
        }
    }
    return min_ele;
}

Node * ser(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
            return p;
        else
            p=p->next;
    }
    return NULL;
}

Node* impser(struct Node *p,int key)
{
    struct Node *q=NULL;
    while(p!=0)
    {
        if(key==p->data)
        {
            p->next=first;
            q->next=p->next;
            return p;
        }
        else
        {
            q=p;
            p=p->next;
        }
    }
    return 0;
}
 void insert_ele(struct Node *p ,int index,int x)
{
    struct Node *t;
    if(index<0||index>coun(p))
        return;
    t=new Node;
    t->data=x;

    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
int del(struct Node *p,int index)
{
    struct Node *q=NULL;
    int x=-1,i;
    if(index<1||index>coun(p))
        return -1;
    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else
        {
            for(i=0;i<index-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
            return x;
        }

}
int issort(struct Node *p)
{
    int m=INT_MIN;
    p=first;
    while(p!=0)
    {
        if(p->data<m)
            return 0;
        else
            m=p->data;
            p=p->next;
    }
    return 1;
}

int duplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=0)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}
void reverseing(struct Node *p)
{
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
int isloop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    if(p==q)
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    struct Node *t1,*t2;
    int a[]={1,2,3,4};
    create(a,4);
    t1=first->next->next;
    t2=first->next->next->next;
    t2->next=t1;
    x=isloop(first);
    cout<<x;
    //cout<<"\n"<<issort(first);
    return 0;
}

/**#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>v,int n)
{
    int non=-1;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                cout<<v[i]<<" ";
            }
    }
}
return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    duplicate(v,n);
}
**/
/** Balloon problaem
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=9,q=6;
        int n;
        cin>>n;
        int sum=0;
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        for(int i=0;i<n;i++)
        {
            if(v[i].first==1 && v[i].second==1)
            {
                sum+=p+q;
            }
            else if(v[i].first==1 && v[i].second==0)
            {
                sum+=p;
            }
            else if(v[i].first==0 && v[i].second==1)
            {
                sum+=q;
            }

        }
        cout<<sum;
    }

}
**/
/** NO OF OCCURANCE
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int sum=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int w;
        cin>>w;
        v.push_back(w);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            sum+=1;
        }
    }
    cout<<sum;
}**/

/**DUPLICATE IN an ARRAY

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                cout<<v[i]<<" ";
            }
        }
    }
  return 0;
}

**/




/** REVERSE AN ARRRAY
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}
**/


/**   Reverse a number
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n>0)
        {
            int last=n%10;
            cout<<last;
            n=n/10;
        }

    }
}
**/



/**  SUM OF DIGIT___________________
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem;
            n=n/10;
        }
        cout<<sum;
    }

}

**/

    //ROTATE AN ARRAY
/**int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            vector<int>v;
            int n;
            cin>>n;
            int r;
            cin>>r;
            for(int i=0;i<n;i++){
                int data;
                cin>>data;
                v.push_back(data);
            }
            rotate(v.begin(),v.begin()+r,v.end());
            for(int i=0;i<n;i++){
                    cout<<v[i]<<" ";
            }
        cout<<endl;
        }

}
**/





/*#include<iostream>

using namespace std;
int main()
{
  string s;
  cout<<"Enter the string ";
  getline(cin,s);

  cout<<"You have entered a string ";
  cout<<s<<endl;
  s.push_back('Y');
  cout<<"After using push_back "<<s<<endl;
  return 0;
}*/





/*    int a[10],n,i;
    cout<<"Enter the total number of array"<<" ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Array after reversed";
    for(i=n-1;i>=0;i--)
        cout<<a[i]<<" ";


}*/
