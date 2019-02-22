#include <stdio.h>

int main()
{
    int frist, secon;
    int ans = 0;
    scanf("%d", &frist);
    scanf("%d", &secon);
    while(secon != 0)
    {
        ans = ans + frist % secon;
        frist = secon;
        scanf("%d", &secon);
    }
    printf("%d\n", ans+1);

    return 0;
}