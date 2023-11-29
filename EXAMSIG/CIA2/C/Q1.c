#include <stdio.h>
struct date {
    int dd,mm,yy;
}d1,d2;

int main() {
    int calcdaysfromnewyearig(int , int , int);
    int calcdiff(int , int);
    int calctotal(int , int , int);
    int a,b,diff,days;
    printf("Enter DD MM YYYY of date1:");
    scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
    printf("Enter DD MM YYYY of date2:");
    scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yy);
    a = calctotal(d1.dd,d1.mm,d1.yy);
    b = calctotal(d2.dd,d2.mm,d2.yy);
    if (a > b) {
        diff = a-b;
    }
    else {
        diff = b-a;
    }
    printf("%d",diff);


}

int calctotal(int d , int m , int y) {
    int calcdaysfromnewyearig(int , int , int);
    int totaldays = 0,dnewyear,yeardays;
    for (int i=0 ; i<y ;i++) {
        if (y%4 == 0) {
        yeardays = 366;
    } 
    else{
        yeardays = 365;
    }
    totaldays += i*yeardays ;
    }

    dnewyear = calcdaysfromnewyearig(d,m,y);
    totaldays +=dnewyear;
    return totaldays;
}

int calcdiff(int d1 , int d2) {
    if(d1>d2) {
        return d1-d2;
    }
    else {
        return d2-d1;
    }
}



int calcdaysfromnewyearig(int d ,int m ,int y) {
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
    days+=d;
    return days;
}