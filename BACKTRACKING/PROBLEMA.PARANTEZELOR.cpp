#include<iostream>
using namespace std;
const int MAX=20;
int n;
int x[MAX];
void generare(int k,int deschis,int inchis);
void scrie();
int main()
{
    cin>>n;
    if(n%2==0)
        generare(0,0,0);
    else
        cout<<"!VALOARE IMPARA!";
}
void generare(int k,int deschis, int inchis)
{
    if(k==n) scrie();
    else
        for(int i=0;i<=1;i++)
    {
        x[k]=i;
        if(x[k]==0&&deschis+1<=n/2 )
            generare(k+1,deschis+1,inchis);
        if(x[k]==1&&inchis+1<=deschis)
            generare(k+1,deschis,inchis+1);
    }
}
void scrie()
{
     for(int i=0;i<n;i++)
        if(x[i]==1) cout<<')';
        else cout<<'(';
     cout<<endl;
}
