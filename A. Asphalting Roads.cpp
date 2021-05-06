//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
int a[100]={0};
int b[100]={0};
ll n;
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n*n;i++){
      ll h,v;
      cin>>h>>v;
      --h,--v;
      if(a[h]==0 && b[v]==0){
        a[h]=1;
        b[v]=1;
        cout<<i+1<<" ";
      }
    }
    cout<<"\n";
    return 0;
}
