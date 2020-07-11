#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int tc, a, b, c, n;
    cin>>tc;
    while (tc--) {
		int ans = 0;
		cin>>n;
		for (int i = 0; i < n; i++) {
        cin>>a>>b>>c;
        ans += a*c;
		}
		cout<<ans<<endl;
		}

	return 0;
}
