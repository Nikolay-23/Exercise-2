
#include <stdio.h>

int main()
{
    int n;
    scanf_s("%d", &n);

    int num1 = 1; 
    int num2 = 1;  

    
    while (num1 <= n) {
        
        for (int i = 0; i < num2 && num1 <= n; i++) {
            printf("%d ", num1);
            num1++;
        }
        
        printf("\n");
        num2++;
    }
}
