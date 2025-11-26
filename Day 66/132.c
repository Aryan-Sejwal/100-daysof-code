//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.//
#include <stdio.h>
#include <string.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight signal;
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    if (signal == RED)
        printf("Stop");
    else if (signal == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}
