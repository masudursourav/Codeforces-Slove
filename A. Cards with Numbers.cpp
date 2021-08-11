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
        input();
        ll n;
        cin>>n;
        vector<vector<ll>>a(5001);
        for(int i=0;i<2*n;i++){
          ll in;cin>>in;
          a[in].push_back(i+1);
        }
        for(int i=0;i<5001;i++){
          if(a[i].size()%2!=0){
            cout<<-1<<"\n";
            return;
          }
        }
        for(int i=0;i<5001;i++){
          for(int j=0;j<a[i].size();j+=2){
            cout<<a[i][j]<<" "<<a[i][j+1]<<"\n";
          }
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
