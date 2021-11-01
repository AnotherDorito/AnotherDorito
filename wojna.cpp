using namespace std;
#include <bits/stdc++.h>

void printv(vector<int> v)
{
    for(int j=0; j<v.size(); j++)
    {
            cout<<v[j]<<" ";
    }
}

int winner(vector<int> a, vector<int> b, int tiev)
{
    int i=0;

    while(!a.empty() && !b.empty() && i<tiev)
    {
        if(a[0]>b[0])
        {
            a.push_back(b[0]);
            a.push_back(a[0]);
            b.erase(b.begin());
            a.erase(a.begin());
        }

        else
        {
            b.push_back(a[0]);
            b.push_back(b[0]);
            b.erase(b.begin());
            a.erase(a.begin());
        }
        i+=1;
    }

    if(i>=tiev)
    {
        cout<<"A: ";
        printv(a);
        cout<<endl<<"B: ";
        printv(b);
        return 0;
    }
    if(a.empty())
    cout<<"B wygrywa w turze "<<i<<".";
    else
    cout<<"A wygrywa w turze "<<i<<".";

return 0;
}

int main()
{
int reps, tiev, cards, card;
vector<int> a, b;
cin>>reps;

for(int k=0; k<reps; k++)
{
    a.clear(); b.clear();
    cin>>cards;
    for(int j=0; j<cards; j++)
    {
        cin>>card;
        a.push_back(card);
    }

    cin>>cards;
    for(int j=0; j<cards; j++)
    {
        cin>>card;
        b.push_back(card);
    }
    cin>>tiev;
    winner(a, b, tiev);
    cout<<endl<<endl<<endl;
}

return 0;
}

