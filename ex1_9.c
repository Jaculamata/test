#include <stdio.h>
main()
{
	int a,b=0;
	while((a=getchar())!=EOF)
	{
		if(a=='\b')
		{
			if(b!='\b')
			{
				putchar(a);
				b=a;
			}
		}
		else
		{
			putchar(a);
		}
	}
}
