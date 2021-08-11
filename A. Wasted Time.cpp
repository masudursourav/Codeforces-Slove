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
        ll n,k;cin>>n>>k;
        float a=0.0,b=0.0,z=0.0;
        cin>>a>>b;
        for(int i=0;i<n-1;i++){
          double x,y;cin>>x>>y;
          z+=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
          a=x,b=y;
        }
        double ans=(k*z)/50.0;
        printf("%.10lf\n",ans);

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
