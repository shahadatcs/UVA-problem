#include <cstdio>
using namespace std;

int main() {
	int cnt = 1, tc;
	int x,y,z;

	scanf("%d",&tc);
	while(tc--){
		scanf("%d %d %d",&x,&y,&z);

		printf("Case %d: ",cnt++);
		if(x<=20 && y<=20 && z<=20) printf("good\n");
		else printf("bad\n");
	}

	return 0;
}
