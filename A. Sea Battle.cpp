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
    ll w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    cout<<(2*(h1+h2+w1)+4)<<"\n";

    return 0;
}
