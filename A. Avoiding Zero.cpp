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
         ll n,sump=0,sumn=0;cin>>n;
         vector<ll>a(n),pos,neg;
         ll sum=0;
         for(int i=0;i<n;i++){
           cin>>a[i];
           sum+=a[i];
           if(a[i]<0){
             neg.pb(a[i]);
             sumn+=a[i];
           }
           else{
             pos.pb(a[i]);
             sump+=a[i];
           }
         }
         sort(pos.rbegin(),pos.rend());
         sort(neg.rbegin(),neg.rend());
         if(sum==0){
           cout<<"NO"<<"\n";
         }
         else{
           cout<<"YES"<<"\n";
           if(sump>abs(sumn)){
             for(int i=0;i<pos.size();i++){
               cout<<pos[i]<<" ";
             }
             for(int i=0;i<neg.size();i++){
               cout<<neg[i]<<" ";
             }
           }
           else{
             for(int i=0;i<neg.size();i++){
               cout<<neg[i]<<" ";
             }
             for(int i=0;i<pos.size();i++){
               cout<<pos[i]<<" ";
             }
           }
           cout<<"\n";
         }
       }

      return 0;
}
