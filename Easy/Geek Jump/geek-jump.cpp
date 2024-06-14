//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& h, int n) {
        // Code here
        // vector<int> dp(n,0);
        int a=0,b=0;//c,fs,ss;
        for(int i=1;i<n;i++){
            int fs=b+abs(h[i-1]-h[i]),ss=INT_MAX;
            if(i>1)
                ss=a+abs(h[i-2]-h[i]);
            a=b;
            b=min(fs,ss);
        }
        return b;
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