using namespace std;
#include <iostream>

int main()
{
    int repetitions, nogi, result;

    cin>>repetitions;

    for(int i=0; i<repetitions; i++)
	{
            int segmentolki;
        cin>>segmentolki;
            result=segmentolki;
        for(int h=0; h<segmentolki; h++)
        {
            cin>>nogi;
            result=nogi+result;
        }
        result=result-1;
    cout<<result<<endl;
    result=0;
    }


    return 0;
}
