#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * checkfunny(char *s){
	int i;
	static char *yes="Funny";
	static char *no="Not Funny";
	int len=strlen(s);
	char rev[1000];
	for (i = 0; i < len; i++)
	{
		rev[len-i-1]=s[i];
	}
	rev[len]='\0';
	int flag;
	for(i=1;i<=len/2;i++){
		if(abs(s[i]-s[i-1])==abs(rev[i]-rev[i-1])){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag){
		return yes;
	}
	else{
		return no;
	}

}
int main(int argc, char const *argv[])
{
	int j;
	int t=0;
	scanf("%d",&t);
	for (j = 0; j < t; j++)
	{
		char *string=(char *)malloc(sizeof(char)*1000);
		scanf("%s",string);
		printf("%s\n",checkfunny(string));
		free(string);
	}
	return 0;
}