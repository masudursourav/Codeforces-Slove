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
    ll t,n;
    cin>>t;
    while(t--){
      cin>>n;
      int c=0;
      int ch=0;
      while(n!=1){
        if(n%6==0){
          n=n/6;
          ++c;
        }
        else{
          n=n*2;
          ++c;
          if(n%6==0){
            n=n/6;
            ++c;
          }
          else{
            ch=1;
            break;
          }
        }
      }
      if(ch==1){
        cout<<"-1"<<"\n";
      }
      else{
        cout<<c<<"\n";
      }
    }

    return 0;
}
