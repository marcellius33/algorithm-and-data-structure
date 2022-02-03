#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string s;

        void solve()
        {
            cin>>s;
            int a[3] = {0};
            string ans = "";
            for (int i=0;i<s.size();i++) {
                if (s[i] == '+')
                    continue;
                a[s[i] - '1']++;
            }
            for(int i=0;i<3;i++) {
                for(int j=0;j<a[i];j++) {
                    if (ans == "") {
                        ans += (char)('1' + i);
                    } else {
                        ans += "+";
                        ans += (char)('1' + i);
                    }
                }
            }
            cout<< ans <<'\n';
        }
        
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}