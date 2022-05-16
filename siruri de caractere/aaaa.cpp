#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int nr=0,n;
    char s[1111],t[222]="",x[3333]="";
    cin.get(s,1000);

    char *p,*y;


    p=strtok(s," ");
    while(p)
    {
        if(p[strlen(p)-1]=='.')
        p[strlen(p)-1]='\0';

        if(strstr("COLEGIUL",p)) strcat(x,"COLEGIUL ");
        else {

            if(strstr("LICEUL",p)) strcat(x,"LICEUL ");
            else{
                if(strstr("NATIONAL",p)) strcat(x,"NATIONAL ");
                else{
                    if(strstr("TEORETIC",p)) strcat(x,"TEORETIC ");
                    else {strcat(x,p);strcat(x," ");}
                }}}


        p=strtok(NULL," ");

    }
    cout<<x;
    }
