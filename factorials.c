#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned long long int n;
    n = atoll(argv[1]);
    int start = n;
     
    for (int i = 1; i < start; i++)
    {
        n = n * i;
    }
    printf("%llu\n", n);
    return 0;
}
