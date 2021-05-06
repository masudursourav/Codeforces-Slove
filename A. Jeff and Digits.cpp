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
    ll n;
    cin>>n;
    ll z=0,f=0;
    while(n--){
      ll in;
      cin>>in;
      if(in==0){
        ++z;
      }
      else{
        ++f;
      }
    }
    if(z==0){
      cout<<-1<<"\n";
    }
    else if(f<9){
      cout<<0<<"\n";
    }
    else{
      f-=f%9;
      for(int i=0;i<f;i++){
        cout<<5;
      }
      for(int i=0;i<z;i++){
        cout<<0;
      }
      cout<<"\n";
    }
    return 0;
}
