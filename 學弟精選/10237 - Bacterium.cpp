#include <stdio.h>
int sum=0;
void bac(int now, int life, int week)
{
	if(life==4){
		sum--;
		return;
	}else if(life==1){
		sum++;
	}
	now++;
	life++;
	if(now==week){
		return;
	}
	if(life-1<3){
		bac(now,life,week);
		bac(now,1,week);
	}else if(life-1==3){
		bac(now,life,week);	
	}
	
}
int main(void)
{
	int week;
	scanf("%d",&week);
	bac(0,1,week);
	printf("%d\n",sum);
	return 0;
}
