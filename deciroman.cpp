using namespace std;
#include <bits/stdc++.h>

int romanize(int x)
{
    while(x!=0)
    {
        if(x%1000>=0 && x>=1000)
        {
        cout<<"M";
        x=x-1000;
        continue;
        }

        if(x%900>=0 && x>=900)
        {
        cout<<"CM";
        x=x-900;
        continue;
        }

        if(x%500>=0 && x>=500)
        {
        cout<<"D";
        x=x-500;
        continue;
        }
        if(x%400>=0 && x>=400)
        {
        cout<<"CD";
        x=x-400;
        continue;
        }

        if(x%100>=0 && x>=100)
        {
        cout<<"C";
        x=x-100;
        continue;
        }

        if(x%90>=0 && x>=90)
        {
        cout<<"XC";
        x=x-90;
        continue;
        }

        if(x%50>=0 && x>=50)
        {
        cout<<"L";
        x=x-50;
        continue;
        }

        if(x%40>=0 && x>=40)
        {
        cout<<"XL";
        x=x-40;
        continue;
        }

        if(x%10>=0 && x>=10)
        {
        cout<<"X";
        x=x-10;
        continue;
        }

        if(x%9>=0 && x>=9)
        {
        cout<<"IX";
        x=x-9;
        continue;
        }

        if(x%5>=0 && x>=5)
        {
        cout<<"V";
        x=x-5;
        continue;
        }

        if(x%4>=0 && x>=4)
        {
        cout<<"IV";
        x=x-4;
        continue;
        }

        if(x%1>=0 && x>=1)
        {
        cout<<"I";
        x=x-1;
        continue;
        }
    }
return 0;
}

int decimize(string s) {
    map<char, int> roman;
    roman['M'] = 1000;
    roman['D'] = 500;
    roman['C'] = 100;
    roman['L'] = 50;
    roman['X'] = 10;
    roman['V'] = 5;
    roman['I'] = 1;

    int res = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (roman[s[i]] < roman[s[i+1]])
            res -= roman[s[i]];
        else
            res += roman[s[i]];
    }
    res += roman[s[s.size()-1]];
    return res;
}

int main()
{
int reps;
string val;
cin>>reps;
for(int i=0; i<reps; i++)
{
    cin>>val;
    if(isdigit(val[0])){
    int a=stoi(val);
    romanize(a);
    }
    else cout<<decimize(val);
    cout<<endl;
}
return 0;
}
