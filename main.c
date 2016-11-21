
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t cats(int c)
{
    int i;
    uint64_t n = 0;
    
    for (i = 0; i < c; i++) {
        n = ++n * ( i + 1 );
    }
    
    return n;
}

int main()
{
    int i;
    
    for (i = 0; i < 16; i++) {
        printf("%d => %16" PRIu64 "\n", i, cats(i));
    }

    return 0;
}
