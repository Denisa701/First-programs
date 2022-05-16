#include<iostream>
#include<cmath>

using namespace std;
const int n=4;
bool ales[n];
int x[n];
void scrie();
void generare(int k);
int main()
{
 generare(0);
}
void generare(int k)
{
    if(k==n) scrie();
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
     for(int i=0;i<n;i++)
        cout<<x[i]<<' ';
     cout<<endl;
}
