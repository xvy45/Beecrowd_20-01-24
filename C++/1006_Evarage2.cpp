#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double A,B,C, MEDIA = 0;
        cin >>A >>B >>C;

        A = A*2;
        B = B*3;
        C = C*5;

        MEDIA = (A+B+C)/(2+3+5);
        cout << "MEDIA = " << fixed <<setprecision(1) << MEDIA;
        cout <<endl;

    return 0;
}
