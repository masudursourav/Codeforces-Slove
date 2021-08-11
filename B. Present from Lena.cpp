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
        for(int i=0;i<=n;i++){
          for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
          }
          for(int k=0;k<=i;k++){
            cout<<k;
            if(i!=0){
              cout<<" ";
            }
          }
          for(int l=i-1;l>=0;l--){
            cout<<l;
            if(l!=0){
              cout<<" ";
            }
          }
          cout<<"\n";
        }
        for(int i=n-1;i>=0;i--){
          for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
          }
          for(int k=0;k<=i;k++){
            cout<<k;
            if(i!=0){
              cout<<" ";
            }
          }
          for(int l=i-1;l>=0;l--){
            cout<<l;
            if(l!=0){
              cout<<" ";
            }
          }
          cout<<"\n";
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
