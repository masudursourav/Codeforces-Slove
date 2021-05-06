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
         ll n,d;
         cin>>n>>d;
         vector<ll>a(n);
         for(int i=0;i<n;i++)cin>>a[i];
         for(int i=0;i<d;i++){
           for(int j=0;j<n-1;j++){
             if(a[j+1]!=0){
               a[j+1]-=1;
               ++a[j];
               break;
             }
           }
         }
         cout<<a[0]<<"\n";
       }

      return 0;
}
