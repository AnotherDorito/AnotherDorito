using namespace std;
#include <iostream>
#include <cmath>

bool ifprime(int x)
{
    int y=sqrt(x)+1;
    for(int i=2; i<y; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int factorize(int x)
{
    if(ifprime(x))
    {
        cout<<x;
        return 0;
    }
    int a=sqrt(x)+1, factorreps=0, times=0, y=sqrt(x);

    while(x%2==0)
{
    times=1;
    factorreps+=1;
    x=x/2;
}
    if(factorreps>1)
{
    cout<<2<<"^"<<factorreps;
}
    else
{
    if(factorreps==1)
    cout<<2;
}

factorreps=0;


for(int i=3; i<=y; i=i+2)
{
    factorreps=0;

        while(x%i==0)
        {
        factorreps+=1;
        x=x/i;
        }
                if(factorreps>0)
                {
                                    if(times==1)
                {
                if(factorreps>1)
                {
                cout<<"*"<<i<<"^"<<factorreps;
                }
                else
                {
                if(factorreps==1)
                cout<<"*"<<i;
                }

                }

                else
                {
                if(factorreps>1)
                {
                cout<<i<<"^"<<factorreps;
                }
                else
                {
                if(factorreps==1)
                cout<<i;
                }
                times=1;
                }
                }
}
if(x>2)
cout<<"*"<<x;
}





int main()
{
int powt, base;
cin>>powt;

for(int i=0; i<powt; i++)
{
    cin>>base;
    cout<<base<<" = ";
    factorize(base);
    cout<<endl;
}

return 0;
}
