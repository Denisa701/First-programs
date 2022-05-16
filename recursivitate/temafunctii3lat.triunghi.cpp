
#include<iostream>
#include<cmath>
using namespace std;

void triunghi(unsigned a,unsigned b, unsigned c)
{
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        cout<<"da";
    else
        cout<<"nu";

}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    triunghi(x,y,z);
}
