// Thia code prints out the precise time of your given country
#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep() function

int main() {
    while (1) {
        // Get current time
        time_t currentTime = time(NULL);
        struct tm *timeInfo = localtime(&currentTime);

        // Extract hours, minutes, and seconds
        int hours = timeInfo->tm_hour;
        int minutes = timeInfo->tm_min;
        int seconds = timeInfo->tm_sec;

        // Print the time in digital clock format
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);

        // Delay for one second
        sleep(1);
    }

    return 0;
}
