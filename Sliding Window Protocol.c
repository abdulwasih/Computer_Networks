#include<stdio.h>
main()
{
	int windowsize,frame,frames[30],i,j,k;
	printf("Enter the windows size: ");
	scanf("%d",&windowsize);
	
	printf("Enter the number of frames to transmit : ");
	scanf("%d",&frame);
	
	printf("Enter the frames to be transmitted : \n");
	for(i=0;i<frame;i++)
	{
		scanf("%d",&frames[i]);
	}
	
	k=0;
			for(k;k<windowsize;k++)
			{
				printf("\nThe frame[%d] are %d:",k,frames[k]);
			}
}
