#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class solution{
    private:
    bool check(string a){
        int s=0,e=a.size()-1;
        while(s<=e){
            if(a[s++]!=a[e--]){
                return 0;
            }
        }
        return 1;
    }
    public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	
        string temp="";
    	for(int i=0;i<n;i++){
    	while(a[i]){
    	    temp+=char(a[i]%10)-'A';
    	    a[i]/=10;
    	}
    	    if(!check(temp))return 0;
    	    temp="";
    	}
    	return 1;
    }
};

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
           cin>>arr[i];
       }
       solution s;
       cout<<s.PalinArray(arr,n)<<endl;
       
    }
    

    return 0;
}