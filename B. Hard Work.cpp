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
    string s,store;
    for(int i=0;i<3;i++){
      cin>>s;
      for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
          store+=s[i];
        }
      }
    }
    ll q;
    cin>>q;
    while(q--){
      string in,ans;
      cin>>in;
      for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
          ans+=s[i];
        }
      }
      if(ans==store){
        cout<<"ACC"<<"\n";
      }
      else{
        cout<<"WA"<<"\n";
      }
    }
    return 0;
}
