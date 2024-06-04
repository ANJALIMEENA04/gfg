//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int i=0;
        while(s[i]=='0') i++;
        string ans="";
        while(i<s.size()){
            ans+=s[i];
            i++;
        }
        
        reverse(ans.begin(),ans.end());
        
        i=0;
        while(ans[i]!='0' && i<ans.size())
        {
            ans[i]='0';
            i++;
        }
        if(i==ans.size()) ans+='1';
        else ans[i]='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends