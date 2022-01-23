#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n,k;

        void solve() {
            int a[n],ans = 0;
            for (int i=0;i<n;i++) {
                cin>>a[i];
            }
            for (int i=0;i<n;i++) {
                if (a[i] >= a[k-1] && a[i] > 0)
                    ans++;
            }
            cout<<ans<<'\n';
        }
        
    
};

int main()
{
    Solution solution;
    cin>>solution.n>>solution.k;
    solution.solve();
    
    return 0;
}