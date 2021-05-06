//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
bool prime[1000000];
void shiv(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<1000001;i++){
    if(prime[i]==true){
      for(int j=i*i;j<1000001;j+=i){
        prime[j]=false;
      }
    }
  }
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    shiv();
     ll n,k;
     cin>>n>>k;
     ll c=0;
     for(int i=2;i<=n;i++){
       if(prime[i]==true){
         for(int j=i+1;j<=n;j++){
           if(prime[j]==true){
             ll sum=i+j+1;
             if(prime[sum]==true && sum<=n){
               ++c;
               break;
             }
             else{
               break;
             }
           }
         }
       }
     }
     if(c>=k){
       cout<<"YES"<<"\n";
     }
     else{
       cout<<"NO"<<"\n";
     }
    return 0;
}
