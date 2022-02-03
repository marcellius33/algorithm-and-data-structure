#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string s;
        void solve() {
            cin >> s;
            int a[26] = {0};
            for(int i=0;i<s.size();i++) {
                a[s[i] - 'a'] ++;
            }
            int cnt = 0;
            for(int i=0;i< 26;i++) {
                if(a[i] != 0)
                    cnt++;
            }
            string ans = cnt % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
            cout<<ans<<'\n';
        }
        
        
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}