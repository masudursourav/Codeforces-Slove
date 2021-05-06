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
    int h,m,m2=0,h2=0,x;
    scanf("%02d:%02d",&h,&m);
    scanf("%d",&x);
    m2=m+x;
    h2=h;
    if(m2>59){
      h2=h+(int)(m2/60);
      m2=m2%60;
    }
    if(h2>23){
      h2=h2%24;
    }
    printf("%02d:%02d\n",h2,m2);

    return 0;
}
