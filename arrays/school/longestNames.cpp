#include <bits/stdc++.h>

using namespace std;

class solution{
    public:
    string longest(string names[], int n)
   {
       int index=0;
       int max=names[0].length();
       
       for(int i=0;i<n;i++)
       {
           if(names[i].length()>max)
           {   max=names[i].length();
               index=i;
           }
       }
       return names[index];
   }
};

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string a[n];
       for (int i = 0; i < n; i++)
       {
           /* code */
           cin>>a[i];
       }
       
       solution s;
       cout<<s.longest(a,n)<<endl;
       
    }
    

    return 0;
}