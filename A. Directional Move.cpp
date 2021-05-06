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
         char left[4]={'E','S','W','N'};
         ll c=0;
         ll n;
         cin>>n;
         string s;
         cin>>s;
         for(int i=0;i<n;i++){
           if(s[i]=='0'){
             ++c;
           }
           else{
             --c;
           }
           if(c==-1){
             c=3;
           }
           else if(c==4){
             c=0;
           }
         }
      cout<<left[c]<<"\n";

       }

      return 0;
}
