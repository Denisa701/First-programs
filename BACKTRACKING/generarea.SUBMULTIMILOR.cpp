#include<iostream>
#include<cmath>

using namespace std;
int const MAX=20;
int n=5;
int x[MAX];
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
        for(int i=0;i<=1;i++)
    {
        x[k]=i;
        generare(k+1);

    }
}

void scrie()
{
    cout<<'{';
     for(int i=0;i<n;i++)

         if(x[i]==1)
        cout<<i<<';';
cout<<"\b";
     cout<<'}'<<endl;
}
