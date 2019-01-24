#include<stdio.h>
#include<stdlib.h>

typedef struct link{
	 int info;
	 struct link *next;
} node;
node * start;
void create(node *);
void displays(node *);
void insert(node *); 
void delete_node(node *);

int main()
{
	start=(node *)malloc(sizeof(node *));
	create(start);
	displays(start);
	insert(start);
	printf("\nnew list");
	displays(start);
	delete_node(start);
	printf("\nnew list");
	displays(start);
}

void create(node *p)
{
	printf("\nenter info and -9999 to exit:");
	scanf("%d",&p->info);
	
	if(p->info!=-9999)
	{
		p->next=(node *)malloc(sizeof(node *));
		create(p->next);
	}
	else
	p->next=NULL;
}

void displays(node *p)
{
	for(;p->next!=NULL;p=p->next)
	{
		printf("\n%d",p->info);
	}
}

void insert(node *p)
{
	node *t;
	int c,k;
	printf("\nenter your choice");
	printf("\n1.insert at the beginning");
	printf("\n2.insert at the end");
	printf("\n3.insert in the middle");
	scanf("%d",&c);
	node *nw=(node *)malloc(sizeof(node *));
	
	
	
	if(c==1)
	{
	printf("\nenter info");
	scanf("%d",&nw->info);
	
	   nw->next=start;
	   start=nw;	
	}
	else if(c==2)
	{
		printf("\nenter info");
	    scanf("%d",&nw->info);
		for(;p->next!=NULL;p=p->next)
		{
		  t=p;
		}
		nw->next=t->next;
		t->next=nw;
		
		
	}
	else if(c==3)
	{
		printf("\nenter info");
	    scanf("%d",&nw->info);
		printf("enter key value");
		scanf("%d",&k);
		
		for(;p->next!=NULL;p=p->next)
		{
			if(p->info==k)
			{
				nw->next=p->next;
				p->next=nw;
			}
		}
		
	}
	else
	printf("wrong choice");
	
}

void delete_node(node *p)
{
	node *t;
	int c,k;
	printf("\nenter your choice");
	printf("\n1.delete at the beginning");
	printf("\n2.delete at the end");
	printf("\n3.delete in the middle");
	scanf("%d",&c);
	
	if(c==1)
	{
		start=p->next;
		free(p);
	}
	else if(c==2)
	{
			for(;p->next!=NULL;p=p->next)
			{
				t=p;
			}
			t->next=NULL;
		
			free(p);
		
	}
	else if(c==3)
	{
		t=NULL;
		printf("enter key value");
		scanf("%d",&k);
		
		for(;p->next!=NULL;p=p->next)
		{
			if(p->info==k)
			{
			  t->next=p->next;
				free(p);
				break;	
			}
			t=p;
	   }
	}
	else
	printf("wrong choice");
}
