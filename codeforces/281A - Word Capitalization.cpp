#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string s;
        void solve() {
            cin >> s;
            if (s[0] >= 'a' && s[0] <= 'z') {
                s[0] -= 32;
            }
            cout<<s<<'\n';
        }
        
        
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}