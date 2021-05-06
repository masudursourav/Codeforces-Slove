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
         ll k=n+x;
         bool a[k]={false};
         for(int i=0;i<n;i++){
           ll in;
           cin>>in;
           a[in]=true;
         }
         int ans=0;
         for(int i=k;i>=0;--i){
           if(!a[i]){
             ++ans;
           }
           if(ans<=x){
             cout<<
           }
         }
       }

      return 0;
}
