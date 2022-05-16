#include<iostream>
#include<cmath>
using namespace std;
char i='i';

double delta( double a, double b, double c)
{
    return pow(b,2)-4*a*c;
}
void ec_gr_1( double a, double b)
{
    if( a)
    cout<<-b/a;
else
    cout<< "ai o infinitate de sol";
}
void ec_gr_2_1(double a, double b, double c)
{
    if(delta(a,b,c)==0)
        cout<<-b/(2*a);
}
void ec_gr_2_2(double a,double b, double c)
{
    if(delta(a,b,c)>0)
        cout<<(-b+sqrt(delta(a,b,c)))/(2*a)<<' '<<(-b-sqrt(delta(a,b,c)))/(2*a);

}
void ec_gr_2_3(double a, double b,double c)
{
    if(delta(a,b,c)<0)
        cout<<(-b+i*sqrt(delta(a,b,c)))/(2*a);

}
void rezolvare( double a, double b,double c)
{
    if( a==0)
        ec_gr_1(b,c);
    else
        {
    ec_gr_2_1(a,b,c);
    ec_gr_2_2(a,b,c);
    ec_gr_2_3(a,b,c);}


}
void scrie( double a, double b,double c)
{
    cout<<a<<"x^2+"<<b<<"x+"<<c;

}
void meniu (void)
{
    cout<<"1.ecuatie noua"<<endl;
    cout<<"2.afiseaza ecuatia curenta"<<endl;
    cout<<"3.rezolvarea ecuatia curenta"<<endl;
    cout<<"4.iesire"<<endl;

    int x,a,b,c;
    cin>>x;
    switch(x)
    {
        case 1:{ cin>>a>>b>>c;cout<<endl;}
        case 2: {scrie(a,b,c);cout<<endl;}
        case 3: {rezolvare(a,b,c);cout<<endl;}
        case 4: {cout<<"iesire";cout<<endl;}
    }
    }
    int main()
    {
        meniu ();
    }
