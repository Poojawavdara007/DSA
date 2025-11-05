#include <stdio.h>

int main() {
    int n = 5; // height of pyramid

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n; i >= 1; i--) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (int k = (2 * i - 1); k >= 1; k--) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}



//Output :-

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
