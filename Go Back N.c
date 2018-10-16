#include<stdio.h>
main()
{
	int windowsize,i,ack;
	printf("Enter the window size:\n");
	scanf("%d",&windowsize);
	
	for(i=1;i<=windowsize;i++)
	{
		printf("\nFrame %d has been transmitted",i);
	}
	while(1)
	{
	printf("\nEnter the last acknowledgement received:");
	scanf("%d",&ack);
	
	if(ack==windowsize)
	{
	break;
	}
	else
	{
	
	while(ack<windowsize)
	{
		for(i=ack;i<=windowsize;i++)
		{
		printf("\nFrame %d has been transmitted",i);
		}
	ack=windowsize;
	}
	
}

}
}
