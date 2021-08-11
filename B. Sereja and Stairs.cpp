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
        ll a[5001]={0};
        for(int i=0;i<n;i++){
          ll in;cin>>in;
          ++a[in];
        }
        ll last;
        vector<ll>ans;
        for(int i=1;i<5001;i++){
          if(a[i]>0){
            ans.pb(i);
            --a[i];
            last=i;
          }
        }
        for(int i=5000;i>0;i--){
          if(a[i]>0 && i!=last){
            ans.pb(i);
          }
        }
       cout<<ans.size()<<"\n";
       for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
       }
       cout<<"\n";


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
