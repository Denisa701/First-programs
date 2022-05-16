#include<iostream>
#include<cstring>

using namespace std;
int  main()
{
    char s[100],t[100];
    cin.get(s,100);
    int a=0;
char x;
bool ok;
    for( int i=0; s[i];i++)
        if( isalpha(s[i]))
    {
        t[a++]=s[i];
    }
    t[a++]='\0';
    cout<<t<<endl;

    do{
       ok=false;
        for(int i=0;i<strlen(s)-1;i++)
            if(s[i]>s[i+1])
            {
                 ok=true;
                x=s[i];
                s[i]=s[i+1];
                s[i+1]=x;
            }
    }while(ok!=false);
    cout<<t;
}




