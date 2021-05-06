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
         string s;
         cin>>s;
         ll c=0;
         for(int i=0;i<n;i++){
           if(s[i]==')'){
             ++c;
           }
           else{
             c=0;
           }
         }
         if(c>(n-c) || c==n){
           cout<<"Yes"<<"\n";
         }
         else{
           cout<<"No"<<"\n";
         }
       }

      return 0;
}
