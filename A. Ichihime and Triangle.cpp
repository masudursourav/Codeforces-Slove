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
    ll t;
    cin>>t;
    while(t--){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      while(1){
        if(a+b>c && b+c>a && c+a>b){
          cout<<a<<" "<<b<<" "<<c<<"\n";
          break;
        }
        else{
          if(a+b<=c){
              a=b;
              b=c;
          }
          else if(a+c<=b){
             a=b;
             c=d;
          }
          else if(b+c<=a){
            b=c;
            c=d;
          }
        }
      }
    }

    return 0;
}
