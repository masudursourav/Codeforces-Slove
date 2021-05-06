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
    ll t;
    cin>>t;
    while(t--){
      ll a,b;
      cin>>a>>b;
      ll c=0;
      if(b>a){
        swap(a,b);
      }
        ll k= a-b;
        if(k%5==0){
          c+=k/5;
        }
        else if(k%5==1){
          c+=(ll)(k/5);
          ++c;
        }
        else if(k%5==2){
          c+=(ll)(k/5);
          ++c;
        }
        else if(k%5==3){
          c+=(ll)(k/5)+1;
          ++c;
        }
        else if(k%5==4){
          c+=(ll)(k/5)+1;
          ++c;
        }
        cout<<c<<"\n";
    }

    return 0;
}
