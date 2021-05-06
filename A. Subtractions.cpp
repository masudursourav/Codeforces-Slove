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
      ll a,b;
      cin>>a>>b;
      ll sum=0;
      while(a>0 && b>0){
        if(b>a){
          swap(a,b);
        }
        sum+=a/b;
        ll c=b;
        b=a%b;
        a=c;
      }

      cout<<sum<<"\n";
    }

    return 0;
}
