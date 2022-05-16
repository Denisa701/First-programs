int a, b, i;
    int ao = 0, bo = 0, c = 0;
    int ai, bi;
    cin>>a>>b;

    ai = a;
    bi = b;
    if (a/1000 == 0)
    {
        if (b/1000 == 0)
        {
            for(i=0;i<3;i++)
            {
                c = a%10;
                ao = ao*10 + c;
                c = b%10;
                bo = bo*10 + c;

                if (a/10 == 0 && i==0)
                    if (b/10 == 0)
                    {
                        cout<<"ambele numere nu au 3 cifre"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<a<<" nu are 3 cifre"<<endl;
                        break;
                    }
                else
                {
                    if (b/10 == 0 && i == 0)
                    {
                        cout<<b<<" nu are 3 cifre"<<endl;
                        break;int a, b, i;
    int ao = 0, bo = 0, c = 0;
    int ai, bi;
    cin>>a>>b;

    ai = a;
    bi = b;
    if (a/1000 == 0)
    {
        if (b/1000 == 0)
        {
            for(i=0;i<3;i++)
            {
                c = a%10;
                ao = ao*10 + c;
                c = b%10;
                bo = bo*10 + c;

                if (a/10 == 0 && i==0)
                    if (b/10 == 0)
                    {
                        cout<<"ambele numere nu au 3 cifre"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<a<<" nu are 3 cifre"<<endl;
                        break;
                    }
                else
                {
                    if (b/10 == 0 && i == 0)
                    {
                        cout<<b<<" nu are 3 cifre"<<endl;
                        break;
                    }
                    else
                    {
                        a = a/10;
                        b = b/10;
                    }
                }
            }
        }
        else
            cout<<b<<" nu are 3 cifre"<<endl;
    }
    else
        if (b/1000 != 0)
            cout<<"ambele nu au 3 cifre"<<endl;
        else
            cout<<a<<" nu are 3 cifre"<<endl;

    if (ao > bo)
        cout<<ai<<endl;
    else
        cout<<bi<<endl;
    return 0;
                    }
                    else
                    {
                        a = a/10;
                        b = b/10;
                    }
                }
            }
        }
        else
            cout<<b<<" nu are 3 cifre"<<endl;
    }
    else
        if (b/1000 != 0)
            cout<<"ambele nu au 3 cifre"<<endl;
        else
            cout<<a<<" nu are 3 cifre"<<endl;

    if (ao > bo)
        cout<<ai<<endl;
    else
        cout<<bi<<endl;
    return 0;
