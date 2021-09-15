#include"stdio.h"
# define N 5
int QUEUE[N],FRONT=-1,REAR=-1;
void INSERTION(void);
void DELETION(void);
void DISPLAY(void);
	
int main()
{
	int choice;
	printf("\n 1.INSERTION \n 2.DELETION \n 3.DISPLAY \n 4.EXIT");
    do
    {
        printf("\n Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                INSERTION();
                break;
            }
            case 2:
            {
                DELETION();
                break;
            }
            case 3:
            {
                DISPLAY();
                break;
            }
            case 4:
            {
                printf("\n EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4)");
            }
        }
	}
	while(choice!=4);
    return 0;
}

void INSERTION()
{
	int ITEM;
	printf("\n INSERTION");
	printf("\n Enter the element you want to insert: ");
	scanf("%d",&ITEM);
	if((FRONT==0 && REAR==N-1) || (FRONT==REAR+1))
	{
		printf("\n OVERFLOW");
		return;
	}
	if (FRONT==-1)
	{
		FRONT=REAR=0;
	}
	else
	{
		if(REAR==N-1)
	    {
		    REAR=0;
	    }
        else
	    {
		    REAR=REAR+1;
	    }
	}	
	QUEUE[REAR]=ITEM;
};

void DELETION()
{
	int ITEM;
	if(FRONT==-1)
	{
		printf("\n UNDERFLOW");
	}
	ITEM=QUEUE[FRONT];
	if(FRONT==REAR)
	{
		FRONT=REAR=-1;
	}
	else
	{
		if(FRONT==N-1)
	    {
		    FRONT=0;
	    }
	    else
	    {
		    FRONT=FRONT+1;
	    }
	}
};

void DISPLAY()
{
	int i;
	printf("\n THE ELEMENTS OF QUEUE: ");
	if(FRONT==-1)
    {
        printf("\n EMPTY QUEUE");
    }
	if(REAR>=FRONT) 
    { 
        for(i=FRONT;i<=REAR;i++) 
        {
			printf("%d ",QUEUE[i]);
		}			
    }
	else
    { 
        for(i=FRONT;i<N;i++) 
        {
			printf("%d ",QUEUE[i]); 
        }
        for(i=0;i<=REAR;i++) 
        {
			printf("%d ",QUEUE[i]);
		}			
    }
};


