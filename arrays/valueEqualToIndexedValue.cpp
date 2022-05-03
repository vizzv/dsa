#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    class solution{
        public:
        vector<int> value_equal_to_index(int arr[],int n){
            vector<int> v;
            //here indexing start from 1
            for (int i = 0; i < n; i++)
            {
                if(arr[i]==i+1){
                    v.push_back(i+1);
                }
            }
            return v;
            
        }

    };
    while (t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solution s;
        auto ans =s.value_equal_to_index(arr,n);
        if(ans.empty()){cout<<"not found"<<endl;}
        else{
            for(int tmp :ans){
                cout<<tmp<<" ";
            }cout<<endl;
        }
    }
    return 0;
}