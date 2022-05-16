#include<iostream>
#include<cmath>
using namespace std;

void f( int a, int& P, double & d)
{
    P=4*a;
    d=a*sqrt(2);
}
int p(int a, double &d)
{
     d=a*sqrt(2);
     return 4*a;
}

int main()
{
    int x,y;
    double d,r;
    cin>>x;
    f(x,y,d);
    cout<<y<<' '<<d<<endl;
    cout<<p(x,r);
    cout<<r;
}
