#include<iostream>
#include<cstdlib>

 using namespace std;


int main()
 {
bool s;
 int V[4];
 int S[4];
 int C[4];
 int n,x;
cout<<"Introduceti n";
cin>>n;
cout<<"introduceti elementele";
for(int i=0;i<n;i++)
    cin>>V[i];
for(int i=0 ; i<=n;i++)
        C[i]=0;
for(int i=0;i<=n-2;i++)
{
    for(int j=i+1;j<=n-1;j++)
    {
        if(V[i]<V[j])
            C[j]++;
        else
            C[i]++;

    }
    }
 for(int i=0;i<=n-1;i++)
            S[C[i]]=V[i];

for(int i=0;i<n;i++)
    cout<<S[i]<<" ";
 }
