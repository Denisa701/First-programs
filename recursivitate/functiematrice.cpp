#include<iostream>
#include<cmath>
using namespace std;

void construire( char B[20][20], int n)
{
    for(int i=0; i<n;i++)
        for ( int j=0; j<n; j++)
   {
    if(i==n/2)
    B[i][j]='*';

    if( j==n/2)
        B[i][j]='*';

    if(i<n/2&& j<n/2)
        B[i][j]='#';
    if(i<n/2 && j>n/2 )
        B[i][j]='&';
    if(i>n/2 && j<n/2)
            B[i][j]='!';
    if(i>n/2 && j>n/2)
        B[i][j]='?';
             }


}
void afisare ( char B[20][20], int n)
{
     for(int i=0; i<n;i++)
       {

       for ( int j=0; j<n; j++)
            cout<< B[i][j]<<' ';
            cout<< endl; }
}

int main ()
{
     char B[20][20];
     int n;
     cin>>n;
     construire(B,n);
     afisare( B, n);

}
