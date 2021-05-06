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
         string s,s1;
         cin>>s>>s1;
         ll r=0,b=0;
         for(int i=0;i<n;i++){
           if(s[i]>s1[i]){
             ++r;
           }
           else if(s[i]<s1[i]){
             ++b;
           }
         }
         if(r>b){
           cout<<"RED"<<"\n";
         }
         else if(b>r){
           cout<<"BLUE"<<"\n";
         }
         else{
           cout<<"EQUAL"<<"\n";
         }
       }

      return 0;
}
