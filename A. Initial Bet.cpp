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
    int a,b,c,d,e;
    double ava;
    int avai;
    cin>>a>>b>>c>>d>>e;
    ava=(double)((a+b+c+d+e)/5.0);
    avai=(a+b+c+d+e)/5;
    if(avai==ava && avai!=0){
      cout<<avai<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }

    return 0;
}
