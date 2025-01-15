#include <bits/stdc++.h>

using namespace std;

int n , val , p;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("azero.inp" , "r" , stdin);
        freopen("azero.out" , "w" , stdout);

        cin >> n;

        for (int i = 1 ; i <= n ; i++) {
                cin >> val;
                if (val == 1) p = i;
        }

        cout << max(p - 1 , n - p);

        return 0;
}