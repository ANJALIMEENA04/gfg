//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int mini(int i,int k,vector<int>& h,vector<int>& dp){
        if(i==0) return 0;
        if(dp[i]!=-1) return dp[i];
        int ss=INT_MAX;
        int fs;//=mini(i-1,k,h,dp)+abs(h[i]-h[i-1]);
        for(int j=1;j<=k;j++){
            if(i>=j)
                fs=mini(i-j,k,h,dp)+abs(h[i]-h[i-j]);
            ss=min(ss,fs);
            // cout<<ss<<' ';
        }
        return dp[i]=ss;
    }
    int minimizeCost(vector<int>& h, int n, int k) {
        // Code here
        vector<int> dp(n,-1);
        return mini(n-1,k,h,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends