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
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    while(n--){
      cout<<a<<" "<<b<<"\n";
      string c,d;
      cin>>c>>d;
      if(a==c){
        a=d;
      }
      else{
        b=d;
      }
    }
    cout<<a<<" "<<b<<"\n";

    return 0;
}
