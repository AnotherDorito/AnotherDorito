#include <iostream>
using namespace std;

int factorize(int x)
{
            int a[150], i;
    for(i=0; x>0; i++)
    {
    a[i]=x%2;
    x=x/2;
    }
    for(i=i-1 ;i>=0 ;i--)
    {
    cout<<a[i];
    }
return 0;
}

int main()
{
int repetitions, decimalv;
cin>>repetitions;

    for(int i=0; i<repetitions; i++)
    {
        cin>>decimalv;
        if(decimalv==0)
        {
        cout<<"0"<<endl;
        }
        else
        {
        factorize(decimalv);
        cout<<endl;
        }
    }

return 0;
}
