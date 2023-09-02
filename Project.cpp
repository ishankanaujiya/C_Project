# include<stdio.h>
# include<windows.h>
# include<conio.h>
# include<graphics.h>

struct reservationName
{
	char name[100];
	long long int phone;
	int roomNumber;
	char address[100];
}reservationArray[100], reservationVariable;
struct regestrationForm
{
	char name[100];
	char address[100];
	long long int phone;
	char email[100];
	char formUsername[100];
	char password[100];
}form, login[100];
int main()
{

	char a=219, roomChoice, accountChoice;;
	FILE *ptr1;
	int i=0, value=0, j=0, choice=0, count=0, count1=0;
	FILE *fileLogin;
	char ch, ch1, username[100], pass[100];
	
	// LOGIN AND REGISTRATION PAGE
	
	printf("\n Do you have an Account........ If 'Yes' press 'Y' and if 'No' press 'N' ");
	scanf("%c", &ch);
	system("cls");
	if(ch=='Y'|| ch=='y')
	{
		flag:
		fileLogin=fopen("LoginPage.DAT","rb");
			if(fileLogin==NULL)
			{
				printf("\n File Not Found");
				exit(0);
			}
		rewind(0);
		fread(&login,sizeof(login),1,fileLogin);
		printf("\n                       :------------------------------------------------------:");
		printf("\n                       :    :---------------------------------------------:   :");
		printf("\n                       :    :                   LOGIN                     :   :");
		printf("\n                       :    :---------------------------------------------:   :");
		printf("\n                       :------------------------------------------------------:");
		printf("\n\n\n\n");
		printf("\n                  -------------------------------------------");
		fflush(stdin);
		printf("\n                    Username: ");
		gets(username);
		fflush(stdin);
		printf("\n                  -------------------------------------------");
		printf("\n                    Password: ");
		while(1)
		{
			ch1= _getch();
			pass[i]=ch1;
			if(ch1==13)
			{
				pass[i]='\0';
				break;
			}
			printf("*");
			i++;
		}
		printf("\n                  -------------------------------------------");
		//gets(pass);
		system("cls");
		printf("\n\n\n\n\t\t\t\t\t");
		printf("\n\n\n\n\n\n\n\n\n");                  
		printf("\t\t\t\t\t\t\t");
		printf("Processing Data....\n");
		printf("\t\t\t\t\t\t");
		system("color 0B");
		for(i=0; i<=30; i++)
		{
			printf("%c",a);
			delay(50);
		}
		system("color 07");
		system("cls");
		for(i=0; i<100; i++)
		{
			if(strcmp(username,login[i].formUsername)==0)
			{
				if(strcmp(pass,login[i].password)==0)
				{
					printf("\n Successfully Logged in into System\n\n");
					system("pause");
					goto flagSwitchCase;
					count1++;
					
				}
			}
		}
		if(count1==0)
		{
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n  Wrong Username or Password");
			printf("\n ------------------------------------------------------------------------------------");
		/*	printf("\n\n\n\n");
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n Seems Like You Don't  Have an Accout....... Do You Want To Create an Account?");
			printf("\n If 'Yes' press 'Y' and if 'No' press 'N'");
			printf("\n ------------------------------------------------------------------------------------\n");
			scanf("%c", &accountChoice);
				system("cls");
			if(accountChoice=='Y'|| accountChoice=='y')
			{
			
				goto flagRegistration;
			}*/
			
		}
		
	//	printf("\n                  -------------------------------------------");
	}
	
	
	else
	{
		count++;
		flagRegistration:
	//	system("cls");
		fileLogin=fopen("LoginPage.DAT","ab+");
			if(fileLogin==NULL)
			{
				printf("\n File Not Found");
				exit(0);
			
		//	flagRegistration:
			printf("\n                           ---------------------------------------------");
			printf("\n                                           REGESTRATION ");
			printf("\n                           ---------------------------------------------");
			printf("\n\n\n");
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                   Name: ");
			gets(form.name);
			
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                  Address: ");
			gets(form.address);
		
			printf("\n                ---------------------------------------------");
			printf("\n                   Phone Number: ");
			scanf("%lld", &form.phone);
		
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                    Email: ");
			gets(form.email);
			system("cls");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :    :     Set New Username and Password         :    :");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n\n\n\n\n                :--------------------------------------------:");
			printf("\n                        :      Username: ");
			gets(form.formUsername);
			printf("\n                 :--------------------------------------------:");
			fflush(stdin);
			printf("\n                        :Password: ");
			gets(form.password);
			printf("\n                 :---------------------------------------------");
			fwrite(&form,sizeof(form),1,fileLogin);
			printf("\n Account Regestered Successfully.....\n\n");
			system("pause");
			//clrscr;
			system("cls");
			fclose(fileLogin);
			goto flag;

		
	}
	system("pause");
	system("cls");
	fclose(fileLogin);
	
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
	flagSwitchCase:
	printf("\n");
	printf("\n\t\t                                  :--------------------------------------------------:");
	printf("\n\t\t                                  :             HOTEL RESERVATION SYSTEM             :");
	printf("\n\t\t                                  :--------------------------------------------------:");
	printf("\n\n\n\n\n\n\n");
	printf("\n\t\t                                           ---------------------------------------");
	printf("\n\t\t                                            | S.N |          CHOICES             |");
	printf("\n\t\t                                           ---------------------------------------");
	printf("\n\t\t                                           ---------------------------------------");
	printf("\n\t\t                                            |  1. |       Room Information       |");
	printf("\n\t\t                                            --------------------------------------");
	printf("\n\t\t                                            |  2. |       Availability           |");
	printf("\n\t\t                                            --------------------------------------");
	printf("\n\t\t                                            |  2. |       Reservation            |");
	printf("\n\t\t                                            --------------------------------------");
	printf("\n\t\t                                            |  3. |       Cancellation           |");
	printf("\n\t\t                                            --------------------------------------");
	printf("\n\t\t                                            |  4. |       Exit                   |");
	printf("\n\t\t                                            --------------------------------------");
	printf("\n\n\n\n\n                         ");
	printf("\t\t");
	printf("Enter Your Choice (1-4): ");
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
			goto flagSwitchCase;
		break;
					
	}
	}
	return 0;
}

