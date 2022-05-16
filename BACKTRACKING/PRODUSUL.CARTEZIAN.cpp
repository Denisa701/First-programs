#include<iostream>
#include<fstream>
using namespace std;
const int MAX=20;
int m;//numarul de multimi
int x[MAX];
int n[MAX];//vectorul unde apar numarul de elemente din fiecare multime
void scrie();
void generare(int k);
int main()
{
    cin>>m;
    for(int i=0;i<m;i++) cin>>n[i];
    generare(0);
}
void generare(int k)
{
    if(k==m) scrie();
    else
         for(int i=0;i<n[k];i++)
    {
        x[k]=i;
        generare(k+1);
    }
}
void scrie()
{
     for(int i=0;i<m;i++)
        cout<<x[i]<<' ';
     cout<<endl;
}
