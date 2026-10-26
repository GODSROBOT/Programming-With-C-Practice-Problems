// Distance conversion  
// Input distance in kilometres and convert it into metres 
// formula: metres = kilometres * 1000

#include <stdio.h>
int main() {
    int km, m;
    printf("Enter distance in kilometres:\n");
    scanf("%d", &km);
    m = km * 1000;
    printf("Distance in metres: %d\n", m);
}