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
    ll u=0,d=0,l=0,r=0;
    for(int i=0;i<n;i++){
      if(s[i]=='U'){
        ++u;
      }
      else if(s[i]=='D'){
        ++d;
      }
      else if(s[i]=='L'){
        ++l;
      }
      else if(s[i]=='R'){
        ++r;
      }
    }
    cout<<2*(min(l,r)+min(u,d))<<"\n";

    return 0;
}
