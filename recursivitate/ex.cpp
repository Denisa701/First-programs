#include<iostream>
using namespace std;

int main ()
{
    int i,j,r=0;

    char s[30]="ABCD2",b;
    char m[30];
   /*   char t[30]="EFGbnnnn";
    for ( i=0; s[i]!='\0';i++);
for ( r=0; t[r]!='\0';r++);
   cout<<i<<r<<endl;
    //s[i]=t[0];
  for(j=0;t[j];j++)
        s[i+j]=t[j];
    s[i+j]='\0';
    for(j=i;j<i+r;j++)
        s[j]=t[j-i];
    s[i+r]='\0';

        cout<<s<<' '<<t<<endl;
cout<<s+2<<'*/
  for ( i=0; s[i]!='\0';i++);
  cout<<i;
  for(j=i-1;j>=0;j--)

      m[r++]=s[j];



m[r]='\0';
  /*r=i/2;
  for(j=0;j<=r;j++)
  {
      b=s[j];
      s[j]=s[i-j-1];
      s[i-j-1]=b;

  }*/


    cout<<m;

}
