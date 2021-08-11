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
        ll sum=0;
        for(int i=0;i<n;i++){
          ll in;
          cin>>in;
          sum+=in;
        }
        for(int i=0;;i++){
          ll a=2*(sum + i*k);
          ll b=(2*k-1)*(i+n);
          if(a>=b){
            cout<<i<<"\n";
            return;
          }
        }

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
