#include <bits/stdc++.h>

using namespace std;

const string cf = "codeforces";

string st;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("lovecf.inp" , "r" , stdin);
        freopen("lovecf.out" , "w" , stdout);

        cin >> st;

        int ans = 0;

        for (int i = 0 ; i < 10 ; i++) 
                if (st[i] != cf[i]) ++ans;
        
        cout << ans;

        return 0;
}