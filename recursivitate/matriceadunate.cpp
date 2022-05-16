#include<iostream>
#include<cmath>
using namespace std;
void citire(unsigned M[10][10],unsigned n,unsigned m)
{
   // cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>M[i][j];
}
void afisare(unsigned M[10][10],unsigned n,unsigned m)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<M[i][j]<<' ';
      cout<<endl;
    }
}

    void suma(unsigned P[10][10],unsigned R[10][10],unsigned S[10][10],unsigned n, unsigned m)
    {
         for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            S[i][j]=P[i][j]+R[i][j];
     }
        int main()
        {
            unsigned P[10][10],R[10][10],S[10][10],n,m;
            cin>>n>>m;
            citire(P,n,m);

            citire(R,n,m);
            suma(P,R,S,n,m);
            afisare(S,n,m);

        }
