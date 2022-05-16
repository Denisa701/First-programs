#include<iostream>
using namespace std;

const int MAX=20;
int S=573, n=7;
int v[]={500,200,100,50,10,5,1};
int nr[]={7,3,5,6,6,7,10};
int x[MAX];
void scrie();
void generare(int k,int platit);
int main()
{
    generare(0,0);
}
void generare(int k, int platit)
{
    if(k==n)
    {
        if(platit==S) scrie();
    }
    else
        for(int i=0;i<=nr[k];i++)
    {
        x[k]=i;
        if(platit+i*v[k]<=S)
            generare(k+1, platit+i*v[k]);
    }
}

void scrie()
{
    for(int i=0;i<n;i++)
    if(x[i]>0)
        cout<<x[i]<<" de "<<v[i]<<endl;
    cout<<endl;
}
