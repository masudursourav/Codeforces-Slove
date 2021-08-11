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
        ll c25=0,c50=0;
        for(int i=0;i<n;i++){
          ll in;cin>>in;
          if(in==25) ++c25;
          else if(in==50) ++c50;
          if(in==50 && c25>0){
            --c25;
          }
          else if(in==50){
            cout<<"NO"<<"\n";
            return;
          }
          if(in==100 && c25>0 && c50>0){
            --c25;--c50;
          }
          else if(in==100 && c25>=3){
            c25-=3;
          }
          else if(in==100){
            cout<<"NO"<<"\n";
            return;
          }

        }
        cout<<"YES"<<"\n";

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
