#include <stdio.h>

int main() 
{
    int marks[5];       
    int total = 0;      
    float average;      
    int i;

    printf("Enter marks of 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        if(marks[i] < 0 || marks[i] > 100) 
		{
            printf("Invalid input! Marks should be between 0 and 100.\n");
            i--; 
            continue;
        }
        total += marks[i]; // Add marks to total
    }

    average = total / 5.0;

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
