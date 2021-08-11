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
        ll n,m,d;
        cin>>n>>m>>d;
        ll a[100001];
        for(int i=0;i<n*m;i++){
          cin>>a[i];
        }
        ll c=(n*m)/2;
        ll s=0;
        sort(a,a+n*m);
        for(int i=0;i<n*m;i++) s+=abs(a[c]-a[i]);
        if(s%d==0){
          cout<<s/d<<"\n";
        }
        else{
          cout<<-1<<"\n";
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
