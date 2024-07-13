//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // int allpos(int last,int i,long long sum, vector<vector<int>> vec){
    //     if(i<0) return 0;
    //     int a,b;
    //     if(last==0){
    //         a=allpos(1,i-1,sum+vec[i][1],vec);
    //         b=allpos(2,i-1,sum+vec[i][2],vec);
    //     }
    //     else if(last==1){
    //         b=allpos(0,i-1,sum+vec[i][0],vec);
    //         a=allpos(2,i-1,sum+vec[i][2],vec;)
    //     }
    //     else{
    //         a= allpos(1,i-1,sum+vec[i][1],vec);
    //         b=allpos(0,i-1,sum+vec[i][0],vec;)
    //     }
    //     return max(a,b);
    // }
    int maximumPoints(vector<vector<int>>& points, int n) {
        for(int i=1;i<n;i++){
            for(int j=0;j<3;j++){
                points[i][j]=points[i][j]+max(points[i-1][(j+1)%3],points[i-1][(j+2)%3]);
            }
        }
        return max({points[n-1][0],points[n-1][1],points[n-1][2]});
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends