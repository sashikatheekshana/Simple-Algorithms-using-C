#include <stdio.h>

int main() {
    char A[] = {'A', 'A', 'A', 'A'};
    char B[] = {'B', 'B', 'B', 'B'};
    char AB[8];
    int i;
    for(i = 0; i < 4; i++)
    {
        AB[i*2] = A[i];
        AB[i*2+1] = B[i];
    }
    for(i = 0; i < 8; i++)
    {
        printf("%c", AB[i]);
    }
    return 0;
}
