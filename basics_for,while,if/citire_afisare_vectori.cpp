#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    int v1[5], v2[5];
    int n;
    ifstream f;
    f.open("vectori.text");
    f>>n;

    int M[n+1][2];

    for(int i=1;i<=n-1;i++)
    {
        f>>M[i][0];
        v1[i]=M[i][0];
        f>>M[i][1];
        v2[i]=M[i][1];
    }
    f.close();

    ofstream g;
    g.open("vectori2.text");
    for(int j=0;j<=n-1;j++)
    {
        g<<v1[j]<<endl;
        g<<v2[j];
    }
    g.close();
}
