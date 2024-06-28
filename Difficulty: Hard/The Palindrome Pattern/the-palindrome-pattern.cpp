//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<r){
                if(arr[i][l]!=arr[i][r]) break;
                l++;
                r--;
            }
            if(l>=r) return to_string(i)+" R";
        }
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<r){
                if(arr[l][i]!=arr[r][i]) break;
                l++;
                r--;
            }
            if(l>=r) return to_string(i)+" C";
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends