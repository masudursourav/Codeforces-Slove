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
      ll x,y;
      cin>>x>>y;
      if(x>3) puts("YES");
      else if(x==1) puts(y==1 ? "YES" : "NO");
      else puts((y<=3) ? "YES" : "NO");

    }

    return 0;
}