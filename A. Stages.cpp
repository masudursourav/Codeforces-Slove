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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        ll ans=(s[0]-'a')+1;
        ll c=s[0];
        --k;
        for(int i=1;i<n && k>0;i++){
          if((s[i]-'a')-(c-'a')>=2){
            ans+=(s[i]-'a')+1;
            c=s[i];
            --k;
          }
        }
        if(k>0){
          cout<<-1<<"\n";
          return;
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
