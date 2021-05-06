//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
   string s;
   cin>>s;
   ll c=0;
   for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='a'){
      break;
    }
    ++c;
   }
   //c++;
   if(c==s.size()){
     cout<<"NO"<<"\n";
     return;
   }
   else{
     cout<<"YES"<<"\n";
   }
   for(int i=0;i<s.size();i++){
     if(i==c){
       cout<<'a';
     }
      cout<<s[i];
   }
   cout<<"\n";


}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t; cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
