#include<stdio.h>
#include<string.h>


void lower(char *,int);
void upper(char *,int);

int main()
{ int i,n;
	char st[100];
	printf("enter a string");
	 gets(st);
		int l=strlen(st);

		printf("1 for changing in upper case and 0 for lower case");
		scanf("%d",&n);
		if(n==0)
	      lower(st,l);
	      else
	      upper(st,l);

	  for(i=0;i<l;i++)
	     printf("%c",st[i]);

}

void lower(char *p,int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		if(*p>=65&&*p<=90)
		  *p=*p+32;
		  p++;

	}
}

void upper(char *p,int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		if(*p>=65&&*p>=90)
		*p=*p-32;
		p++;
	}
}
