#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int arr[n];
		set <int> st;
		for (int i = 0;i<n;i++)
			cin >> arr[i],
      st.insert(arr[i]);
		int c = 1;

		for (int i=1;i<1024;i++){
			set <int> st2;
			for (int j=0; j<n;j++)
				st2.insert(arr[j]^i);
			if (st==st2) {
				cout<<i<<"\n";
				c=0;
				break;
			}
		}
		if (c)
			cout<<-1<<"\n";
	}
}
