#include <iostream>
#include<cstring>
using namespace std;

void inversare( char s[], int left, int right)
{
    char x;
    while(left<right)
    {
        x=s[left];
        s[left]=s[right];
        s[right]=x;
        left++;
        right--;
    }
}
int main()
{
    char s[100];
    cin.get(s,100);
    int x=strlen(s),i,nr=0,a=0, left,right;
    for(i=1;i<x;i++)
    {
        if((s[i]!=' '&& s[i-1]==' ')|| (i==0) )
                    left=i;



        if(s[i]!=' '&& s[i+1]==' '|| (s[i+1]=='\0'))
        {
            right=i;
            inversare(s,left,right);

        }
   /* if(nr==a)
           {
               cout<<left<<' '<<right<<' '<<nr<<' '<<a<<' '<<i<<endl;

           }*/
    }
    cout<<s;
}
