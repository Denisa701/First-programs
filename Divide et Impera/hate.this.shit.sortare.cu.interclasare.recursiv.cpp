#include<iostream>

using namespace std;
int v[100];
int n;

void interclasare(int st,int m,int dr)
{
    int Z[100],i=st,j=m+1,k=0;
    while(i<=m && j<=dr)
        if(v[i]<v[j])  Z[k++]=v[i++];
        else  Z[k++]=v[j++];

    for(int a=i;a<=m;a++)
        Z[k++]=v[a];
     for(int a=j;a<=dr;a++)
        Z[k++]=v[a];
      for(int a=st;a<=dr;a++)
        v[a]=Z[a-st];

}

void sortare(int st, int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        sortare(st,m);
        sortare(m+1,dr);
        interclasare(st,m,dr);
    }
}

int main()
{
    cin>>n;
     for(int a=0;a<n;a++)
        cin>>v[a];
     sortare(0,n-1);
      for(int a=0;a<n;a++)
        cout<<v[a]<<' ';
}
