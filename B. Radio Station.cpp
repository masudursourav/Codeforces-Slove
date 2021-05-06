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
    ll n,q;
    map<string,string>m;
    cin>>n>>q;
    for(int i=0;i<n;i++){
      string s,r;
      cin>>s>>r;
      m[r]=s;
    }
    while(q--){
      string o,k;
      cin>>o>>k;
      string c;
      for(int i=0;i<k.size()-1;i++){
        c+=k[i];
      }
      cout<<o<<" "<<k<<" #"<<m[c]<<"\n";
    }

    return 0;
}
