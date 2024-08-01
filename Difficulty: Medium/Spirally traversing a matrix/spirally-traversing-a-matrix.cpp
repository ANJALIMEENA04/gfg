//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int> arr;
        int n=mat.size(),m=mat[0].size();
        int left=0,top=0,down=n-1,right=m-1;
        int dir=0;
        while(left<=right && top<=down){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    arr.emplace_back(mat[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    arr.emplace_back(mat[i][right]);
                }
                right--;
                
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    arr.emplace_back(mat[down][i]);
                }
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    arr.emplace_back(mat[i][left]);
                }
                left++;
            }
            dir++;
            dir%=4;
        }
        return  arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends