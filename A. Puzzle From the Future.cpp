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
        string a,b="1";
        cin>>a;
        for(int i=1;i<n;i++){
          if('1'+a[i]!=a[i-1]+b[i-1]){
            b+='1';
          }
          else{
            b+='0';
          }
        }
        cout<<b<<"\n";
       }

      return 0;
}
