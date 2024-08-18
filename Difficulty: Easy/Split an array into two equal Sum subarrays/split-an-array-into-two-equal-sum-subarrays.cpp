//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long suml=0,sumr=0;
        for(int i=0;i<n;i++){
            suml+=arr[i];
        }
        if(suml==0) return true;
        int l=0,r=n-1;
        while(r>0){
            
            sumr+=arr[r];
            suml-=arr[r];
            r--;
            if(suml==sumr) return true;
            // cout<<sumr<<'-'<<suml<<' ';
            
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends