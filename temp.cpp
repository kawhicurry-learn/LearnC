#include <stdio.h>
int main( ) {
    int t, n, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        if (n > 2 && k * 2 < n || k == 0)
            for (int i = n; i > 0; i--)
                if (k) {
                    k--;
                    printf("%d %d ", i - 1, i);
                    i--;
                } else
                    printf("%d ", i);
        else
            printf("-1");
        printf("\n");
    }
}