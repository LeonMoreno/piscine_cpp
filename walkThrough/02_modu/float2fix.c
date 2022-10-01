#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define FIXED_BIT 5
typedef uint16_t fint_t;

fint_t	float2fix(float n)
{
	fint_t	x;

	//x = n * (1 << FIXED_BIT);
	x = n * 32;
	return (x);
}

int main()
{
    float n;
    n = 2.5; // 0d10240
    printf("%f => %d\n", n, float2fix(n));
    n = 2.625; // 0d10752
    printf("%f => %d\n", n, float2fix(n));
    n = 0.375; // 0d1536
    printf("%f => %d\n", n, float2fix(n));
    n = 0.5; // 0d1536
    printf("%f => %d\n", n, float2fix(n));
    return 0;
}
