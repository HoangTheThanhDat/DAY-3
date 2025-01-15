#include <bits/stdc++.h>

using namespace std;

string st;
int k;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("brpw.inp" , "r" , stdin);
        freopen("brpw.out" , "w" , stdout);

        cin >> st >> k;

        for (int i = k - 1 ; i < st.size() ; i += k) cout << st[i];

        return 0;
}
