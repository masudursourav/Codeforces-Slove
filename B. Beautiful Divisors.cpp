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
    ll n;
    cin>>n;
    ll k=0;
    for(int i=1;i<1000;i++){
      ll sum=(ll)(pow(2,i)-1);
      sum*=(ll)(pow(2,i-1));
      if(sum>n){
        cout<<k<<"\n";
        break;
      }
      else if(n%sum==0){
        k=sum;
      }
    }

    return 0;
}
