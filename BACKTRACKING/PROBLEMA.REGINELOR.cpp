#include<iostream>
#include<cmath>

using namespace std;
const int n=8;
int x[n];
void scrie();
bool cont(int k);
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
        if(cont(k)) generare(k+1);
    }
}
bool cont(int k)
{
    for(int i=0;i<k;i++)
    {
        if(x[i]==x[k]||abs(k-i)==abs(x[k]-x[i]))
            return false;
    }
    return true;
}
void scrie()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          {
               if(x[i]==j) cout<<'R';
            else cout<<'X';
          }
          cout<<endl;
}
