#include<iostream>
using namespace std;

void citire ( int B[20][20], int& n)
{
    cin>>n;
     for(int i=0; i<n;i++)
        for ( int j=0; j<n; j++)
            cin>> B[i][j];}

void afisare ( int B[20], int n)
{
     for(int i=0; i<n;i++)
            cout<< B[i]<<' ';}

void d_sec(int M[20][20], int n, int D[20])
{
    for(int i=0;i<n;i++)
       D[i]=M[i][n-i-1];




}
int main()
{
    int D[20], M[20][20],n;

    citire(M,n);
    d_sec(M,n,D);
    afisare(D,n);

}
