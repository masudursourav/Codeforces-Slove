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
        ll t,x,y,xf,yf;
        cin>>t>>x>>y>>xf>>yf;
        string s;cin>>s;
        for(int i=0;i<t;i++){
          if(s[i]=='E'){
            if(x<xf) ++x;
          }
          else if(s[i]=='W'){
            if(x>xf) --x;
          }
          else if(s[i]=='N'){
            if(y<yf) ++y;
          }
          else if(s[i]=='S'){
            if(y>yf) --y;
          }
          if(x==xf && y==yf){
            cout<<i+1<<"\n";
            return;
          }
        }
        cout<<-1<<"\n";

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
