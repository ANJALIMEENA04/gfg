//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int index = 0 ,n=arr.size();
        
        for(int i = 0 ; i < n - 1 ; i++) // doubling values
            if(arr[i] != 0 && arr[i] == arr[i + 1])
            {
                arr[i] *= 2 ;
                arr[i + 1] = 0 ;
            }
            
        for(int i = 0 ; i < n ; i++) // shifting non zero to front
            if(arr[i] != 0)
                arr[index++] = arr[i] ;
                
        while(index < n) // filling zero in remaining array
            arr[index++] = 0 ;
            
        return arr;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.modifyAndRearrangeArray(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends