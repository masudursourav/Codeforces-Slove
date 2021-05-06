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

         ll n,r,l,k=2;
         cin>>n>>r>>l;
         ll mn=n-(r-1),mx=0;
         r-=1;
         l-=1;
         for(int i=0;i<r;i++){
           mn+=k;
           k*=2;
         }
         k=1;
         for(int i=0;i<n;i++){
           mx+=k;
           if(l>0){
             k*=2;
             --l;
           }
         }
         cout<<mn<<" "<<mx<<"\n";

      return 0;
}
