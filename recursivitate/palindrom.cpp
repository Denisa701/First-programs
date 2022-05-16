#include<iostream>
#include<cmath>
using namespace std;

unsigned oglindit (unsigned n)
{
    unsigned c=0;

    while(n)
        {
       c=c*10+n%10;
    n/=10;
        }
        return c;
}
 unsigned palindrom(unsigned n)
 {
     return oglindit(n)==n;
}
int main()
{
    unsigned a;
    cin>>a;
    if (palindrom(a))
     cout<<"Da";
        else
        cout<<"nu";

}
