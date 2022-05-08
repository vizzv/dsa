#include <bits/stdc++.h>

using namespace std;

class solution{
    public:
   long long sumofSeries(int n)
    {
    	long long v=((n*(n+1))/2);
        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       solution s;
       long long ans=s.sumofSeries(n);
       cout<<ans<<endl;
       
    }
    

    return 0;
}