//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

//*MASUDUR RAHMAN SOURAV
//* ID:IT-19025


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
    ll j=2;
    ll k=2;
    for(int i=1;i<n;i++){
      if(k%n==0){
        cout<<n<<" ";
      }
      else{
        cout<<k%n<<" ";
      }
        k=k+j;
        ++j;
    }
    cout<<"\n";
    return 0;
}
