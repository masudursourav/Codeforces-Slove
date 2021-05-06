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
    input();
    ll n,m;
    cin>>n>>m;
    char a;
    bool ch=true;
    if(n<m){
      a='G';
      ch=false;
    }
    else{
      a='B';
    }
    for(int i=0;i<abs(n-m);i++){
      cout<<a;
    }
    for(int i=0;i<(n+m)-abs(n-m);i++){
      if(ch==false){
        if(i%2==0){
          cout<<"B";
        }
        else{
          cout<<"G";
        }
      }
      else{
        if(i%2==0){
          cout<<"G";
        }
        else{
          cout<<"B";
        }
      }
    }
    cout<<"\n";
    return 0;
}
