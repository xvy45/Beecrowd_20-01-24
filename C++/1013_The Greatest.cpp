#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maior, a, b, c;
    cin >> a>> b>> c;

    maior = max(a, max(b,c));
   //maior = (a+b+abs(a-b))/2;
   //int result = (maior+c +abs (maior-c))/2;

    cout <<maior <<" eh o maior";

    return 0;
}

