#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n;

        void solve() {
            if (n%2 == 0 && n > 2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    
};

int main()
{
    Solution solution;
    cin>>solution.n;
    solution.solve();
    return 0;
}