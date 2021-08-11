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
        ll a[n+1];
        for(int i=0;i<n;i++){
          ll in;
          cin>>in;
          a[in]=(i+1);
        }
        ll vasya=0,petya=0;
        ll m;
        cin>>m;
        while(m--){
          ll q;cin>>q;
          vasya+=(a[q]);
          petya+=((n-a[q])+1);
        }
        cout<<vasya<<" "<<petya<<"\n";

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
