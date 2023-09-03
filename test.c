#include <stdio.h>

void main()
{
    int k;
    int a[3] = {2, 3, 4};
    int *b[3];
    int **c[3];
    int ***d[3];
    int ****e[3];
    int *****f[3];

    for (k = 0; k < 3; k++)
    {
        b[k] = a + k;
        c[k] = b + k;
        d[k] = c + k;
        e[k] = d + k;
        f[k] = e + k;
    }

    for (k = 0; k < 3; k++)
    {
        printf("%3d", *b[k]);
        printf("%3d", **c[k]);
        printf("%3d", ***d[k]);
        printf("%3d", ****e[k]);
        printf("%3d\n", *****f[k]);
    }

    return;
}