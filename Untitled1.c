#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
  time_t now;
  struct tm *tm_now;
  int hours,min,sec;
  now=time(NULL);   //initialize time with zero
  tm_now=localtime(&now);
  hours=tm_now->tm_hour;
  min=tm_now->tm_min;
  sec=tm_now->tm_sec;
  printf("time is:- %d:%d:%d",hours,min,sec);

  printf("time is:- %d:%d:%d",hours,min,sec);
  }


