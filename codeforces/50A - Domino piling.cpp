#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int n,m;

        void solve() {
            cout<<(n*m)/2<<'\n';
        }
};

int main()
{
    Solution solution;
    cin>>solution.m>>solution.n;
    solution.solve();
    
    return 0;
}