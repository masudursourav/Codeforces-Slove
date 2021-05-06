#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,q;
    multimap<int,string>m;
    multimap<int,string>::iterator it;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s>>q;
        if(q=="rat"){
          m.insert(make_pair(1,s));
        }
        else if(q=="woman"||q=="child"){
            m.insert(make_pair(2,s));
        }
        else if(q=="man"){
            m.insert(make_pair(3,s));
        }
        else if(q=="captain"){
            m.insert(make_pair(4,s));
        }
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<it->second<<"\n";
    }
    return 0;
}
