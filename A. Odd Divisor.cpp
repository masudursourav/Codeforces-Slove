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
         if(n%2){
           cout<<"YES"<<"\n";
         }
         else{
           while(n%2==0){
             n/=2;
             if(n%2 && n!=1){
               cout<<"YES"<<"\n";
               break;
             }
             else if(n==1){
               cout<<"NO"<<"\n";
               break;
             }
           }
         }
       }

      return 0;
}
