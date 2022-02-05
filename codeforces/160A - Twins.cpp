#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        void solve() {
            int n, total = 0;
            cin>>n;

            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
                total += a[i];
            }
            
            sort(a, a + n, greater<int>());

            int ans = 0, coin = 0;
            for(int i=0;i<n;i++) {
                if (coin * 2 > total) {
                    break;
                }
                ans++;
                coin += a[i];
            }
            cout<<ans<<'\n';
        }
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}