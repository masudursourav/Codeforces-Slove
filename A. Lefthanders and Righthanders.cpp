//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    ll n;
    string s;
    cin>>n>>s;
    for(int i=0,j=n/2;i<n/2 && j<n;i++,j++){
      if (s[i]=='R' && s[j]=='L') {
        cout<<j+1<<" "<<i+1<<"\n";
      }
      else{
        cout<<i+1<<" "<<j+1<<"\n";
      }
    }

    return 0;
}
