#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double sellers , sales , TOTAL;
    string name;
    cin >> name >> sellers >> sales;

    TOTAL = sellers + (sales*15)/100;
    cout << fixed << setprecision(2) <<"TOTAL = R$ " <<TOTAL <<endl;

    return 0;
}
