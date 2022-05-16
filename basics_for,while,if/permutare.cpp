#include<iostream>
using namespace std;
int main()
{
    const int MAX=100;
    int n,p,x; bool y;
    int v1[MAX],v2[MAX],s[MAX];
    cout<<"n este: ";cin>>n;
    cout<<"v1 este :";
    for(int i=0;i<n;i++)
        cin>>v1[i];

    for(int i=0;i<=n-2;i++)
    {
        p=i;
        for(int j=i+1;j<=n-1;j++)
            if(v1[j]<v1[p])
            p=j;
        if(p!=i)
        {
            x=v1[p];
            v1[p]=v1[i];
            v1[i]=x;
        }
    }

        cout<<"vectorul sortat este: ";
        for(int i=0;i<n;i++)
            cout<<v1[i]<<' ';
            cout<<endl;
        for(int i=0;i<=n-1;i++)
            v2[i]=i+1;

            y=true;
        for(int i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])

               {
                   y=false;break;
               }
        }
             if(y==true)
                cout<<"e permutare";
             else
                cout<<"nu e permutare";
    }





