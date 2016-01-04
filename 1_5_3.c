#include <stdio.h>
main()
{
	int c,nl;
	nl=0;
	while((c=getchar())!=EOF)
		{if(c=='\n')
			++nl;printf("%d",c);}
printf("I can read chars");
	printf("%d\n",nl);
printf("i can print nl");
}
