using namespace std;
#include <bits/stdc++.h>


int near(const vector<int>& v, int x)
{

    if(v[v.size()-1]<=x)
    {
        return v.size()-1;
    }

    auto h = lower_bound(v.begin(), v.end(), x);

    if (h == v.begin())
    {
        return 0;
    }

    int a=*(h-1);
    int b=*(h);

    if (abs(x-a) <= abs(x-b))
    {
        return h - v.begin() - 1;
    }
    return h - v.begin();
}

int main()
{
    int sets, daysets, visits;
    vector <int> days, visitors;
    cin>>sets;

    for(int i=0; i<sets; i++)
    {
        days.clear();
        visitors.clear();

        cin>>daysets;
        for(int j=0; j<daysets; j++)
        {
        cin>>visits;
        days.push_back(visits);
        }
        cin>>daysets;
        for(int k=0; k<daysets; k++)
        {
        cin>>visits;
        visitors.push_back(visits);
        }
{
        sort(days.begin(), days.end());
}
        for(int l=0; l<visitors.size(); l++)
        {
            cout<<days[near(days, visitors[l])]<<" ";
        }
        cout<<endl<<endl;
    }
}
