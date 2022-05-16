#include<iostream>
#include<cmath>

using namespace std;
int const MAX=8;
int n,m;
bool ales[MAX];
int x[MAX];
void scrie();
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
        if(!ales[x[k]])
        {
            ales[x[k]]=true;
            generare(k+1);
            ales[x[k]]=false;
        }
    }
}

void scrie()
{
     for(int i=0;i<m;i++)
        cout<<x[i]<<' ';
     cout<<endl;
}
