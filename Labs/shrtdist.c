#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct City
{
	long long int x,y;
	char name[20];
}City;
int main(int argc, char const *argv[])
{
	int j;
	int t=0;
	scanf("%d",&t);
	for (j = 0; j < t; j++)
	{
		int n;
		char na[40];
		scanf("%d",&n);
		City *c=(City *)malloc(n*sizeof(City));
		int i;
		for (i = 0; i < n; i++)
		{
			scanf("%lld %lld %s",&((c+i)->x),&((c+i)->y),((c+i)->name));
		}
		// for (i = 0; i < n; i++)
		// {
		// 	printf("%lld %lld %s",((c+i)->x),((c+i)->y),((c+i)->name));
		// }
		long long int small = abs(((c+0)->x)-((c+1)->x))+abs(((c+0)->y)-((c+1)->y));
		sprintf(na,"%s %s",(c+0)->name,(c+1)->name);
		int j;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if((abs(((c+i)->x)-((c+j)->x))+abs(((c+i)->y)-((c+j)->y)))<small){
					sprintf(na,"%s %s",(c+i)->name,(c+j)->name);
					small=abs(((c+i)->x)-((c+j)->x))+abs(((c+i)->y)-((c+j)->y));
				}
			}
		}
	printf("%s\n",na);
	}
	return 0;
}