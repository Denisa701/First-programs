//SCRIEREA LUI n CA SUMA DE NUMERE NATURALE NENULE
#include<iostream>
#include<fstream>
using namespace std;
const int MAX=20;
int n, x[MAX];
void scrie(int k);
void generare(int k,int s);
int main()
{
    cin>>n;
    generare(0,0);
}
void generare(int k,int s)
{
    if(s==n) scrie(k);
    else
        for(int i=1;i<n;i++)
    {
        x[k]=i;
        if(s+i<=n)
            generare(k+1,s+i);
    }
}
void scrie(int k)
{
    cout<<n<<'=';
    for(int i=0;i<k;i++)
        cout<<x[i]<<'+';
    cout<<"\b \n";
}
