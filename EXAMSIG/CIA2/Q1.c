#include <stdio.h>
struct date {
    int dd,mm,yy;
}d1,d2;

int main() {
    int calcdays(int , int , int);
    int a;
    printf("Enter DD MM YYYY of date1:");
    scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
    //printf("Enter DD MM YYYY of date2:");
    //scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yy);
    a = calcdays(d1.dd,d1.mm,d1.yy);
    printf("%d",a);


}



int calcdays(int d ,int m ,int y) {
    int feb,days = 0 ,mdays = 30;
    if (y%4 == 0) {
        feb = 29;
    } else feb = 28;

    for ( int i = 1 ; i <=m ; i++ ) {
        if ( i <m && i == 1 ||i== 3 ||i== 5 ||i== 7 ||i== 8 ||i== 10 ||i== 12) {
            days +=31;
        }
        else if ( i < m && i == 2 ){
            days +=feb;
        }
        else if (i == m) 
        days += d;
        else if ( i <m && i == 2 ||i== 4 ||i== 6 ||i== 9 ||i== 11 ){
            days+=30;
        }

    }
    return days;




}