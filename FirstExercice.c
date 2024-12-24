 #include <stdio.h>

int main()
{
    int A, B, C;

    printf("Entrez la valeur de A: ");
    scanf("%d", &A);
    printf("Entrez la valeur de B: ");
    scanf("%d", &B);
    printf("Entrez la valeur de C: ");
    scanf("%d", &C);

    if (A >= B && A >= C) {
        printf("La valeur maximale est: A = %d\n", A);
    }
    else if (B >= A && B >= C) {
        printf("La valeur maximale est: B = %d\n", B);
    }
    else {
        printf("La valeur maximale est: C = %d\n", C);
    }

    return 0;
}
