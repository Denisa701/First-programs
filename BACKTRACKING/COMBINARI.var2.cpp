#include<iostream>
#include<cmath>

using namespace std;
int const MAX=8;
int n,m;
int x[MAX];
void scrie();
void generare(int k);
int main ()
{
    cin>>n>>m;
    generare(0);
}
void generare(int k)
{
    if(k==m) scrie();
    else
    {
        int start;
        if(k==0) start=0;
        else start=x[k-1]+1;
        for(int i=start;i<n;i++)
        {
            x[k]=i;
            generare(k+1);
        }
    }

}
void scrie()
{
     for(int i=0;i<m;i++)
        cout<<x[i]<<' ';
     cout<<endl;
}
