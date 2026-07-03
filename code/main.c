#include <stdio.h>
#include <unistd.h>

int main() {

    int pc = 0;


    char *total[] = {
        "Load Data",
        "Add Numbers",
        "Store Result",
        "End Program"
    };

    int size = sizeof(total) / sizeof(total[0]);

    printf("Good day, here is the Program Counter (PC) simulation.\n");

    for(int i = 0; i < size; i++) {

        printf("\n----------------------------------");
        printf("\nProgram Counter (PC): %d", pc);
        printf("\nCurrent Execution: %s\n", total[pc]);

        sleep(1);

        pc++;
    }

    printf("\n----------------------------------");
    printf("\nProgram Execution Completed Successfully.\n");

    return 0;
}
