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
        ll hh,m,h,d,c,n;
        cin>>hh>>m>>h>>d>>c>>n;
        double ans=0;
        ll k;
        if(h%n==0){
          k=h/n;
        }
        else{
          k=(h/n)+1;
        }
        if(hh<20){
          ll newh=((20*60)-(hh*60 + m))*d;
          newh+=h;
          ll kn;
          if(newh%n==0){
            kn=newh/n;
          }
          else{
            kn=(newh/n)+1;
          }
          double a,b;
          a=(kn*(c*1.0-((c*1.0*20.0)/100.0)));
          b=(k*c);
          ans=min(a,b);
        }
        else{
          ans=(k*(c*1.0-((c*1.0*20.0)/100.0)));
        }
        printf("%.4lf\n",ans);

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
