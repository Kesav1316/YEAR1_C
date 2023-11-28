//CALCULATE NUMBER OF DAYS TO CURRENT DAY FROM BIRTHDAY
#include <stdio.h>
int *mfromnewyearadd;
int calcdays_from_newyear( int , int , int);
int calcdays_from_birthday(void);
int calcdays_from_birthyear(void);

struct DateDay {
    int date , month , year;
    char day[15];
}s,c={28,11,2023};  
typedef struct DateDay dob;

int calcdays_from_birthyear() {
    int totaldays = 0;
    for (int i = s.year+1 ; i < c.year ; i++) {
        if (i%4 == 0) {
            totaldays+=366;
        }
        else {
            totaldays+=365;
        }
    }
    totaldays += calcdays_from_birthday() + calcdays_from_newyear(s.date , s.month , s.year);
    return totaldays;
}
int main() {
    dob s;
    dob c = {28,11,2023};
    int totdays;
    printf("Enter the date:");
    scanf("%d",&s.date);
    printf("Enter the month:");
    scanf("%d",&s.month);
    printf("Enter the year:");
    scanf("%d",&s.year);
    printf("%d\n%d\n%d\n",s.date,s.month,s.year);
    totdays = calcdays_from_birthyear();
    printf("%d",totdays);
    return 0;
}

int calcdays_from_newyear(int d ,int m ,int y) {
    int feb,days = 0 ,mdays = 30;
    if (y%4 == 0) {
        feb = 29;
    } else feb = 28;

    for ( int i = 1 ; i <m ; i++ ) {
        if ( i <m && i == 1 ||i== 3 ||i== 5 ||i== 7 ||i== 8 ||i== 10 ||i== 12) {
            days +=31;
        }
        else if ( i < m && i == 2 ){
            days +=feb;
        }

        else if ( i <m && i == 2 ||i== 4 ||i== 6 ||i== 9 ||i== 11 ){
            days+=30;
        }

    }
    mfromnewyearadd = &y;
    days+=d;
    return days;

}

int calcdays_from_birthday() {
    int days_from_new_year;
    int days_feb;
    int days_to_new_year;
    days_from_new_year = calcdays_from_newyear(s.date,s.month,s.year);
    if (*mfromnewyearadd %4 == 0) {
        days_to_new_year = 366 - days_from_new_year;
    }
    else {
        days_to_new_year = 365 - days_from_new_year;
    }
    return days_to_new_year;
}

