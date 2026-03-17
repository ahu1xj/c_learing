#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void show_menu() {
    printf("\nEnter the operation of your choice:\n");
    printf("a. add         s. subtract\n");
    printf("m. multiply    d. divide\n");
    printf("q. quit\n");
}


float get_number(const char *msg) {
    char input[40];
    float value;
    while (1) {
        printf("%s", msg);
        scanf("%s", input);
        
  
        if (strcmp(input, "0") == 0 || strcmp(input, "0.0") == 0) {
            return 0.0f;
        }
        
        value = atof(input);//atof可以返回非整数
        if (value == 0.0f) {
            printf("%s is not a number.\nPlease enter a number, such as 2.5, -1.78, or 3: ", input);
        } else {
            return value;
        }
    }
}

int main() {
    char ch;
    float n1, n2, res;

    while (1) {
        show_menu();
        

        if (scanf(" %c", &ch) != 1 || ch == 'q') {
            break;
        }

        n1 = get_number("Enter first number: ");
        
        while (1) {
            n2 = get_number("Enter second number: ");
            if (ch == 'd' && n2 == 0.0f) {
                printf("Enter a number other than 0: ");
                continue;
            }
            break;
        }

        switch (ch) {
            case 'a': res = n1 + n2; printf("%.1f + %.1f = %.1f\n", n1, n2, res); break;
            case 's': res = n1 - n2; printf("%.1f - %.1f = %.1f\n", n1, n2, res); break;
            case 'm': res = n1 * n2; printf("%.1f * %.1f = %.1f\n", n1, n2, res); break;
            case 'd': res = n1 / n2; printf("%.1f / %.1f = %.1f\n", n1, n2, res); break;
        }
    }

    printf("Bye.\n");
    return 0;
}
