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
        if(n<k || (k==1 && n!=1)){
          cout<<-1<<"\n";
          return;
        }
        if(n==1){
          cout<<'a'<<"\n";
          return;
        }
        k-=2;
        n-=k;
        for(int i=0;i<n;i++){
          char c='a'+(i%2);
          cout<<c;
        }
        int temp=2;
        for(int i=0;i<k;i++){
          char c='a'+temp;
          cout<<c;
          ++temp;
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
