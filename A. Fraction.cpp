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
    if(n%2==0){
      if((n/2)%2==1 && (n/2)%2==1){
      cout<<(ll)(n/2)-2<<" "<<(ll)(n/2)+2<<"\n";
    }
    else{
      cout<<(ll)(n/2)-1<<" "<<(ll)(n/2)+1<<"\n";
    }
    }
    else{
      cout<<(ll)(n/2)<<" "<<(ll)(n/2)+1<<"\n";
    }

    return 0;
}
