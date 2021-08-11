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
        ll L=s.find('a');
        if(L==string::npos){
          cout<<"NO"<<"\n";
          return;
        }
        ll n=s.size(),R=L;
        for(int i=1;i<n;i++){
          ll pos=s.find('a'+i);
          if(pos==string::npos ||  (pos!=L-1 && pos!=R+1)){
            cout<<"NO"<<"\n";
            return;
          }
          else{
            L=min(L,pos);
            R=max(R,pos);
          }
        }
        cout<<"YES"<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
