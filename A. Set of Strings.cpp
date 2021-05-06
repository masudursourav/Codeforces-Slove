//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<char>st;
    string s;
    int k;
    cin>>k>>s;
    for(int i=0;i<s.size();i++){
      st.insert(s[i]);
    }
    if(k>st.size()){
      cout<<"NO"<<"\n";
      return 0;
    }
    int a[27]={0};
    cout<<"YES"<<"\n";
    a[s[0]-'a']=1;
    --k;
    for(int i=0;i<s.size();i++){
        if(a[s[i]-'a']==0 && k>0){
          cout<<"\n"<<s[i];
          ++a[s[i]-'a'];
          --k;
        }
        else{
          cout<<s[i];
        }
    }
    cout<<"\n";

    return 0;
}
