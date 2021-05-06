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
    ll ans=1,ans1=1;
    for(int i=1;i<=n;i++){
      ans=(ans*2)%1000003;
    }
    for(int i=1;i<=n;i++){
      ans1=(ans1*2)%1000003;
    }
    cout<<(ans+ans1)%1000003<<"\n";
    return 0;
}
