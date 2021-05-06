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
         ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
         ll x=abs(x1-x2),y=abs(y1-y2);
         (x==0||y==0)?cout<<x+y<<"\n":cout<<(x+y)+2<<"\n";
       }

      return 0;
}
