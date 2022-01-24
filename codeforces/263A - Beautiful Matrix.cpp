#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        void solve() {
            int x,y,z;
            for(int i=0;i<5;i++) {
                for(int j=0;j<5;j++) {
                    cin>>z;
                    if(z == 1) {
                        x = i,y = j;
                    }
                }
            }
            cout<<abs(2-x) + abs(2-y)<<'\n';
        }
};

int main()
{
    Solution solution;
    solution.solve();
    return 0;
}