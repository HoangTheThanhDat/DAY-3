#include <bits/stdc++.h>

using namespace std;

string a , b;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("add.inp" , "r" , stdin);
        freopen("add.out" , "w" , stdout);

        cin >> a >> b;

        while (a.size() < b.size()) a = '0' + a;
        while (b.size() < a.size()) b = '0' + b;

        string ans = ""; 
        for (int i = 1 ; i <= a.size() ; i++) ans += " ";

        int remember = 0;

        for (int i = a.size() - 1 ; i >= 0 ; i--) {
                int sum = a[i] + b[i] - 2 * '0' + remember;

                if (sum > 9) remember = 1 , sum = sum % 10;
                else remember = 0;

                ans[i] = sum + '0'; 
        }

        if (remember == 1) ans = '1' + ans;

        cout << ans;

        return 0;
}