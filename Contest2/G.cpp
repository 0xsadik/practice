#include<bits/stdc++.h>
using namespace std;

int res[1000007];

int main()
{
    long long t, cnt;
    cin >> t;
    cnt = 0;
    while(t--) {
        long long a, b;
        cin >> a >> b;

        if (a * (a + 1) / 2 < b) {
            cout << -1;
        }
        else {
            long long sum = 0;
            for (int i = a; i >= 1; i--) {
                if (sum + i <= b) {
                    sum += i;
                    res[cnt] = i;
                    cnt++;
                }
                if (sum == b) {
                    break;
                }
            }
        }
        for (int i = 0; i < cnt; i++) {
            cout << res[i] << ' ';
        }
        cout << '\n';
        cnt = 0;
    }
    return 0;
}