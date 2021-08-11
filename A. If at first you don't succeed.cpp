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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        if(c>min(a,b)){
          cout<<-1<<"\n";
          return;
        }
        ll totalStudentPassed=(a-c)+(b-c)+c;
        if(totalStudentPassed>=n){
          cout<<-1<<"\n";
          return;
        }
        cout<<n-totalStudentPassed<<"\n";


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
