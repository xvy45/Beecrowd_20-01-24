#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double  NUMBER, SALARY, month, amount;
    cin >> NUMBER >> month >>amount;
    cout << "NUMBER = " <<NUMBER <<endl;

    SALARY  = month * amount;
    cout <<"SALARY = U$ " <<fixed << setprecision(2) <<SALARY ;

    cout << endl;

    return 0;
}
