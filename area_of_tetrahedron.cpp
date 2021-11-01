using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{

    int ax, ay, az, bx, by, bz, cx, cy, cz, dx, dy, dz;
    double AB, AC, AD, BC, BD, CD, ABC, ABD, BCD, ACD, p, ABCD;

    cin>>ax>>ay>>az>>bx>>by>>bz>>cx>>cy>>cz>>dx>>dy>>dz;

    AB=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)+(az-bz)*(az-bz));
    AC=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy)+(az-cz)*(az-cz));
    AD=sqrt((ax-dx)*(ax-dx)+(ay-dy)*(ay-dy)+(az-dz)*(az-dz));
    BC=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy)+(bz-cz)*(bz-cz));
    BD=sqrt((bx-dx)*(bx-dx)+(by-dy)*(by-dy)+(bz-dz)*(bz-dz));
    CD=sqrt((cx-dx)*(cx-dx)+(cy-dy)*(cy-dy)+(cz-dz)*(cz-dz));

    p=(AB+BC+AC)/2;
    ABC=sqrt(p*(p-AB)*(p-BC)*(p-AC));
   // cout<<ABC<<endl;;
    p=(AB+BD+AD)/2;
    ABD=sqrt(p*(p-AB)*(p-BD)*(p-AD));
    p=(BC+CD+BD)/2;
    BCD=sqrt(p*(p-BC)*(p-CD)*(p-BD));
    p=(AC+AD+CD)/2;
    ACD=sqrt(p*(p-AC)*(p-AD)*(p-CD));

    ABCD=ABC+ABD+BCD+ACD;

   // cout << setprecision(log(ABCD)+5) << ABCD;
cout << setprecision(30) << ABCD;
    return 0;
}
