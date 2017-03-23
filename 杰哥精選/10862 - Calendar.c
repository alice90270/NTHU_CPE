#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cc{
    int year;
    int month;
    int day;
}date;

int main(){
    date* d;
    d = (date*)malloc(sizeof(date)*9000*366);
    long long int i;
    i = 0;
    int cur_year, cur_month, cur_day;
    for(cur_year = 2000; cur_year <= 9999; cur_year++){
        for(cur_month = 1; cur_month <= 12; cur_month++){
            if(cur_month == 2 && cur_year%4 == 0){
                if(cur_year%100 == 0 && cur_year%400 != 0){
                    for(cur_day = 1; cur_day <= 28; cur_day++){
                        d[i].year = cur_year;
                        d[i].month = cur_month;
                        d[i].day = cur_day;
                        i++;
                    }
                }
                else{
                    for(cur_day = 1; cur_day <= 29; cur_day++){
                        d[i].year = cur_year;
                        d[i].month = cur_month;
                        d[i].day = cur_day;
                        i++;
                    }
                }
            }
            else if(cur_month == 2){
                for(cur_day = 1; cur_day <= 28; cur_day++){
                        d[i].year = cur_year;
                        d[i].month = cur_month;
                        d[i].day = cur_day;
                        i++;
                    }
            }
            else if(cur_month == 1 || cur_month == 3 || cur_month == 5 || cur_month == 7 || cur_month == 8 || cur_month == 10 || cur_month == 12){
                for(cur_day = 1; cur_day <= 31; cur_day++){
                        d[i].year = cur_year;
                        d[i].month = cur_month;
                        d[i].day = cur_day;
                        i++;
                }
            }
            else{
                for(cur_day = 1; cur_day <= 30; cur_day++){
                        d[i].year = cur_year;
                        d[i].month = cur_month;
                        d[i].day = cur_day;
                        i++;
                }
            }
        }
    }

    char week[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    long long int day;
    while(scanf("%lld", &day)!=EOF){
        if(day == -1)
            break;
        printf("%d-%d%d-%d%d ", d[day].year, d[day].month/10, d[day].month%10, d[day].day/10, d[day].day%10);
        printf("%s\n", week[day%7]);
    }
    return 0;
}
