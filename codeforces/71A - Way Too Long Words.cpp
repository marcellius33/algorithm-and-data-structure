#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string q;

        void solve() {
            int len = q.size();
            if (len > 10) {
                cout<<q[0]<<len-2<<q[q.size()-1]<<'\n';
            } else {
                cout<<q<<'\n';
            }
        }
    
};

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++) {
        Solution solution;
        cin>>solution.q;
        solution.solve();
    }
    return 0;
}