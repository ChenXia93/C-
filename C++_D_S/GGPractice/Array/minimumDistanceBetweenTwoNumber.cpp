// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int m1 = -1, m2 = -1;
        int res = INT_MAX;
        for(int i=0; i<n; i++){
            if(a[i] == x){
                m1 = i;
            }
            else if(a[i] == y){
                m2 = i;
            }
            if(m1 != -1 && m2 != -1) {
                res = min(res, abs(m1 - m2));
            }
        }
        if(res == INT_MAX){
            return -1;
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x=1, y=2;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    return 0;
}
// } Driver Code Ends