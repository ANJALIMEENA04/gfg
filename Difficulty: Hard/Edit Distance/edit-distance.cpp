//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int editDistance(string str1, string str2) {
        // Code here
        int n=str1.size();
        int m=str2.size();
         
        vector<vector<int>> lcs(n+1,vector<int> (m+1,0));
        for(int i=0;i<=n;i++) lcs[i][0]=i;
        for(int i=0;i<=m;i++) lcs[0][i]=i;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                    lcs[i][j]=lcs[i-1][j-1];
                }
                else{
                    lcs[i][j]=1+min(lcs[i-1][j-1],min(lcs[i][j-1],lcs[i-1][j]));
                }
            }
        }
        return lcs[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends