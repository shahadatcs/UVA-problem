#include <cstdio>
#include<iostream>
using namespace std;

int main() {
	int tc, w,h;

	cin>>tc;
	while(tc--){
		cin>>w>>h;
		printf("%d\n",(w/3)*(h/3));
	}

	return 0;
}
