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

       ll n,k;
       cin>>n>>k;
       ll mn=LONG_MAX;
       while(n--){
         ll in;cin>>in;
         if(k%in==0){
           ll m=k/in;
           if(mn>m){
             mn=m;           }
         }
       }
       cout<<mn<<"\n";

      return 0;
}
