//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=0,h=n-1;
        vector<int> ans(2,-1);
        while(l<=h){
            int m=l+(h-l)/2;
            if(arr[m]>=x) {
                h=m-1;
                ans[1]=m;
            }
            else l=m+1;
        }
        l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(arr[m]<=x){
                ans[0]=m;
                l=m+1;
            }
            else h=m-1;
        }
        if(ans[0]!=-1) ans[0]=arr[ans[0]];
        if(ans[1]!=-1) ans[1]=arr[ans[1]];
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends