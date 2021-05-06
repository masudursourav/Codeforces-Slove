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
         ll n,k;
         cin>>n>>k;
         int j=0;
         for(int i=1;i<=n;i++){
           if(i%3==1){
             cout<<"a";
           }
           else if(i%3==2){
             cout<<"b";
           }
           else{
             cout<<"c";
           }
         }
         cout<<"\n";
       }

      return 0;
}
