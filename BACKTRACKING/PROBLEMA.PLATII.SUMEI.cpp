#include<iostream>
using namespace std;

const int MAX=20;
int S=573, n=7;
int v[]={500,200,100,50,10,5,1};
int nr[]={7,3,5,6,6,7,10};
int x[MAX];
void scrie();
void generare(int k);
int platit(int k);
int main()
{
    generare(0);
}
void generare(int k)
{
    if(k==n)
    {
        if(platit(n)==S) scrie();
    }
    else
        for(int i=0;i<=nr[k];i++)
    {
        x[k]=i;
        if(platit(k)+i*v[k]<=S)
            generare(k+1);
    }
}
int platit(int k)
{
    int suma=0;
    for(int i=0;i<k;i++)
        suma+=x[i]*v[i];
    return suma;
}
void scrie()
{
    for(int i=0;i<n;i++)
        cout<<x[i]<<' ';
    cout<<endl;
}
