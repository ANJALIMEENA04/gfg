//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *right, *down;

    Node(int x) {
        data = x;
        right = NULL;
        down = NULL;
    }
};


// } Driver Code Ends
/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n=mat.size(),m=mat[0].size();
        vector<vector<Node*>> ans(n,vector<Node*>(m,NULL));
        // Node*curr=* head=new Node(mat[0][0]);
        ans[0][0]=new Node(mat[0][0]);
        for(int i=1;i<n;i++){
            Node* temp=new Node(mat[i][0]);
            ans[i][0]=temp;
            ans[i-1][0]->down=temp;
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                Node* temp=new Node(mat[i][j]);
                ans[i][j]=temp;
                if(i!=0)    ans[i-1][j]->down=temp;
                ans[i][j-1]->right=temp;
            }
        }
        return ans[0][0];
        
        
    }
};

//{ Driver Code Starts.

void display(Node* head) {
    Node* Rp;
    Node* Dp = head;
    while (Dp) {
        Rp = Dp;
        while (Rp) {
            cout << Rp->data << " ";
            if (Rp->right)
                cout << Rp->right->data << " ";
            else
                cout << "null ";
            if (Rp->down)
                cout << Rp->down->data << " ";
            else
                cout << "null ";
            Rp = Rp->right;
        }
        Dp = Dp->down;
    }
}

// Driver program
int main() {
    int t;
    cin >> t;
    cin.ignore(); // To handle new line after integer input

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;

        // Read the first row of the matrix
        while (ss >> num) {
            nums.push_back(num);
        }

        int n = nums.size();
        vector<vector<int>> mat(n, vector<int>(n));
        mat[0] = nums;

        // Read the remaining rows of the matrix
        for (int i = 1; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);
            vector<int> nums;
            int num;

            // Read the first row of the matrix
            while (ss >> num) {
                nums.push_back(num);
            }

            mat[i] = nums;
        }

        Solution ob;
        Node* head = ob.constructLinkedMatrix(mat);
        if (!head) {
            cout << "-1\n";
        } else {
            display(head);
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends