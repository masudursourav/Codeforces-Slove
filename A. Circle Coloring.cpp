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
         ll n;
         cin>>n;
         vector<ll> a(n),b(n),c(n),d(n);
         for(int i=0;i<n;i++){
           cin>>a[i];
         }
         for(int i=0;i<n;i++){
           cin>>b[i];
         }
         for(int i=0;i<n;i++){
           cin>>c[i];
         }
         for(int i=0;i<n;i++){
           d[i]=a[i];
           if(i!=0 && d[i]==d[i-1] || d[0]==d[n-1]){
             d[i]=b[i];
           }
           if(i!=0 && d[i]==d[i-1] || d[0]==d[n-1]){
             d[i]=c[i];
           }
           cout<<d[i]<<" ";
         }
         cout<<"\n";

       }

      return 0;
}
