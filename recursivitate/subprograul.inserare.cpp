#include<iostream>
using namespace std;

void inserare( int long n)
{
int c,x=0,p=1,d,m;
    while(n/10!=0)
    {

        c=n%10;
        d=(n/10)%10;

        cout<<c<<' '<<d<<' ';

       m=c-d;
        cout<<m<<endl;
        if(m<0)
            m=m*(-1);
        for(int i=0;i<2;i++)
            if(i==0)
           {
                x=p*c+x;
                p=p*10;
           }
        else
        {
            x=p*m+x;
            p=p*10;
        }
    n=n/10;
    cout<<n<<' '<<x<<' '<<p<<endl;
    }
    x=p*n+x;

cout<<x;

}
int main()
{
    int n;
    cin>>n;
    inserare(n);

}
