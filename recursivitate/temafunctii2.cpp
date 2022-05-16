
#include<iostream>
#include<cmath>
using namespace std;

int ec_gr_1(double a,double b)
{
    if(a==0&&b==0)

        return 2;
    else
    {
        if(a==0)
            return 0;
        else
            return 1;
        }


}
int main ()
{
    int x,y;
    cin>>x>>y;
    cout<<ec_gr_1(x,y);
}
