//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

     string removeDups(string str) {
        // Your code goes here
        string s;
        unordered_set<char> s1;
        vector<int> arr(26);
        for(char x: str){
            if(s1.find(x)==s1.end()) s+=x;
            s1.insert(x);
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends