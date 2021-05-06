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
    set<ll>s;
    s.insert(n);
    cin>>n;
    int c=1;
    while(n>0){
      if(s.count(n)){
        break;
      }
      s.insert(n);
      n=n+1;
      while(n%10==0){
          n=n/10;
      }
    }
   cout<<s.size()-1<<"\n";
    return 0;
}
