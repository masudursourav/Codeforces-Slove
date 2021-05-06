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
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
        sum+=a[j];
        if(sum>m){
          i=j-1;
          break;
        }
        else{
          i=j;
        }
      }
      ++c;
    }
   cout<<c<<"\n";
    return 0;
}
