#include <stdio.h>
main()
{
	int c;
	int bn=0,tn=0,nln=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\b')
			bn++;
		if(c=='\t')
			tn++;
		if(c=='\n')
			nln++;
	}
printf("blank number =%d\ntab number=%d\nnewline number =%d\n",bn,tn,nln);

}
