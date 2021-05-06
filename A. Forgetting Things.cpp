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

       ll a,b;
       cin>>a>>b;
       if(abs(a-b)>1 && b>a){
         cout<<-1<<"\n";
       }
       else if(a==b){
         cout<<a<<1<<" "<<b<<2<<"\n";
       }
       else if(a==9 && b==1){
         cout<<9<<" "<<10<<"\n";
       }
       else if(a>b){
         cout<<-1<<"\n";
       }
       else{
         cout<<a<<99<<" "<<b<<"00"<<"\n";
       }

      return 0;
}
