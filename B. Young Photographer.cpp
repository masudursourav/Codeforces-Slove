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
    int x,n,a,b;
    cin>>n>>x;
    int mi=INT_MAX;
    int mx=-1;
    while(n--){
      cin>>a>>b;
      if(a>b){
        swap(a,b);
      }
      mx=max(a,mx);
      mi=min(b,mi);
    }
    if(x>=mx && x<=mi){
      cout<<"0"<<"\n";
    }
    else if(mx>mi){
      cout<<"-1"<<"\n";
    }
    else if(x<mx){
      x=mx-x;
      cout<<x<<"\n";
    }
    else{
      x=x-mi;
      cout<<x<<"\n";
    }

    return 0;
}
