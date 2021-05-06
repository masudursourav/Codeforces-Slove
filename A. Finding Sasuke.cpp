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
         ll m=n/2;
         vector<ll>v(n),ans(n);
         for(int i=0;i<n;i++){
           cin>>v[i];
         }
         for(int i=0;i<n-1;i+=2){
           v[i+1]*=-1;
           swap(v[i],v[i+1]);
         }
         for(int i=0;i<n;i++){
           cout<<v[i]<<" ";
         }
         cout<<"\n";


       }

      return 0;
}
