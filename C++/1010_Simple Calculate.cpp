#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int price1, price2, units1, units2;
    double product1_price, product2_price;

    cin >> price1 >> units1 >> product1_price >> price2 >> units2 >> product2_price;

    double pay = (units1 * product1_price) + (units2 * product2_price);

    cout << fixed << setprecision(2) <<"VALOR A PAGAR: R$ " << pay << endl;

    return 0;
}
