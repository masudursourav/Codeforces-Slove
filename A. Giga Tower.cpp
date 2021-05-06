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
    ll a;
    cin>>a;
    a++;
    int ch=0;
    int b=1;
    while(1){
      ll n=a;
      n=abs(n);
      while(n>0){
        if(n%10==8){
          ch=1;
          break;
        }
        n=n/10;
      }
      if(ch==1){
        cout<<b<<"\n";
        break;
      }
      ++b;
      ++a;
    }

    return 0;
}
