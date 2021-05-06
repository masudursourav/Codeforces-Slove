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
    int h,m;
    scanf("%d:%d",&h,&m);
    while(1){
      ++m;
      if(m==60){
        m=0;
        h=(h+1)%24;
      }
      if(m%10==h/10 && h%10==m/10){
        printf("%02d:%02d\n",h,m);
        return 0;
      }
    }

    return 0;
}
