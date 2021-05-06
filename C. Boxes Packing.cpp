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
    ll a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
    }
    sort(b,b+n);
    sort(a,a+n);
    ll c=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(b[j]>=a[i]){
          b[i]=0;
          b[j]=0;
          ++c;
        }
      }
    }
    cout<<c-1<<"\n";

    return 0;
}
