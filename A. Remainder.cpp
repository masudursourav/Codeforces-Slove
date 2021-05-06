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
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll c=0;
    for(int i=n-1;i>=n-a;i--){
      if(i!=n-b-1){
        if(s[i]=='1'){
          ++c;
        }
      }
      else if(i==(n-b-1)){
        if(s[i]=='0'){
          ++c;
        }
      }
    }
    cout<<c<<"\n";
    return 0;
}
