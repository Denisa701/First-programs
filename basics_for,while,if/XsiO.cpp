#include <iostream>
using namespace std;
int main()
{
    unsigned A[3][3];
int i,j;
    bool ok;
    for (int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
            cin>>A[i][j];

    for (int i=0;i<=2;i++)
    {
        ok=false;
        for(int j=0;j<=2;j++)
        {
            if(A[i][j]==A[i][j+1])
                ok=true;
            else
            {
                ok=false;
                break;
            }
        }
        if(ok==true)
            cout<<A[i][j]<<"castigator";
    }

    for (int j=0;i<=2;i++)
    {
        ok=false;
        for(int i=0;j<=2;j++)
        {
            if(A[i+1][j]==A[i+1][j])
                ok=true;
            else
            {
                ok=false;
                break;
            }
        }
        if(ok==true)
            cout<<A[i][j]<<"castigator";
   }

  }
