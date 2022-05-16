#include<iostream>
#include<cmath>
using namespace std;

unsigned cifra(unsigned n,unsigned c)
{
    unsigned nr=0;
    while(n)
    {
        if(n%10==c)
            nr++;
        n/=10;
    }
    return nr;
}

bool comune(unsigned a,unsigned b)
{
    unsigned c;
    while(a)
    {
        c=a%10;
        if(cifra(b,c))
            return 1;
        a/=10;
            }
            return 0;
}
int main()
{
    unsigned a,b;
    cin>>a>>b;
    cout<<comune(a,b);

}
