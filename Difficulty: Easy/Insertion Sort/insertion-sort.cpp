//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {
        //code here
        for(int j=1;j<n;j++){
            int curr=arr[j];
            int prev=j-1;
            while(prev>=0 && arr[prev]>curr){
                arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=curr;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0;i<n;i++){
            insert(arr,i,n);
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends