#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void insertion(int,int );
void delte(int);
int searching(int);
int searching1(int,int);
void display(int);
int tree[40],t=1,s,x,i;
int main()
{
    int ch,y;
    for(i=1; i<40; i++)
        tree[i]=-1;
    while(1)
    {
        cout  <<"\n1.insertion\n2.deletion\n3.DISPLAY\n4.searching\n5.Exit\nEnter Choice:";
        cin >> ch;
        switch(ch)
        {
        case 1:
            cout <<"Enter  element to insertion";
            cin >> ch;
            insertion(1,ch);
            break;
        case 2:
            cout <<"Enter  element to deletion";
            cin >>x;
            y=searching(1);
            if(y!=-1) delte(y);
            else cout<<"No  Element Found ";
            break;
        case 3:
            display(1);
            break;
            display(1);
            cout<<"\n";
            for(i=0; i<=32; i++)
                cout <<i;
            cout <<"\n";
            break;
        case 4:
            cout <<"Enter the Element to searching:";
            cin >> x;
            y=searching(1);
            if(y == -1) cout <<"No such Element Found in Tree";
            else cout <<x << "is in" << y <<"Position";
            break;

        case 5:
            exit(0);
        }
    }
     return 0;
}
void insertion(int s,int ch )
{
    int x;
    if(t==1)
    {
        tree[t++]=ch;
        return;
    }
    x=searching1(s,ch);
    if(tree[x]>ch)
        tree[2*x]=ch;
    else
        tree[2*x+1]=ch;
    t++;
}
void delte(int x)
{
    if( tree[2*x]==-1 && tree[2*x+1]==-1)
        tree[x]=-1;
    else if(tree[2*x]==-1)
    {
        tree[x]=tree[2*x+1];
        tree[2*x+1]=-1;
    }
    else if(tree[2*x+1]==-1)
    {
        tree[x]=tree[2*x];
        tree[2*x]=-1;
    }
    else
    {
        tree[x]=tree[2*x];
        delte(2*x);
    }
    t--;
}
int searching(int s)
{
    if(t==1)
    {
        cout <<"No element in tree";
        return -1;
    }
    if(tree[s]==-1)
        return tree[s];
    if(tree[s]>x)
        searching(2*s);
    else if(tree[s]<x)
        searching(2*s+1);
    else
        return s;
}
void display(int s)
{
    if(t==1)
    {
        cout <<"No element in tree:";
        return;
    }
    for(int i=1; i<40; i++)
        if(tree[i]==-1)
            cout <<" ";
        else cout <<tree[i];
    return ;
}
int searching1(int s,int ch)
{
    if(t==1)
    {
        cout <<"No element in tree";
        return -1;
    }
    if(tree[s]==-1)
        return s/2;
    if(tree[s] > ch)
        searching1(2*s,ch);
    else searching1(2*s+1,ch);
}
