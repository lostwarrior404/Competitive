#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	int hole=0;
	scanf("%d",&t);
	for (int i = 0; i < t; i++)
	{
		hole=0;
		char str[100];
		scanf("%s",str);
		int len=strlen(str);
		for (int i = 0; i < len; i++)
		{
			if(str[i]=='a'||str[i]=='d'||str[i]=='o'||str[i]=='p'||str[i]=='r'||str[i]=='A'||str[i]=='Q'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='R'||str[i]=='q'){
				hole++;
			}
			else if(str[i]=='b'||str[i]=='B'){
				hole=hole+2;
			}
		}
		printf("%d\n",hole);

	}
	return 0;
}