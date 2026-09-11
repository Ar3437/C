#include <stdio.h>
int main() {
    int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);
    int countday;
    countday=(367*m-362)/12+d;
    if(m>2){
        int is_leap=(y%4==0 && (y%100!=0 || y%400==0));
        countday-=(2-is_leap);
    }printf("%d no. of days",countday);
    return 0;
}