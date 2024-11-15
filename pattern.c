// 1 2 3 4 5 6 7 8
// 7 6 5 4 3 2 1
// 1 2 3 4 5 6
// 5 4 3 2 1
// 1 2 3 4
// 3 2 1
// 1 2
// 1


 #include <stdio.h>

 int main() {
   int n = 8;
    for (int i = n; i >= 1; i -= 2) {
         if (i == 8) {
             for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
       } 
        else if (i == 6) {
             for (int j = i; j >= 1; j--) {
              printf("%d ", j);
          }
        }
       printf("\n");
    }

   for (int i = 8; i >= 2; i -= 2) {
       for (int j = 1; j <= i; j++) {
           printf("%d ", j);
      }
       printf("\n");

        for (int j = i-1; j >= 1; j--) {
           printf("%d ", j);
       }
    printf("\n");
     }
     printf("\n");

    return 0;
 }
