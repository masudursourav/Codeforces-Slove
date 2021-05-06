//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll k;
    cin>>k;
    set<char>st;
    if(k>s.size()){
      cout<<"impossible"<<"\n";
      return 0;
    }
    for(int i=0;i<s.size();i++){
      st.insert(s[i]);
    }
    if(k<=st.size()){
      cout<<0<<"\n";
    }
    else{
      cout<<k-st.size()<<"\n";
    }

    return 0;
}
