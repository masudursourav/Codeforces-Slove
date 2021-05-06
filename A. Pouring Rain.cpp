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
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double a=((4*v)/(3.1415926535897*d*d));

    if(a<=e){
      cout<<"NO"<<"\n";
    }
    else{
      cout<<"YES"<<"\n";
      printf("%.10lf\n",(h/(a-e)));
    }

    return 0;
}
