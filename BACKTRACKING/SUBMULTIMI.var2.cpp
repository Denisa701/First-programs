#include<iostream>
using namespace std;
//citeste un vector v--> trebuie sa afiseze submultimile crescatoare de lungime m
const int MAX=20;
int v[MAX], x[MAX];
int n,m;
void citire();
void scrie();
bool cond(int k);
void generare(int k);
int main()
{
    citire();
    generare(0);
}
bool cond(int k)
{
    if(k==0) return true;
    if(v[x[k]]<v[x[k-1]])
        return false;
    return true;
}
void generare(int k)
{
    if(k==m) scrie();
    else
        {
        int start=0;
        if(k>0) start=x[k-1]+1;
        for(int i=start;i<n;i++)
        {
            x[k]=i;
            if(cond(k))
                generare(k+1);
        }
        }
}
void scrie()
{
     for(int i=0;i<m;i++)
        cout<<v[x[i]]<<' ';
     cout<<endl;
}
void citire()
{ cin>>n>>m;
for(int i=0;i<n;i++)
    cin>>v[i];
}
