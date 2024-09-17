#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main()
{
    int amount;
    float commission;
    char id_find[10];

    scanf("%d\n", &amount);
    struct Record record[amount];

    for (int i=0; i<amount; i++) {
        scanf("%s %s %ld %ld\n", record[i].id, record[i].name, &record[i].salary, &record[i].sales);
    }
    scanf("%s", id_find);
    for (int j=0; j<amount; j++) {
        if (strcmp(record[j].id, id_find) == 0) {
            commission = record[j].sales * 0.02;
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", record[j].id, record[j].name, record[j].sales, commission, record[j].salary, record[j].salary+commission);
            return 0;
        }
    }
    printf("ID not found !!!");
    return 0;
}