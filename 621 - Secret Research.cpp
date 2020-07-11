#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
	int tc, l;
	char s[1000];
	cin>>tc;
	while(tc--) {
		cin>>s;
		l = strlen(s);
		if(s[l-1] == '5')
			puts("-");
		else if(s[0] == '9' && s[l-1] == '4')
			puts("*");
		else if(s[0] == '1' && l >= 3)
			puts("?");
		else
			puts("+");
	}
    return 0;
}
