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
         ll c21=n%2020;
         ll c20=(n-c21)/2020 - c21;
         if(c20>=0 && (c20*2020 + c21*2021 == n)){
           cout<<"YES"<<"\n";
         }
         else{
           cout<<"NO"<<"\n";
         }
       }

      return 0;
}
