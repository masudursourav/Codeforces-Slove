//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll a,b,n,ans=0;cin>>a>>b>>n;
       for(int i=0;i<n;i++){
         if(a>0 &&b>0) ans=ans+2*a+2*b-4;
         a-=4;b-=4;
       }
       cout<<ans<<"\n";

      return 0;
}
