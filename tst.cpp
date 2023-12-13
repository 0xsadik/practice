#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        double share = (double) n / (k + 1);
        int roundedshr = (int) floor(share);
        int netamnt = n - roundedshr * k;

        cout << netamnt << '\n';
    }
    return 0;
}