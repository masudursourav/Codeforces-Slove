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
    ll n;
    cin>>n;
    if(n>0){
      cout<<n<<"\n";
      return 0;
    }
    else{
      n=(-1)*n;
      if((n%10)>((n/10)%10)){
        n=n/10;
        n=n*(-1);
      }
      else{
        int k=n%10;
        n=n/100;
        n=(n*10)+k;
        n=n*(-1);
      }
    }
    cout<<n<<"\n";

    return 0;
}
