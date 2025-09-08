#include <stdio.h>

int main() { 
    int start, stop;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start < stop) {
        printf("Start numbers is %d and stop number  is %d \n--------------\n", start, stop);
        for (int i = start; i <= stop; i++) {
            if (i % 1 == 0) {
         printf(" %d ", i );
            }
        }
    
        printf("\nThank you.\n");
                                            
    return 0;
    
}
}   