#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days -takes a date and prints how many days are
 * left in the year, taking leap year into account
 * @month: month in number formart
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);

}
}