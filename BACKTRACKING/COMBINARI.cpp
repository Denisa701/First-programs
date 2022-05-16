#include<iostream>
#include<cmath>

using namespace std;
int const MAX=8;
int n,m;
int x[MAX];
void scrie();
bool cond(int k);
void generare(int k);
int main()
{
    cin>>n>>m;
 generare(0);
}
void generare(int k)
{
    if(k==m) scrie();
    else
        for(int i=0;i<n;i++)
    {
        x[k]=i;
        if(cond(k))
        {
            generare(k+1);
        }
    }
}
bool cond(int k)
{
    if(k==0) return true;
    return x[k]>x[k-1];
}
void scrie()
{
     for(int i=0;i<m;i++)
        cout<<x[i]<<' ';
     cout<<endl;
}
