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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0,y=0,c=0;
    for(int i=0;i<n-1;i++){
      if(s[i]=='R'){
        ++x;
      }
      else{
        ++y;
      }
      if(s[i]==s[i+1] && x==y){
        ++c;
      }
    }
    cout<<c<<"\n";

    return 0;
}
