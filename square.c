#include <stdio.h>

int main() {
    int i;

    printf("Series: ");
    for (i = 1; i <= 11; i++) {
        int term = i * i;
        printf("+ %d ", term);

    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int i, sum = 0;

//     printf("Series: ");
//     for (i = 1; i <= 10; i++) {
//         int term = i * i;
//         if (i == 1) {
//             printf("%d ", term);     // First term without +
//         } else {
//             printf("+ %d ", term);   // Other terms with +
//         }
//         sum = sum + term;
//     }

//     printf("\nSum of the series = %d\n", sum);

//     return 0;
// }
