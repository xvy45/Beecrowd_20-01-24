#include<bits/stdc++.h>
using namespace std;

int main()
{
   double x1, x2, y1, y2, result, p, q;
   cin >> x1 >> y1;
   cin >> x2 >> y2;

   p = (x2 - x1) * (x2 - x1);
   q = (y2 - y1) * (y2 - y1);

   result = sqrt(p + q);
   cout <<fixed << setprecision(4) << result <<endl;


    return 0;
}
