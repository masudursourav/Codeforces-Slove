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
         ll x,y;
         cin>>x>>y;
         string s;
         cin>>s;
         ll l=0,r=0,u=0,d=0;
         for(int i=0;i<s.size();i++){
           if(s[i]=='L'){
             ++l;
           }
           else if(s[i]=='R'){
             ++r;
           }
           else if(s[i]=='U'){
             ++u;
           }
           else{
             ++d;
           }
         }
         if(x > 0 && r >= x )x = 0;
        if(x < 0 && l >= -x )x = 0;
        if(y > 0 && u >= y )y = 0;
        if(y < 0 && d >= -y )y = 0;
        cout<<((!x && !y)?"YES":"NO")<<endl;
       }

      return 0;
}
