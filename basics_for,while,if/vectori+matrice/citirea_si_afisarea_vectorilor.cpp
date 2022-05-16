#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    int v1[100], v2[100];
    int n;
    ifstream f;
    ofstream g;
    cout<<"Deschidem fisier input"<<endl;
    f.open("vectori.txt");
    f >> n;
    cout<<"Citim "<<n<<endl;

    int M[n][2];

    cout<<"Citim matricea M"<<endl;
    for(int i=0;i<n;i++)
    {
        f>>M[i][0];
        v1[i]=M[i][0];
        f>>M[i][1];
        v2[i]=M[i][1];
    }
    f.close();

    cout<<"Scriem la stdout matricea M"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<M[i][0]<<" "<<M[i][1]<<endl;
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }

    cout<<"Deschidem fisier output"<<endl;
    g.open("vectori2.txt");
    if (!g) return 0;
    cout<<"Scriem in fisier output"<<endl;
    for(int j=0;j<n;j++)
    {
        g<<v2[j]<<" ";
    }
    g<<endl;
    for (int j=0; j<n; j++)
        g<<v1[j]<<" ";
    g.close();
}
