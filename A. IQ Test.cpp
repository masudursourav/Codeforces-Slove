//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[4][4];
    char c;
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        cin>>c;
        if(c=='#'){
          a[i][j]=1;
        }
        else{
          a[i][j]=0;
        }
      }
    }
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        ll sum=a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j];
        if(sum==0 || sum==3 || sum==4 || sum==1){
          cout<<"YES"<<"\n";
          return 0;
        }
      }
    }
   cout<<"NO"<<"\n";
    return 0;
}
