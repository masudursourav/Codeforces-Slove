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
    ll t;
    cin>>t;
    while(t--){
      set<char>st;
      ll n;
      cin>>n;
      ll a[27]={0};
      for(int i=0;i<n;i++){
        string s;
        cin>>s;
      for(int i=0;i<s.size();i++){
        ++a[s[i]-'a'];
      }
    }
    bool k=true;
    for(int i=0;i<26;i++){
      if(a[i]%n!=0){
        k=false;
        break;
      }
    }
    if(k){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
    }

    return 0;
}
