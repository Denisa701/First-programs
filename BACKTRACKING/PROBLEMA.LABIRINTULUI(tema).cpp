#include<iostream>
#include<fstream>
using namespace std;
const int MAX=20;
int n,m,x,y,x1,y1;
int dx[] = { -1, 0,+1, 0 };
int dy[] = { 0,+1, 0,-1 };
int A[MAX][MAX];
void citire();
void scrie();
bool coordonate(int x, int y);
bool gata(int x,int y);
void traseu(int x,int y);
int main ()
{
    citire();
    traseu(0,0);
}

void citire()
{

   ifstream f;
   f.open("labirint.txt");
    f>>m>>n>>x>>y;
   for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     f>>A[i][j];
     f>>x1>>y1;
    f.close();
}
void traseu(int x, int y)
{
    if(coordonate(x,y)&& A[x][y]==0)
    {
        A[x][y]=2;
        if(gata(x,y))
            scrie();
        else
            for(int i=0;i<4;i++)
                traseu(x+dx[i],x+dy[i]);
        A[x][y]=0;
    }
}
bool coordonate(int x, int y)
{
return (x>=0&&x<m&&y>=0&&y<n);

}
bool gata(int x, int y)
{
    return (x==0 ||y==0 ||y==n-1);
}
void scrie()
{
     for(int i=0;i<x1;i++)
     {
         for(int j=0;i<y1;j++)
         switch(A[i][j])
         {
             case 0: cout<<'.'; break;
             case 1:cout<<'#';break;
             case 2:cout<<'*';break;

         }
          cout<<endl;
     }
     cout<<endl;
}

