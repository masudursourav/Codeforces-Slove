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
        ll a[6];
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
        ll sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
        if(sum%2==0){
          sum/=2;
        }
        else{
          cout<<"NO"<<"\n";
          return;
        }
        for(int i=0;i<6;i++){
          for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
              if(i!=j && k!=i && k!=j){
                if(a[i]+a[j]+a[k]==sum){
                  cout<<"YES"<<"\n";
                  return;
                }
              }
            }
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
