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
      ll n;
      cin>>n;
      string s;
      cin>>s;
      if(s.size()==2 && s[0]>=s[1]){
        cout<<"NO"<<"\n";
      }
      else{
        cout<<"YES"<<"\n";
        cout<<2<<"\n";
        cout<<s[0]<<" ";
        for(int i=1;i<s.size();i++){
          cout<<s[i];
        }
        cout<<"\n";
      }
    }

    return 0;
}
