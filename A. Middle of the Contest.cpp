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
    int h1,m1,h2,m2,h3,m3;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    m3=m2-m1;
    h3=h2-h1;
    if(m3<0){
      m3=m3+60;
      --h3;
    }
    if(h3<0){
      h3=h3+24;
    }
    int ans=(h3*60)+m3;
    ans=(int)(ans/2);
    int ansm=m1+(ans%60);
    int ansh=h1+(int)(ans/60);
    if(ansm>=60){
      ansh+=(int)(ansm/60);
      ansm=ansm%60;
    }
    printf("%02d:%02d\n",ansh,ansm);

    return 0;
}
