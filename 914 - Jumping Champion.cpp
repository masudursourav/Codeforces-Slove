//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

bool prime[1000001];
void shiv()
{
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<1000001;i++){
    if(prime[i]){
    for(int j=i*i;j<1000001;j+=i){
      prime[j]=false;
    }
  }
}
}

int main()
{
    int t;
    cin>>t;
    while(t--){
      int x,y;
      cin>>x>>y;
      vector<int>v;
      for(int i=x;i<=y;i++){
        if(prime[i])
        v.pb(i);
      }
      if(v.size()==2){
        cout<<"No jumping champion"<<"\n";
        continue;
      }
      int a[1000001]={0},mx=0;
      for(int i=1;i<v.size();i++){
        a[v[i]-v[i-1]]++;
        if(a[v[i]-v[i-1]]>mx){
          mx=a[v[i]-v[i-1]];
        }
      }
      int ch=0;
      for(int i=0;i<1000001;i++){
        if(a[i]==mx){
          ++ch;
          if(ch>1){
            break;
          }
        }
      }
      if(mx>1){
        cout<<"No jumping champion"<<"\n";
        continue;
      }
      for(int i=0;i<1000001;i++){
        if(mx==a[i]){
          cout<<"The jumping champion is "<<i<<"\n";
          break;
        }
      }
    }

    return 0;
}
