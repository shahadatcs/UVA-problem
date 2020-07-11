#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, i, s;
    while (scanf("%d%d", &a, &b) == 2 && (a != -1 && b != -1)){
        s = abs(a - b);

        if(s > 50)
            s = 100 - s;

        printf("%d\n", s);
    }
    return 0;
}

