//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        if(arr.size()==1) return arr[0];
        int mod=1e9+7;
        long long int prod=1;
        sort(arr.begin(),arr.end());
        int neg=0,z=0;
        for(auto x:arr){
            if(x<0) neg++;
            else if (x==0) z++;
            if(x!=0)
                prod=(prod*x)%mod;
            // cout<<prod<<' ';
        }
        if(z==arr.size()) return 0;
        if(prod<0 ){
            if(arr.size()==2 and neg==1) return arr[1];
            prod/=arr[neg-1];
        } 
        return prod;

        // int mod=1e9+7;
        // // if(arr.size()==1) return 
        // long long int prod=1;
        // int neg=0;
        // sort(arr.begin(),arr.end());
        // for(auto x: arr){
        //     if(x<0)neg++;
        //     if(x!=0) prod=(prod*x);
        // }
        // if(arr.size()==2 and neg==1) return arr[1];
        // if(prod<0 and arr.size()>2) prod/=arr[neg-1];
        // return prod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends