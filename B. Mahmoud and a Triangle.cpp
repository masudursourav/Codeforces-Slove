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
   vector<ll>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
   bool check=false;
   for(int i=2;i<n;i++){
     if((a[i-1]+a[i-2])>a[i]){
       cout<<"YES"<<"\n";
       return;
     }
   }
    cout<<"NO"<<"\n";

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
