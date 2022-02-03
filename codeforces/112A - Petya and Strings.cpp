#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string a,b;

        void solve() {
            cin>>a>>b;
            int sz = a.size(), ans = 0;
            for(int i=0;i < sz;i++) {
                if (a[i] >= 'A' && a[i] <= 'Z') {
                    a[i] += 32;
                }
                if (b[i] >= 'A' && b[i] <= 'Z') {
                    b[i] += 32;
                }
                if (a[i] > b[i]) {
                    ans = 1;
                    break;
                } else if (a[i] < b[i]) {
                    ans = -1;
                    break;
                }
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