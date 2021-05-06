//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll n;cin>>n;
       vector<ll>a(n);
       ll sum=0;
       for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
       sort(a.rbegin(),a.rend());
       ll m;cin>>m;
       for(int i=0;i<m;i++){
         ll in;
         cin>>in;
         cout<<sum-a[in-1]<<"\n";
       }


      return 0;
}
