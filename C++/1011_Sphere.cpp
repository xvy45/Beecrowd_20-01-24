#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.14159, R;
    cin >> R;

    R = (4/3.0 *pi*R*R*R);
    cout <<fixed << setprecision(3)  <<"VOLUME = " << R;

    return 0;
}
