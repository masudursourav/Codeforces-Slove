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
    ll j=0;
    ll k=1;
    ll a[100];
    while(n>0){
      if(n%2){
      a[j++]=k;
    }
      n=n/2;
      ++k;
    }
    for(int i=j-1;i>0;i--){
      cout<<a[i]<<" ";
    }
    cout<<a[0];
    cout<<"\n";
    return 0;
}
