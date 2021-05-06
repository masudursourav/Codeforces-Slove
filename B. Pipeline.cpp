//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
ll sum1(ll x,ll k){
    x--;
    return ((k*(k+1))/2-(x*(x+1))/2)-(k-x-1);
}

void slove(){
    ll n,k;
    cin>>n>>k;
    ll temp=n-1,temp1=k-1;
    if(n==1){
      cout<<0<<"\n";
    }
    else if(n<=k){
      cout<<1<<"\n";
    }
    else if((temp1*(temp1+1)/2) < temp){
      cout<<-1<<"\n";
      return;
    }
   else{
      ll l=2,r=k;
      while(l<r){
       ll m = l+(r-l+1)/2;
       if(sum1(m,k) > n){
           l=m;
      }
       else if(sum1(m,k) < n){
           r=m-1;
        }
       else
        {
           l = m;
           break;
       }
   }
   cout <<  k-l+1 << endl;
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t=1; //cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
