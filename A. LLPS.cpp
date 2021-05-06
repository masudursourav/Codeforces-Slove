#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size()-1;
    sort(s.begin(),s.end());
    char x=s[l];
    for(int i=0;i<=l;i++){
        if(s[i]==x){
            cout<<s[i];
        }
    }
    cout<<"\n";
    return 0;
}
