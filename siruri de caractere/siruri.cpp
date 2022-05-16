#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int nr=0,n;
    char s[1111];
    cin.get(s,1000);
    cin>>n;
    char *p;
   /* p=strchr(s,'a');
    while(p)
    {
        x=p-s;
        cout<<x<<" ";
        strcpy(s+x,s+x+1);
        p=strchr(s,'a');
    }
    cout<<"Acesta este s"<<s<<endl<<"si dupa p"<<p;*/
    p=strtok(s," ");
    while(p)
    {
        if(n==strlen(p))
        {
            cout<<p;
            nr++;
        }
        p=strtok(NULL,"  ,;");
    }
    if(nr==0)
        cout<<"nu exista";
}
