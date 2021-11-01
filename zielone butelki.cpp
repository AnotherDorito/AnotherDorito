using namespace std;
#include <iostream>
#include <cmath>


int buzzprime(int x)
{
    int y=sqrt(x)+1;
    if(x==1)
    {
        cout<<"1 green bottle";
        return 0;
    }
    if(x==0)
    {
        cout<<"no green bottles";
        return 0;
    }
    for(int i=2; i<y; i++)
    {
        if(x%i==0)
        {
            cout<<x<<" green bottles";
            return 0;
        }
    }
    cout<<"BUZZ green bottles";
    return 0;
}

int main()
{
    int powt, b, c;
    cin>>powt;

    for(int i=powt; i>0; i--)
    {
        buzzprime(i);
        cout<<" standing on the wall."<<endl;
        buzzprime(i);
        cout<<" standing on the wall."<<endl;
        cout<<"and if one green bottle should accidentally fall,"<<endl;
        cout<<"there'd be ";
        buzzprime(i-1);
        cout<<" standing on the wall."<<endl<<endl;
    }

    return 0;
}
