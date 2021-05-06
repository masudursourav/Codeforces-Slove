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
    int n,m,minx=116,miny=116,maxx=-1,maxy=-1;
    char a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a;
        if(a=='B'){
          minx=min(minx,i);
          miny=min(miny,j);
          maxx=max(maxx,i);
          maxy=max(maxy,j);
        }
      }
    }
   cout<<((minx+maxx)/2+1)<<" "<<((miny+maxy)/2+1)<<"\n";
    return 0;
}
