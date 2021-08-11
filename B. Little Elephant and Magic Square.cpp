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
        ll a[3][3];
        for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
          cin>>a[i][j];
        }
        }
        ll sum=0;
        for(int i=1;;i++){
          ll sum1=a[0][2]+i+a[2][0];
          ll sum2=a[0][1]+i+a[2][1];
          ll sum3=a[1][0]+i+a[1][2];
          if(sum1==sum2 && sum2==sum3){
            sum=sum1;
            a[1][1]=i;
            a[0][0]=sum-(a[0][1]+a[0][2]);
            a[2][2]=sum-(a[2][0]+a[2][1]);
            if((a[0][0]+a[1][1]+a[2][2])==sum){
              break;
            }
          }
        }
        for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<"\n";
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
