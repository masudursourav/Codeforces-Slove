#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    if(s==s1){
        cout<<"-1"<<"\n";
    }
    else{
        cout<<max(s.size(),s1.size())<<"\n";
    }
    return 0;
}
