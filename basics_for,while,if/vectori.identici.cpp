#include<iostream>

using namespace std;

int main()
{
    const int MAX=20;
    int n; bool x;
    int v[MAX],m[MAX];
    cout<<"n este: ";cin>>n;
    cout<<"vectorul v este: ";
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<endl;
    cout<<"vectorul m este: ";
    for(int i=0;i<n;i++)
        cin>>m[i];
    cout<<endl;

    x=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=m[i])
        {
            x=false;
            break;
        }
    }
    if(x==true)
        cout<<"sunt identici";
    else
        cout<<"nu sunt identici";
}
