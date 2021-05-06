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
    if(n==11 || n==21 || n>=12 && n<=19){
      cout<<4<<"\n";
    }
    else if(n==20){
      cout<<15<<"\n";
    }
    else{
      cout<<0<<"\n";
    }

    return 0;
}
