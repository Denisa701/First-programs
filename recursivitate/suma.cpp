#include<iostream>
#include<cmath>
using namespace std;

int s1(int a)
{
    int s=0,p;
    while (a!=0)
      {
        p=a%10;
        s=s+p;
        a/=10;

      }
      return s;
}
int ciframin(int a)
{
    int i= a%10,p;
    while(a!=0)
    {
        p=a%10;
        if(i>p)
            i=p;
        a=a/10;
    }
    return i;
}
int main()
{
    int n;
    cin>>n;
    cout<<s1(n)<<endl;
    cout<<ciframin(n);
}
