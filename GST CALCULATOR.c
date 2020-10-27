#include<stdio.h>
#include<conio.h>
#include<string.h>
float sum=0.0;
void Eating()
{	int y,rate;
	float x,price;
		printf("\a\n\nEnter the sub category:-");
		printf("\n     1.Packed Food Items, Frozen Vegetables \n     2.Dairy Products, Dry fruits, \n     3.Ice Cream, Soups\n \tYOUR CHOICE:     ");
		scanf("%d", &y);
		if(y==1)
		{
			printf("\nEnter the cost:");
			scanf("%f", &x);
			price=((5*x)/100)+x;
			x=(0.05*x)/2;
			printf("\n\tCGST = SGST = %.2f", x);
			printf("\nCost of item after GST:\t%.2f", price);
			sum=sum+price;
			
		}
		else
		if(y==2)
		{	printf("\nEnter the cost:");
			scanf("%f", &x);
			price=((12*x)/100)+x;
			x=(0.12*x)/2;
			printf("\n\tCGST = SGST = %.2f", x);
			printf("\nCost of item after GST:\t%.2f", price);
			sum=sum+price;
			
		}
		else
		if(y==3)
		{	
			printf("\nEnter the cost:");
			scanf("%f", &x);
			price=((18*x)/100)+x;
			x=(0.18*x)/2;
			printf("\n\tCGST = SGST = %.2f", x);
			printf("\nCost of item after GST:\t%.2f", price);
			sum=sum+price;
			
		}
		else
		{
			printf("\n\t\t\tYou entered a wrong number!!!!!!!");
		}
}
void clothing()
{	int y,rate;
	float x,price;
		printf("\a\n\nEnter the sub category:-");
		printf("\n     1.Caps, Cotton cloths \n     2.Footwear, Raincoat\n\tYOUR CHOICE:     ");
		scanf("%d", &y);
		if(y==1)
		{	
			printf("\nEnter the cost:");
			scanf("%f", &x);
			price=((5*x)/100)+x;
			x=(0.05*x)/2;
			printf("\n\tCGST = SGST = %.2f", x);
			printf("\nCost of item after GST:\t%.2f", price);
			sum=sum+price;
			
		}
		else
		if(y==2)
		{	
			printf("\nEnter the cost:");
			scanf("%f", &x);
			price=((12*x)/100)+x;
			x=(0.12*x)/2;
			printf("\n\tCGST = SGST = %.2f", x);
			printf("\nCost of item after GST:\t%.2f", price);
			sum=sum+price;
			
		}	
		else
		{
			printf("\n\t\t\tYou entered a wrong number!!!!!!!");
		}	
	}


main()
{	int price,z,x,y,rate;
	char sc[20],ans;
	printf("\a\n\t\t\t GST Calculator:-\n\n");
	for(z=1;z<20;z++)
	{	printf("\n\nEnter the category of product:\n   0.Exit \n   1.Eating \n   2.Cloths, Footwares, Accesories \n  	 \tYOUR CHOICE:    ");	
		scanf("%d", &x);
		if(x==1)
		{	Eating();
		}
		else
		if(x==2)
		{	clothing();
		}
		else if(x==0)
		{
			printf("\n\n\tThank You For Using.");
			exit(1);
		}
		else
		{
			printf("Enter the correct no.!!!!!!!!");
			getch();
		}
		printf("\n\nWant to proceed(y/n):   ");
		ans=getche();
		if(ans=='y'||ans=='Y')
		{ continue;
	    }
	    else
	    {    
	    
	        printf("\n\n\tTotal 	Cost is : %.2f ",sum);
			printf("\n\n\tThank You For Using.");
			
			getch();
			break;
		}
	}
}
