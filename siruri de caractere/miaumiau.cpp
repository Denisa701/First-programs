#include<iostream>
#include<cstring>

using namespace std;
int main()
{




         cout<<endl<<"ex 4~2015 var 9"<<endl;
         char b[100], a[100];
         cin.get(b,100);
         cout<<strlen(b)<<endl;
         cout<< (strlen(b))/2<<endl;

         a[(strlen(b))/2]='\0';

         for(int i=0;a[i]!='\0';i++)

          {
            a[i]=b[i];
         cout<<a[i]<<' '<<b[i]<<endl;;
         }
         cout<<a;

//de fiecare data imi pune doar 3 caractere in a
}
