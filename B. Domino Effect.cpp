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
        ll n;cin>>n;
         ll r=0,l=0;
         string s;
         cin>>s;
         for(int i=0;i<n;i++){
           if(s[i]=='.'){
             ++r;
           }
           else if(s[i]=='L'){
             r=0;
           }
           else if(s[i]=='R'){
             l+=r;
             r=0;
             while(s[i+1]!='L' && i!=n){
               ++r;
               ++i;
             }
             if(s[i+1]=='L' && r%2!=0){
               ++l;
             }
             r=0;
           }
         }
        cout<<l+r<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
