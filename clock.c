#include <stdio.h>
#include <time.h>

void displayClock()
{
  time_t currentTime;
  struct tm *localTime;

  // To get the current time

  currentTime = time(NULL);
  localTime = localtime(&currentTime);

  //collect hour, minute and second

  int hour = localTime -> tm_hour;
  int min = localTime ->tm_min;
  int sec = localTime -> tm_sec;

//display clock in HH:MM:SS format

printf("%02d:%02d:%02d", hour, min, sec);
}

//create a loop to continuously display and update the clock

int main()
{
  while (1){
    displayClock();
    printf("\r"); //move cursor
    fflush(stdout); //flush output buffer
    usleep(1000000);//pause for 1 sec
  }
}
