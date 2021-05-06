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
    ll c=0;
    for(int i=0;i<n;i++){
      if(((s[i]=='R' && s[i+1]=='U' )|| (s[i]=='U' && s[i+1]=='R') )&& i!=n-1){
        ++c;
        i=i+1;
      }
      else{
        ++c;
      }
    }
     cout<<c<<"\n";
    return 0;
}
