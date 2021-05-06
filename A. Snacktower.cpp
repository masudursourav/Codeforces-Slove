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
    ll n;
    cin>>n;
    ll a[n+5]={0};
    ll temp=n;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      a[in]=1;
      if(in==temp){
        for(int j=temp;j>0;j--){
          if(a[j]){
            cout<<j<<" ";
            a[j]=0;
            temp=j-1;
          }
          else{
            break;
          }
        }
        cout<<"\n";
      }
      else{
        cout<<"\n";
      }
    }

    return 0;
}
