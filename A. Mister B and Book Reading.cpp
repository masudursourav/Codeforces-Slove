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
    ll c,v,v1,a,l;
    cin>>c>>v>>v1>>a>>l;
    ll k=1;
    for(int i=0;;i++){
      if(i!=0){
        c=c+l;
      }
      c-=min(v1,(v+(a*i)));
      if(c<=0){
       cout<<k<<"\n";
       return 0;
      }
      ++k;
    }

    return 0;
}
