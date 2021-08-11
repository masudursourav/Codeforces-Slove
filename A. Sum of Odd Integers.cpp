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
        ll n,k;cin>>n>>k;
        if(n==(k*k)){
          cout<<"YES"<<"\n";
          return;
        }
        else if(n<(k*k)){
          cout<<"NO"<<"\n";
        }
        else if(k==1 && n%2==1){
          cout<<"YES"<<"\n";
          return;
        }
        else{
          ll sum=n-(k*k);
          if(sum%2==0){
            cout<<"YES"<<"\n";
            return;
          }
          else{
            cout<<"NO"<<"\n";
            return;
          }
        }

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
