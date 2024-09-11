#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather);

int main()
{
    int amount, temperature, humidity;
    char outlook[9], wind; //wind{T,F}
    scanf("%d", &amount);
    for (int i=0; i<amount; i++) {
        scanf("%s %d %d %c", outlook, &temperature, &humidity, &wind);
        struct Weather wt;
        strcpy(wt.outlook, outlook);
        wt.temperature = temperature;
        wt.humidity = humidity;
        wt.wind = wind;
        playing_decision(wt);
    }
    return 0;
}

void playing_decision(struct Weather wt) {
    if (strcmp(wt.outlook, "overcast") == 0) {
        printf("yes\n");
    }
    else if (strcmp(wt.outlook, "rain") == 0) {
        if (wt.wind == 'F') {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    else if (strcmp(wt.outlook, "sunny") == 0) {
        if (wt.humidity <= 77.5) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
}