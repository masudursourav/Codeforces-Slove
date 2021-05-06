#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,c,a[1000],max=0;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            int sum=a[i-1]-a[i]-c;
            if(sum>max){
                max=sum;
            }
        }
    }
    cout<<max<<"\n";
    return 0;
}
