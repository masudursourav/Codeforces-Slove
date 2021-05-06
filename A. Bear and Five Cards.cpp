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
    ll n[5];
    ll sum=0;
    for(int i=0;i<5;i++){
      cin>>n[i];
      sum+=n[i];
    }
    sort(n,n+5);
    ll br=0;
    for(int i=0;i<5;i++){
      if(i+1<5 && n[i]==n[i+1]){
        br=max(br,2*n[i]);
      }
      if(i+2<5 && n[i]==n[i+2]){
        br=max(br,3*n[i]);
      }
    }
    cout<<sum-br<<"\n";
    return 0;
}
