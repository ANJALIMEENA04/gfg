//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n=arr1.size();
        int a=1,b,i=0,j=0;
        while(i<n && j<n && a<n){
            if(arr1[i]<=arr2[j]) i++;
            else j++;
            a++;
        }
        
        if(arr1[i]<arr2[j]){
            a=arr1[i];
            if(i!=n-1){
                b=min(arr1[i+1],arr2[j]);
            }
            else b=arr2[j];
        }
        else if( arr2[j]<=arr1[i]){
            a=arr2[j];
            if(j!=n-1){
                b=min(arr2[j+1],arr1[i]);
            }
            else b=arr1[i];
        }
        return a+b;
        
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends