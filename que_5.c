#include <stdio.h>

#define N 4 // Number of people in the party

int M[N][N] = {
{0, 1, 1, 0},
{0, 0, 0, 0},
{0, 1, 0, 0},
{0, 1, 1, 0}
};

// knows(a, b): returns 1 if a knows b, else 0
int knows(int a, int b) {
return M[a][b];
}

// Function to find celebrity
int findCelebrity(int n) {
int candidate = 0;

// 1. Find candidate: Elimination phase
for(int i = 1; i < n; i++) {
if(knows(candidate, i))
    candidate = i;
}

// 2. Validate candidate
for(int i = 0; i < n; i++) {
 if(i != candidate) {
 if(knows(candidate, i) || !knows(i, candidate))
 return -1; // No celebrity
}
}
    return candidate; // Celebrity found
}
int main() {
int celeb = findCelebrity(N);

if(celeb == -1)
    printf("No celebrity exists.\n");
else
    printf("Celebrity is person: %d\n", celeb);
return 0;
}