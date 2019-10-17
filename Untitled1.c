#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
  int a;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  if(a<10)
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
    printf("Working with project");
    printf("Computer Science Engineer");
  }
  else
    printf("Hello World");
  }


