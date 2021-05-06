//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int ans(ll n,int count){
  if(n==1){
    return count;
  }
  else if(n%6==0){
    ++count;
    return ans(n/6,count);
  }
  else{
    n=n*2;
    ++count;
    if(n%6!=0){
      return -1;
    }
    return ans(n,count);
  }
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      cout<<ans(n,0)<<"\n";
    }

    return 0;
}
