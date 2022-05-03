/*
You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).

Example 1:

Input:
N = 4
A[] = {1, 2, 3, 4}
Output:
1 3
Example 2:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
1 3 5
Your Task:
Since this is a function problem, you just need to complete the provided function void print(int ar[],int n)

Constraints:
1 <= N <= 105
1 <= Ai <= 105

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


*/

#include <bits/stdc++.h>

using namespace std;

void printElement(int a[],int n){
    for (int i = 0; i < n; i+=2)
    {
        cout<<a[i];//printing odd numbered elements
    }
    
}

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            
            cin>>n;
        }
        printElement(arr,n);//calling 
    }
    

    return 0;
}


