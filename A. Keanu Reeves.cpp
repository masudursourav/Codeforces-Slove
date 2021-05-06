#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ++c1;
            }
            else{
                ++c0;
            }
        }
        if(c0!=c1){
            cout<<1<<"\n"<<s<<"\n";
        }
        else{
            char k=s[n-1];
            cout<<2<<"\n"<<s.substr(0,n-1)<<" "<<k<<"\n";
        }

    return 0;
}
