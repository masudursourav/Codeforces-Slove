//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;
        cin>>n;
        ll o=0,e=0;
        for(int i=0;i<2*n;i++){
          ll in;cin>>in;
          if(in%2==0){
            ++e;
          }
          else{
            ++o;
          }
        }
        if(e==o){
          cout<<"Yes"<<"\n";
        }
        else{
          cout<<"No"<<"\n";
        }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
