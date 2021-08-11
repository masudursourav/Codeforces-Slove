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
        ll a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        ll s=0,e=0;
        for(int i=0;i<n-1;i++){
          if(a[i]>a[i+1]){
            s=i;e=1;
            while(a[i]>a[i+1]){
              ++e;
              ++i;
            }
            break;
          }
        }
        //cout<<s<<" "<<e<<"\n";
        reverse(a+s,a+e+s);
        for(int i=0;i<n-1;i++){
          if(a[i]>a[i+1]){
            cout<<"no"<<"\n";
            return;
          }
        }
        if(e==0){
          ++e;
        }
        cout<<"yes"<<"\n"<<s+1<<" "<<e+s<<"\n";

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
