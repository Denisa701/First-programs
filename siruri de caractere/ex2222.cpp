#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    char s[100];
    cin.get( s,10);
    for( int i=0; s[i];i++)

        if( islower(s[i]))
            {strcpy(s+i,s+i+1);
            i--;}

cout<< s;
}
