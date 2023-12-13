#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, concat;
    cin >> a >> b;

    cout << a.size() << ' ' << b.size() << '\n';
    concat = a + b;
    cout << concat << '\n';
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout << a << ' ' << b << '\n';

    return 0;
}