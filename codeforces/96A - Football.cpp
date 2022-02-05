#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string s;
        void solve() {
            cin>>s;
            int mx = 0, current = 1;
            s += " ";

            for(int i=0;i<s.size() - 1;i++) {
                if (s[i] == s[i+1]) {
                    current++;
                } else {
                    mx = max(mx, current);
                    current = 1;
                }
            }
            
            string ans = mx >= 7 ? "YES" : "NO";
            cout<<ans<<'\n';
        }
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}