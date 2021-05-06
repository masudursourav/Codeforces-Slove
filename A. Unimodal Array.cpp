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
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll k=0;
    while(a[k]<a[k+1] && k<n-1){
      ++k;
    }
    while(a[k]==a[k+1] && k<n-1){
      ++k;
    }
    while(a[k]>a[k+1] && k<n-1){
      ++k;
    }
    if(k==n-1){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
    return 0;
}
