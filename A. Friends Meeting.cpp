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
    ll a,b;
    cin>>a>>b;
    ll i=1,j=1;
    ll sum=0;
    if(a>b){
      swap(a,b);
    }
    for(int k=0;;k++){
      if(a==b){
        break;
      }
      if(k%2==0){
        sum+=i;
        ++i;
        ++a;
      }
      else{
        sum+=j;
        ++j;
        --b;
      }
    }
    cout<<sum<<"\n";

    return 0;
}
