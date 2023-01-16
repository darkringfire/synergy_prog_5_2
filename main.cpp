#include <iostream>
#define NMAX 100
#define MMAX 100

int main() {
    int arr[NMAX][MMAX];
    int n, m;
    do {
        printf("Enter number of rows (1..%i):", NMAX);
        scanf("%i", &n);
    } while (n < 1 || n > NMAX);
    do {
        printf("Enter number of columns (1..%i):", MMAX);
        scanf("%i", &m);
    } while (m < 1 || m > MMAX);

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("Enter item [%i,%i]:", j, i);
            scanf("%i", &arr[j][i]);
        }
    }
    printf("Matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%6i", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
