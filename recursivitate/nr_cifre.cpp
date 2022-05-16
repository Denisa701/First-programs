#include<iostream>
#include<cmath>
using namespace std;

void cifre(unsigned n, unsigned& pare,unsigned & impare)
{
    impare=0;
    pare=0;
    while(n)
    {
        if(n%10%2)
            impare ++;
        else
            pare++;
        n/=10;

    }
}
int main()
{
    unsigned n,pare,impare;
    cin>>n;
    cifre(n,pare,impare);
    cout<<pare<<' '<<impare;
}

