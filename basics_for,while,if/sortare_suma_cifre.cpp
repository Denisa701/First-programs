#include <iostream>

using namespace std;

int main()
{
    int v[100], s[100];
    int n, x, cat, rest, p;

    cout<<"Citim n:"<<endl;
    cin>>n;

    cout<<"Citim vectorul"<<endl;
    for (int i=0; i<n; i++)
        cin>>v[i];

    cout<<"Calculam suma cifrelor elementelor din vector"<<endl;
    for (int i=0; i<n; i++)
    {
        x = v[i];
        cat = x / 10;
        rest = x % 10;
        s[i] = 0;
        while ((cat != 0) || (rest != 0))
        {
            s[i] += rest;
            x = cat;
            cat = x / 10;
            rest = x % 10;
        }
    }

    cout<<"Scriem vectorul sumei cifrelor"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;

    cout<<"Sortam vectorul s"<<endl;
    for(int i=0; i<n-1; i++)
    {
        p=i;
        for(int j=i+1; j<n; j++)
        {
            if(s[j]<s[p])
                p=j;
            if(p!=i)
            {
                x = s[p];
                s[p] = s[i];
                s[i] = x;
                x = v[p];
                v[p] = v[i];
                v[i] = x;
                p = i; //adaugare
            }
        }
    }

    cout<<"Scriem vectorul sumei cifrelor"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;

    cout<<"Scriem vectorul v sortat conform cerintei"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
