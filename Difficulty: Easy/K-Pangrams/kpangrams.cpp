//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        vector<int> letter(26,0);
        for(char x:str){
            if(x!=' ')
                letter[x-'a']++;
        }
        int sum=0,n=0;
        for(int i=0;i<26;i++){
            if(letter[i]!=0){
                n++;
                sum+=letter[i];
            }
        }
        if(sum>=26 and 26-n<=k) return true;
        return  false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends