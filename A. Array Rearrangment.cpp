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

       ll t;
       cin>>t;
       while(t--){
         ll n,x;
         cin>>n>>x;
         vector<ll>a(n),b(n);
         for(int i=0;i<n;i++) cin>>a[i];
         for(int i=0;i<n;i++) cin>>b[i];
         sort(a.begin(),a.end());sort(b.rbegin(),b.rend());
         bool ans=true;
         for(int i=0;i<n;i++){
           if(a[i]+b[i]>x){
             ans=false;
             break;
           }
         }
         (ans)?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
       }

      return 0;
}
