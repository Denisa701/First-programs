#include<iostream>
#include<cmath>
using namespace std;

unsigned ogl( unsigned n, unsigned i)
{
if(n==0) return i;
cout<<"ogl("<<n<<','<<i<<")"<<endl;
return ogl(n/10, n%10+i*10);
}
bool prim( long long int n, unsigned d)
{
    if(n%d==0) return false;

    cout<<"prim("<<n<<','<<d<<")"<<endl;
     if (d<=sqrt(n)) return prim(n, d+1);
}
int main()
{
cout<<prim(1989,2);
}
