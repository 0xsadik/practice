// ali baba and puzzles

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    int flag = 0;

    long long res1, res2, res3, res4, res5, res6;
    res1 = (a * b) - c;
    res2 = (a * b) + c;
    res3 = a + (b * c);
    res4 = a - (b * c);
    res5 = (a - b) + c;
    res6 = (a + b) - c;

    if (res1 == d || res2 == d || res3 == d || res4 == d || res5 == d || res6 == d) {
        flag = 1;
    }
    if (flag == 1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}