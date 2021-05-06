//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin>>k;
    char c;
    int a[11]={0};
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        cin>>c;
        if(c>='1' && c<='9'){
          ++a[c-'0'];
        }
      }
    }
      for(int i=1;i<10;i++){
        if(a[i]>2*k){
          cout<<"NO"<<"\n";
          return 0;
        }
      }
    cout<<"YES"<<"\n";

    return 0;
}
