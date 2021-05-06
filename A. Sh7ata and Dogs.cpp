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

       ll x,y,n;
       cin>>x>>y>>n;
       if(x>y){
         cout<<0<<"\n";
       }
       else if((x+n)>=y){
         cout<<abs(x-y)<<"\n";
       }
       else{
         cout<<"The dogs will bite Sh7ata."<<"\n";
       }

      return 0;
}
