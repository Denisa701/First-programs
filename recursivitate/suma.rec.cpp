#include<iostream>
#include<fstream>
using namespace std;
int v[100];
int n;

void citire ()
{
    ifstream f("suma.txt");
    f>>n;
    for(int i=0; i<n; i++)
        f>>v[i];

}
void afis ()
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<' ';
}

bool suma(int v[],int st,int dr)
{
    int m;
    if(st==dr)
    {
        if(v[st]%2==0)
            return true;


        }
    if(st<dr)
    {
        m=(st+dr)/2;
        return suma( v,st, m)&&suma(v,m+1,dr);
    }
 return false;
}
int main ()
{
    citire();
    cout<<suma(v,0,n-1);
}
