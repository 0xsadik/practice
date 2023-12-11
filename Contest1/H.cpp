// data type guessing 

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    double a, b, c, result, myres;
    cin >> a >> b >> c;

    result = (a * b) / c;
    long long mynum = result;
    myres = result - mynum;

    if (myres > 0) {
        cout << "double\n";
    }
    else if (mynum <= 2147483647) {
        cout << "int\n";
    }
    else {
        cout << "long long\n";
    }
    return 0;
}