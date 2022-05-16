#include<iostream>

using namespace std;
int v[100];
int n;

void H(int n, int i, int j)
{
if(n==1)
    cout<<i<< "->"<<j<<endl;
else
{
    int k=6-(i+j);
    H(n-1,i,k);
    H(1,i,j);
    H(n-1,k,j);
}
}

int main()
{
    int n,i,j;
    cin>>n>>i>>j;
     H(n,i,j);

}
