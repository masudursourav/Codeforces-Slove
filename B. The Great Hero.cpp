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

       ll t;cin>>t;
       while(t--){
         ll A,B,n,k=1,damage=0;cin>>A>>B>>n;
         vector<ll>a(n),b(n);
         for(int i=0;i<n;i++) cin>>a[i];
         for(int i=0;i<n;i++) cin>>b[i];
         for(int i=0;i<n;i++) damage+=(ll)(b[i]+A-1)/A*a[i];
         for(int i=0;i<n;i++) if(B-(damage-a[i])>0){cout<<"YES"<<"\n";k=0;break;}
          if(k) cout<<"NO"<<"\n";
       }

      return 0;
}
