//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int  mini(int ind,vector<int>& h,vector<int>& dp){
        if(ind==0) return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        
        int twojump=INT_MAX;
        int onejump=mini(ind-1,h,dp)+abs(h[ind]-h[ind-1]);
        if(ind>1) 
            twojump=mini(ind-2,h,dp)+abs(h[ind]-h[ind-2]);
        return dp[ind]=min(onejump,twojump);
        
        
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n,-1);
        return mini(n-1,height,dp);
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends