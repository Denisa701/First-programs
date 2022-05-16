#include <iostream>

using namespace std;

int main()
{
    const int MAX=20;
    int n,i,x;
    int v[MAX];
    bool ok1, ok2;
    cout<<" n este: ";
    cin>>n;
    cout<<"vectorul este: "<<endl;
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n-1;i++)
    {
        ok1 = true;
        ok2 = true;
        if (v[i] % 2 == 0)
            ok1 = true; //v[i] par
        else
            ok1 = false; //v[i] impar
        if (v[i+1] % 2 == 0)
            ok2 = true; //v[i+1] par
        else
            ok2 = false; //v[i+1] impar

        if (((ok1 == false) && (ok2 == true)) || ((ok1 == true) && (ok2 == false)))
        {
            x = v[i];
            v[i] = v[i+1];
            v[i+1] = x;
        }
        /*if(v[i]>v[i+1])
        {
            cout<<"v nu e sortat";
            cout<<v[i]<<v[i+1]<<' ';
        }
        else
            cout<<"v este sortat"; */
    }

    for (int i=0; i<n; i++)
        cout<<v[i]<<' ';
    cout<<endl;
}
