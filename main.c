#cp-project
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    int accNo;
    float amount;
    char type[10];

    fp = fopen("transactions.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Suspicious Transactions:\n");
    printf("---------------------------\n");

    while (fscanf(fp, "%d %f %s", &accNo, &amount, type) != EOF) {
        if (strcmp(type, "DEBIT") == 0 && amount > 100000) {
            printf("Account No: %d | Amount: %.2f | Type: %s\n",
                   accNo, amount, type);
        }
    }

    fclose(fp);
    return 0;
}
