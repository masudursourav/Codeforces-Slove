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
        ll n;
        cin>>n;
        string s,ans="";
        cin>>s;
        for(int i=0;i<n;i++){
          if(s[i]=='o'){
            if(s[i+1]=='g' && s[i+2]=='o'){
              s[i]='*';
              ans+="***";
              for(int j=i+1;j<n-1;j+=2){
                if(s[j]=='g' && s[j+1]=='o'){
                  s[j]='*';
                  s[j+1]='*';
                }
                else{
                  break;
                }
              }
            }
            else if(s[i]>='a' && s[i]<='z'){
              ans+=s[i];
            }
          }
          else if(s[i]>='a' && s[i]<='z'){
            ans+=s[i];
          }
        }
        cout<<ans<<"\n";

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
