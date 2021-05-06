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
    string s;
    cin>>s;
    vector<ll>a;
    for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
        ll j=i;
        while(j+1<s.size() && s[j+1]=='1'){
          ++j;
        }
        a.pb(j-i+1);
        i=j;
      }
    }
   sort(a.rbegin(),a.rend());
   ll sum=0;
   for(int i=0;i<a.size();i+=2){
     sum+=a[i];
   }
   cout<<sum<<"\n";
   a.clear();
 }
    return 0;
}
