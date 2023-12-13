// basic 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    // step 1
    int len1 = a.size();
    int len2 = b.size();
    cout << len1 << ' ' << len2 << '\n';
    // step 2
    string conc = a + b;
    cout << conc << '\n';
    // step 3
    swap(a[0], b[0]);
    cout << a << ' ' << b << '\n';

    return 0;
}