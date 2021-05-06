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
         for(int i=0;i<s.size();i++){
           if(i%2==0){
             if(s[i]=='a'){
               cout<<'b';
             }
             else{
               cout<<'a';
             }
           }
           else{
             if(s[i]=='z'){
               cout<<'y';
             }
             else{
               cout<<'z';
             }
           }
         }
         cout<<"\n";
       }

      return 0;
}
