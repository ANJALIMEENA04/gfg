//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
         if(s>d*9)
        {
            return "-1";
        }
        string str="";
        s--;
        int a=0;
        for(int i=0;i<d-1;i++)
        {
            if(s>0)
            {
                 a=min(9,s);
                s-=a;
                str+=to_string(a);
            }
            else
            {
                str.push_back('0');
            }
        }
        a=1+s;
        str+=to_string(a);
        reverse(str.begin(),str.end());
        return str;        
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
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends