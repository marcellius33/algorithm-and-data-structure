#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n;

        void solve() {
            cin>>n;

            int cnt = 0, x, ans = 0;
            for (int i=0;i<n;i++) {
                for(int j=0;j<3;j++) {
                    cin>>x;
                    if (x == 1)
                        cnt++;
                }
                if (cnt >= 2)
                    ans++;
                cnt = 0;
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