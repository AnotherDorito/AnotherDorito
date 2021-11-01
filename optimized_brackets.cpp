using namespace std;
#include <bits/stdc++.h>

//some stuff needs fixing, TBD;

void printv(vector<char> v)
{
    for(int j=0; j<v.size(); j++)
    {
            cout<<v[j];
    }
}

int braverse(stack<char> i)
{
    vector<char> o;

    while(!i.empty())
    {
        if(i.top()=='(')
        {
            i.pop();
            o.push_back(')');
            continue;
        }

        if(i.top()=='{')
        {
            i.pop();
            o.push_back('}');
            continue;
        }

        if(i.top()=='[')
        {
            i.pop();
            o.push_back(']');
            continue;
        }
    }
//    reverse(o.begin(), o.end());
    printv(o);
    return 0;
}

int brack(string b)
{
    stack<char> a;
    int c;
    for(int i=0; i<b.size(); i++)
    {
        c=0;
        if(b[i]==')' || b[i]=='}' || b[i]==']')
        {
            c=1;
            if(a.empty())
            {
                cout<<"NIE";
                return 0;
            }
            if(b[i]=='}' && a.top()=='{')
            {
                    a.pop();
                    continue;
            }
            if(b[i]==')' && a.top()=='(')
            {
                    a.pop();
                    continue;
            }
            if(b[i]==']' && a.top()=='[')
            {
                    a.pop();
                    continue;
            }
            cout<<"NIE";
            return 0;
        }
        if(c!=1)
        {
            a.push(b[i]);
        }
    }

if(a.empty())
{
    cout<<"TAK";
    return 0;
}
//wrzucamy stack samych nawiasów otwieraj¹cych
braverse(a);
return 0;
}



int main()
{
int reps;
string b;
cin>>reps;
for(int i=0; i<reps; i++)
{
    cin>>b;
    brack(b);
    cout<<endl;
}
return 0;
}
