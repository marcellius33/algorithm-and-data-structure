#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n;
        string s;
        void solve() {
            cin>>n>>s;
            int ans = 0;
            for(int i=0;i<n-1;i++) {
                if (s[i] == s[i+1])
                    ans++;
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