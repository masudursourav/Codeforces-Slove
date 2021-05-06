//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
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
     if(s.size()==1 && s[0]%2==0){
       cout<<-1<<"\n";
     }
     else{
       ll sum=0;
       for(int i=0;i<s.size();i++){
         sum+=(ll)(s[i]-'0');
       }
       ll k;
       bool ch=false;
       for(int i=s.size()-1;i>=0;i--){
           if(s[i]%2!=0 && sum%2==0){
             k=i;
             ch=true;
             break;
           }
           sum-=(ll)(s[i]-'0');
       }
       if(ch){
         for(int i=0;i<=k;i++){
           cout<<s[i];
         }
         cout<<"\n";
       }
       else{
         cout<<-1<<"\n";
       }
     }
    }

    return 0;
}
