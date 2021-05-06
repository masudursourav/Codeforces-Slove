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
         string s;
         cin>>s;
         ll ans=0;
         ll tb=0,fb=0;

         for(int i=0;i<s.size();i++){
           if(s[i]=='('){
             ++fb;
           }
           else if(s[i]=='['){
             ++tb;
           }
           if(s[i]==')'&& fb>0){
             ++ans;
             --fb;
           }
           else if(s[i]==']' && tb>0){
             ++ans;
             --tb;
           }
         }
         cout<<ans<<"\n";
       }

      return 0;
}
