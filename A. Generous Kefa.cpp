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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll a[27]={0};
    for(int i=0;i<n;i++){
      ++a[s[i]-'a'];
    }
    for(int i=0;i<26;i++){
      if(a[i]>m){
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    cout<<"YES"<<"\n";
    return 0;
}
