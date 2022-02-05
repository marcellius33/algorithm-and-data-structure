#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        void solve() {
            string s;
            cin>>s;
            
            bool ans = false;
            char key[4] = {'H', 'Q', '9'};
            for (int i=0;i<s.size();i++) {
                for (int j=0;j<3;j++) {
                    if (s[i] == key[j]) {
                        ans = true;
                        break;
                    }
                }
                if (ans)
                    break;
            }
            if (ans) cout<<"YES\n";
            else cout <<"NO\n";
        }
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}