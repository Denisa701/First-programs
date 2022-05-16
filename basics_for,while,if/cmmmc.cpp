#include<iostream>
using namespace std;

int cmmmc(int a, int b)
{
    for(int i=1; i<b;i++)
        for(int j=1; j<a;j++)
        if(a*i==b*j)
        return a*i;
}

int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<cmmmc(a,b);
}
