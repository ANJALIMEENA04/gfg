//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        // int m=mat[0].size();
        int z=0,cnt=-1;
        for(int i=0;i<n;i++){
            z=0;
            for(int j=0;j<n;j++){
                if(!mat[i][j]) z++;
            }
            if(z==n) {
                if(cnt==-1) {
                    // cnt=i; 
                    int zero=0;   
                    for(int j=0;j<n;j++){
                        if(mat[j][i]) zero++;
                    }
                    if(zero==n-1) cnt=i;
                } 
                else return -1;
            }
            // z=0;
            // cout<<z<<' ';
        }
        if(cnt!=-1) return cnt;
        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends