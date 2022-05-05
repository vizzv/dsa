#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int printSecondLargest(int arr[],int n){
            int large=arr[0],secondlarge=-1;
	        for(int i=0;i<n;i++){
	        if(arr[i]>large ){
	            secondlarge=large;
	            large=arr[i];
	        }
	        else if(arr[i]<large){
	            secondlarge= secondlarge>arr[i]?secondlarge:arr[i];
	        }
	    }
        return secondlarge;
    }

}
;
int main(){
    int t;
    printf("enter");
    cin>>t;
    while (t--)
    {
        int n;
        
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution obj;
        obj.printSecondLargest(arr,n);
    }
    

    return 0;
}