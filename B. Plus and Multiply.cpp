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
        ll n,a,b;
        cin>>n>>a>>b;
        if(a == 1 || n == 1) {
           n--;
          cout<<(n % b ? "No" : "Yes")<<"\n";
          }
       else{
         ll x=1;
         while(x<=n){
           if((n-x)%b==0){
             cout<<"Yes"<<"\n";
             return;
           }
           x*=a;
         }
         cout<<"No"<<"\n";
       }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
