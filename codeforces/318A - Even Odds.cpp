#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        void solve() {
            long long n,k;
            cin>>n>>k;

            if (k  <= (n+1)/2) {
                cout<<2*k - 1<<'\n';
            } else {
                cout<<2* (k - (n+1)/2)<<'\n';
            }
        }
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}