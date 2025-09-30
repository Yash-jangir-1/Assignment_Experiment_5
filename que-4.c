#include <stdio.h>
// Naive O(n) power calculation
long long naive_power(long long a, int n) {
 long long result = 1;
for (int i = 0; i < n; i++)
    result *= a;
    return result;
}
// Fast Exponentiation by Squaring O(log n)
long long fast_power(long long a, int n) {
long long result = 1;

while (n > 0)
{
if (n % 2 == 1)
    result *= a;
    a *= a;
    n /= 2;
}
return result;
}
int main() {
long long a;
int n;
printf("Enter base (a): ");
scanf("%lld", &a);

printf("Enter exponent (n): ");
scanf("%d", &n);

printf("\nNaive method: %lld\n", naive_power(a, n));

printf("Fast exponentiation: %lld\n", fast_power(a, n));
return 0;
}