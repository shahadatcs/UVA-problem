
#include <iostream>

using namespace std;

#define MAXN 500000

int a[MAXN+5];

main() {
    int n,i,max;
    a[1]=1; a[2]=2;
    max = 2;
    for (i=3;i<=MAXN;i++) {
        a[i] = a[i-1]+2;
        if (a[i]>max) {
            a[i] = 2;
            max = a[i-1]+a[i-1];
        }
    }

    while (cin >> n && n!=0) {
        cout << a[n] << endl;
    }
}
