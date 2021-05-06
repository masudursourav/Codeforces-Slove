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
    if(n<=9){
      cout<<1<<"\n";
    }
    else{
      ll r;
      ll temp=n;
      ll k=0;
      while(temp>0){
        r=temp%10;
        temp=temp/10;
        ++k;
      }
      cout<<(r+1)*(ll)(pow(10,k-1))-n<<"\n";
    }

    return 0;
}
