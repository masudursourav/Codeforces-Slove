#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,v1;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0,c1=0;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            v.push_back(in);
            v1.push_back(in);
        }
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            if(in==0){
                ++c;
            }
            else{
                ++c1;
            }
        }
        if(c>0 && c1>0){
            cout<<"YES"<<"\n";
        }
        else{
            sort(v.begin(),v.end());
            if(v==v1){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        v.clear();
        v1.clear();
    }
   return 0;
}
