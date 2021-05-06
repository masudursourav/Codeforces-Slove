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
         ll sum=0;
         ll ans=0;
         for(int i=0;i<n;i++){
           ll in;
           cin>>in;
           sum+=in;
           if(in%x!=0 &&in>x ){
             ans+=(ll)(in/x);
             ans+=1;
           }
           else if(in%x==0){
             ans+=(ll)(in/x);
           }
           else if(in<x){
             ans+=1;
           }
         }
         if(sum%x){
           sum=(sum/x)+1;
         }
         else{
           sum/=x;
         }
         cout<<min(ans,sum)<<" "<<max(ans,sum)<<"\n";
       }

      return 0;
}
