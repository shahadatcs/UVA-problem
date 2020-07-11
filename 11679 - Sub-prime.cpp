#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char** argv)
{
    int b, n;
    int reserve [30];

    while ( scanf ("%d %d", &b, &n) ) {
        if ( b == 0 && n == 0 ) break;

        for ( int i = 1; i <= b; i++ ) scanf ("%d", &reserve [i]);

        for ( int i = 0; i < n; i++ ) {
            int d, c, v;
            scanf ("%d %d %d", &d, &c, &v);
            reserve [d] -= v;
            reserve [c] += v;
        }

        bool isBailout = false;

        for ( int i = 1; i <= b; i++ ) {
            if ( reserve [i] < 0 ) { isBailout = true; break; }
        }

        if ( isBailout ) printf ("N\n");
        else printf ("S\n");
    }

    return 0;
}
