#include<iostream>
using namespace std;

void sPar(int n)
{
    bool ok=true;
    int i=1,m,s=0;


    while(ok==true)
    {
        m=n+i;
        cout<<m<<' ';

        if(m%2==0)
        {
            for(int d=2; d<m;d++)
                 if(m%d==0)
                        s=s+d;

                cout<<s<<' ';
        if(s%2==0)
            ok=false;
        }
        s=0;
        cout<<ok<<endl;
        i++;
    }

cout<<m<<endl;

}

int main()
{
    int n;
    cin>>n;
    sPar(n);

}
