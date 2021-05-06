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
         ll p,a,b,c;cin>>p>>a>>b>>c;
         if(p%a==0 || p%b==0 || p%c==0){
           cout<<0<<"\n";
         }
         else{
           ll as,bs,cs;
           as=(ll)p/a;
           as=(as+1)*a-p;
           bs=(ll)p/b;
           bs=(bs+1)*b-p;
           cs=(ll)p/c;
           cs=(cs+1)*c-p;
           cout<<min({as,bs,cs})<<"\n";
         }
       }

      return 0;
}
