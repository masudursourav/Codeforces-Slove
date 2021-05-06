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
         ll n,c0,c1,h,ans=0;
         cin>>n>>c0>>c1>>h;
         string s;
         cin>>s;
         if(c0>c1 && c1+h<=c0){
           for(int i=0;i<n;i++){
             if(s[i]=='0'){
               ans+=(c1+h);
             }
             else{
               ans+=c1;
             }
           }
         }
         else if(c1>c0 && c0+h<=c1){
           for(int i=0;i<n;i++){
             if(s[i]=='1'){
               ans+=(c0+h);
             }
             else{
               ans+=c0;
             }
           }
         }
         else{
           for(int i=0;i<n;i++){
             if(s[i]=='0'){
               ans+=c0;
             }
             else{
               ans+=c1;
             }
           }
         }
         cout<<ans<<"\n";
       }

      return 0;
}
