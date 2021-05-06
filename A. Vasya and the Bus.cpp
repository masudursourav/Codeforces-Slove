//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(n==0 && m==0){
      cout<<0<<" "<<0<<"\n";
    }
    else if(n==0){
      cout<<"Impossible"<<"\n";
    }
    else if(m==0){
      cout<<n<<" "<<n<<"\n";
    }
    else if(n==1 && m>1){
      cout<<n+(m-1)<<" "<<n+(m-1)<<"\n";
    }
    else if(n==1 && m==1){
      cout<<n<<" "<<n<<"\n";
    }
    else if(m>n){
      cout<<n+(m-n)<<" "<<n+(m-1)<<"\n";
    }
    else if(n>m){
      cout<<n<<" "<<n+(m-1)<<"\n";
    }
    else{
      cout<<n<<" "<<n+(m-1)<<"\n";
    }

    return 0;
}
