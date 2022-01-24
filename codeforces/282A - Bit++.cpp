#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n;

        void solve() {
            string a;
            int ans = 0;
            for(int i=0;i<n;i++) {
                cin>>a;
                if (a[0] == '+' || a[1] == '+' || a[2] == '+')
                    ans++;
                else
                    ans--;
            }
            cout<<ans<<'\n';
        }
};

int main()
{
    Solution solution;
    cin>>solution.n;
    solution.solve();
    return 0;
}