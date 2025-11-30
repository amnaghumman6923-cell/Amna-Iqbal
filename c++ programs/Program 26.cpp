#include <stdio.h>

int main()
 {
    float rupees = 12000.0;
    float dollars;
    float rate = 60.0;     

    dollars = rupees / rate;

    printf("Rs. %.2f is equal to $%.2f\n", rupees, dollars);

    return 0;
}
