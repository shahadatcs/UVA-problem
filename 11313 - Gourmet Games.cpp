#include<cstdio>
using namespace std;
int t, n, m, i;
int main(){
	scanf("%d",&t);
	while( t ){
		scanf("%d %d",&n,&m);
		for( i=1; ; ++i ){
			n = n-m+1;
			if( n<m ){
				if( n!=1 )
					puts("cannot do this");
				else
					printf("%d\n",i);
				break;
			}
		}
		--t;
	}
}
