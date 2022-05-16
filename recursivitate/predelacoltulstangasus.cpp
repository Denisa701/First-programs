#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

void citire( int M[20][20], int &n, int &m)
{
    ifstream f("ceva.txt");
    f>>n>>m;
    for( int i=0;i<n;i++)
        for(int j=0; j<m;j++)
            f>>M[i][j];
        f.close();

}
void afisare ( int B[20][20], int n, int m,int x,int y)
{
     for(int i=x; i<=n;i++)
       {

       for ( int j=y; j<=m; j++)
            cout<< B[i][j]<<' ';
            cout<< endl;
            }
                }

int sumasubmultime (int M[20][20], int p, int q ,int x, int y )
{
    int s=0;
    for( int i=x;i<=p;i++)
        for(int j=y; j<=q;j++)
        s+=M[i][j];
        return s;
}
void sumamax(int M[20][20], int n, int m)
{
    int mx=0,p1,q1,x1,y1;
     for( int x=0;x<n-1;x++)
        for(int y=0; y<m-1;y++)
        {
            for( int p=x;p<n;p++)
                for(int q=y; q<m;q++)
                {cout<<sumasubmultime(M,p,q,x,y)<<' ';
               if( sumasubmultime(M,p,q,x,y)>mx)
                {
                    mx=sumasubmultime(M,p,q,x,y);
                    p1=p;
                    q1=q;
                    x1=x;
                    y1=y;
                }

                }}
cout<<endl;
cout<<x1<<y1<<p1<<q1;
afisare(M,p1,q1,x1,y1);
}
int main()
{

    int A[20][20],n,m,x,y,p,q,s;

    citire(A,n,m);

    //cin>>x>>y>>p>>q;
    sumamax(A,n,m);

}
