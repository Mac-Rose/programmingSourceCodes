#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int max = 1000;
    int ar[max];
    ar[0] = 3, ar[1] = 5;
    int n, m;
    scanf("%d %d", &n, &m);
    int start = 0, last = 2;
    while (ar[last - 1] < m)
    {
        ar[last] = ar[start] * 10 + 3;
        ar[last + 1] = ar[start] * 10 + 5;
        last += 2;
        start++;
    }
    int ans = 0;
    for (int i = 0; i < max; i++)
    {
        if (ar[i] >= n)
        {
            start = i;
            break;
        }
    }
    for (int i = start; i < max; i++)
    {
        if (ar[i] > m)
            break;
        ans++;
    }
    printf("%d", ans);
    return 0;
}
