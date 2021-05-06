#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,h3,m1,m2,m3;
    scanf("%02d:%2d",&h1,&m1);
    scanf("%02d:%2d",&h2,&m2);
    h3=h1-h2;
    m3=m1-m2;
    if(m3<0){
        m3=m3+60;
        h3=h3-1;
    }
    if(h3<0){
        h3=h3+24;
    }
    printf("%02d:%02d\n",h3,m3);
    return 0;
}
