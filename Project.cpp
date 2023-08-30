# include<stdio.h>
# include<windows.h>
# include<graphics.h>

struct reservationName
{
	char name[100];
	long long int phone;
	int roomNumber;
	char address[100];
}reservationArray[100], reservationVariable;

int main()
{
	char a=219, roomChoice;
	FILE *ptr1;
	int i=0, value=0, choice=0;
	
	// Loading Code
	
	printf("\n\n\n\n\n\n\n\n\n");                  
	printf("\t\t\t\t\t\t\t");
	printf("Please Wait........\n");
	printf("\t\t\t\t\t\t");
	for(i=0; i<=30; i++)
	{
		printf("%c",a);
		delay(50);
	}
	printf("\n\n\n\n\n\n\t\t");
	system("pause");
	system("cls");
	
	// Hotel Information
	flag:
	printf("\n");
	printf("\n\t\t                                 ---------------------------------------------------");
	printf("\n\t\t                                         HOTEL RESERVATION SYSTEM ");
	printf("\n\t\t                                 --------------------------------------------------");
	printf("\n\n\n\n\n\n\n");
	printf("\n\t\t                                           ------------------------------");
	printf("\n\t\t                                            |         1. Data            |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         2. Reservation     |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         3. Cancellation    |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         4. Information     |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\n\n\n\n\n                         ");
	printf("\t\t");
	printf("Enter Your Choice: ");
	scanf("%d", &choice);
	system("cls");
	if(choice<1 || choice>4)
	{
		printf("\n You Entered Wrong Choice...... Please Enter your Choice again!");
		delay(100);
		system("cls");
		goto flag;
	}
	switch(choice)
	{
		case 1:
			printf("\n\t\t\t\t\t\t\t First Paragraph (Introduction) ");
			printf("\n\n\n\t\t\t\t\t\t\t Second Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Third Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Fourth Paragraph (Location and other details) ");
			printf("\n\n\n\n\n\t\t\t\t ");
			system("pause");
			goto flag;
		break;
		
		case 2:
			
			ptr1 =fopen("FileFirstName.DAT","a+");
			if(ptr1==NULL)
			{
				printf("\n File Not found");
				exit(0);
			}
			flag1:
				
				
			// Scope for Filling Customers Detail	
			
			do
			{
			fflush(stdin);
			printf("\n Enter Your Name: ");
			gets(reservationVariable.name);
			printf("\n Enter Your Phone Number: ");
			scanf("%lld", &reservationVariable.phone);
			fflush(stdin);
			printf("\n Enter Your Address: ");
			gets(reservationVariable.address);
			printf("\n Enter how many room do you want to Reserve: ");
			scanf("%d", &reservationVariable.roomNumber);
			
			// Writing Data to the File
			
			fwrite(&reservationVariable,sizeof(reservationVariable),1,ptr1);
			printf("\n Data added Successfully");
			
			// Asking for more Reservarion
			fflush(stdin);
			printf("\n Do you want to Reserve more Room...... If Yes press Y");
			scanf("%c", &roomChoice);
			
			} while(roomChoice=='Y'|| roomChoice=='y');
			goto flag;
		break;
					
	}
	return 0;
}

