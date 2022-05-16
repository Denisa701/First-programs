#include<iostream>
#include<fstream>
using namespace std;
const int MAX=20;
int n;
int A[MAX][MAX], x[MAX];
void citire();
void scrie();
bool cond(int k);
void generare(int k);
int main ()
{
    citire();
    generare(0);
}

void citire()
{

   ifstream f;
   f.open("Pharti.txt");
    f>>n;
   for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     f>>A[i][j];
    f.close();
}
void generare(int k)
{
    if(k==n) scrie();
    else
         for(int i=1;i<=4;i++)
    {
        x[k]=i;
        if(cond(k))
            generare(k+1);
    }
}
bool cond(int k)
{
     for(int i=0;i<k;i++)
        if(x[k]==x[i]&& A[k][i]==1)
        return false;
     return true;
}
void scrie()
{
     for(int i=0;i<n;i++)
     {
         cout<<"Tara"<<' '<<i<<"->";
         switch(x[i])
         {
             case 1:cout<<"ROSU"<<endl;break;
             case 2:cout<<"VERDE"<<endl;break;
             case 3:cout<<"ALBASTRU"<<endl;break;
             case 4:cout<<"GALBEN"<<endl;break;
         }
     }
     cout<<endl;
}
