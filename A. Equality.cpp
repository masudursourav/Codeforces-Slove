//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
    int n,k,a[26]={0};
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      a[s[i]-'A']++;
    }
    sort(a,a+k);
    cout<<a[0]*k<<"\n";
    return 0;
}
