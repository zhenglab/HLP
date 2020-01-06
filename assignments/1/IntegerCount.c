#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        int x, ans = 0;
        scanf("%d", &x);
        while (x > 0) {
            ans += x % 2;
            x /= 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}
