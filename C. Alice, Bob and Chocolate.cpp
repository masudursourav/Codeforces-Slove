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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(n==1){
      cout<<1<<" "<<0<<"\n";
      return 0;
    }
    if(n==2){
      cout<<1<<" "<<1<<"\n";
      return 0;
    }
    int sum1=0,sum2=0;
    int c1=0,c2=0;
    for(int i=0,j=n-1;i<n && i<=j;){
      if(sum1<sum2){
        sum1+=a[i];
        ++c1;
        ++i;
      }
      else if(sum2<sum1){
        sum2+=a[j];
        ++c2;
        --j;
      }
      else if(i!=j){
        sum1+=a[i];
        sum2+=a[j];
        ++c1;
        ++c2;
        ++i;
        --j;
      }
      else if(sum1==sum2 && i==j){
        ++c1;
        break;
      }

    }
   cout<<c1<<" "<<c2<<"\n";
    return 0;
}
