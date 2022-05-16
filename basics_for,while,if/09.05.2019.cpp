#include<iostream>
using namespace std;
int main()
{
    const int MAX=20;
    int n,p,x;
    int t[MAX];
    cout<<" n este: ";cin>>n;
    cout<<"vectorul este: "<<endl;
   for(int i=0;i<n;i++)
        cin>>t[i];
    for(int i=0;i<n;i++)
        cout<<t[i]<<' ';

    for(int i=0;i<n-2;i++)
    {
        p=i;
        for( int j=i+1;j<=n-1;j++)
            if(t[j]<t[p])
            p=j;
        if(p!=i)
        {
            x=t[p];
            t[p]=t[i];
            t[i]=x;

    }
    cout<<"vectorul sortat este: "<<endl;
        for(int i=0;i<n;i++)
        cout<<t[i]<<' ';

}
