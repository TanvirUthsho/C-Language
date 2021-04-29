#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define ENTER 13 // this is global variable
#define BKSP 8	 // this is global variable
#define SPACE 32 // this is global variable
#define TAB 9	 // this is global variable

/*structure declaration*/

struct Medicine
{
	char productname[40], productcomp[40], c;
	int productid;
	int price;
	int Qnt;
} st;
/*declaration of display functions*/
void wel_come(void);
void title(void);
void login();
void menu(void);
void title(void);
void deleteproduct(void);
void gotoxy(short x, short y) /* gotoxy is a function that locates the text cursor to x,y positions on
                                the screen. Any outputs to the screen will start at the cursor x,y positions,
                                and the cursor is updated accordingly.*/
{
	COORD pos = {x, y}; //center of axis is set to the top left cornor of the screen
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*declaration of main menu functions*/
void add_Medicine();
void read_Medicine();
void search_Medicine();
void Update_Medicine();
void total_bill();
main()

{
	wel_come(); //call for welcome screen function
	login();	//call for login function
}

void wel_come(void)

{
	time_t t;
	time(&t);
	printf("                                                                                                                       \n");
	printf("\/\//\/\/\//\/\/\/\/\/\/\/\/\///\/\//\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\/\\/\/\//\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\   \n");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xbd\t     WELCOME TO \t \xbd\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xbd\t Tanvir.Uthsho Medical STORE (*J*) \t \xbd\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t          Contact Info : tanvir.uthsho@northsouth.edu   \t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t      \" HERE You Find All Kinds of Domestic and Foreign Medicines \"\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
	printf("\t\t\t\t\t%s", ctime(&t));
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
	printf("\n\t\t\tPress any key to continue.........\t\t\t\t\t\t\t\t\t\t\n");
	/*It has been given to make it look more beautiful in the eyes */
	getch();
	system("cls");
}
/*This Function I declared for System Login for Maintain System Security */
void login()
{

	int a = 0, i = 0;
	char uname[10], c = ' ';
	char pword[10], code[10];
	char user[10] = "tanvir"; // User Name is :  tanvir
	char pass[10] = "pass";	  //  Password is :   pass
	do
	{

		printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
		printf("\n                         This is for SAFETY; Please enter Username and Password for LOGING this system\n");
		printf(" \n                         -> USERNAME:-"); // User Name is :  tanvir
		scanf("%s", &uname);
		printf(" \n                         -> PASSWORD:-"); //  Password is :   pass
		while (i < 10)
		{
			pword[i] = getch(); /*If the Login Information Is not Correct Then it show only 4 Times */
			c = pword[i];
			if (c == 13)
				break;
			else
				printf("*");
			i++;
		}
		pword[i] = '\0';
		//char code=pword;
		i = 0;
		//scanf("%s",&pword);
		if (strcmp(uname, "tanvir") == 0 && strcmp(pword, "pass") == 0)
		{
			printf("  \n\n\n       WELCOME TO Medical STORE MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
			printf("\n\n SYSTEM IS LOADING. PLEASE WAIT... \n");
			for (i = 0; i < 3; i++)
			{
				printf(".");
				Sleep(500);
			}
			printf("\n\n\n\t\t\t\tPress any key to continue...");
			getch(); //holds the screen
			break;
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;

			getch(); //holds the screen
		}
	} while (a <= 2);
	if (a > 2)
	{
		printf("\nSorry you have entered the wrong Username and Password for FOUR times!!!");

		getch();
	}
	system("cls");
	menu();
}
/*declaration of display Menu functions*/
void menu(void)
{
	int choice;
	system("cls");
main:
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Medical Store Management System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter |>1<| To Add New Medicine");
	printf("\n\t\tEnter |>2<| To Delete Medinice");
	printf("\n\t\tEnter |>3<| To Search Medicine From The List");
	printf("\n\t\tEnter |>4<| To View Stored Medicine List");
	printf("\n\t\tEnter |>5<| To Update the list of stored Medicines ");
	printf("\n\t\tEnter |>6<| To Calculate Customer Purchase Bill");
	printf("\n\t\tEnter |>7<| To Exit!");

	printf("\n\n\t\tPlease Enter your choice ||1~6||");
	scanf("%i", &choice);

	system("cls");
	/* Here I Aplied Swich- Case for Makig easy*/

	switch (choice)
	{
	case 1:
		add_Medicine(); /* Here I Aplied Swich-
		                                         Case for Select The Disire Menu*/

		break;
	case 2:
		deleteproduct();
		break;
	case 3:
		search_Medicine();
		break;
	case 4:
		read_Medicine();
		break;
	case 5:
		Update_Medicine();
		break;
	case 6:
		total_bill();
		break;
	case 7:
		printf("System Exit");
		exit(0);
		break;

	default:
		printf("Invalid Choice! System Exit\n");
		getch();
	}
}
/*declaration of Add Products functions*/
void add_Medicine()
{
	int index, valid;
	char c;
	int a = 0;

	FILE *fp;

	do
	{
		system("cls");
		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Enter Medicine Details \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		int ID; //for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("Medicine_Record.txt", "a+"); //opening file and creating a staff.txt file to append or write

		if ((fp = fopen("Medicine_Record.txt", "a+")) != NULL) //if condition to check file is NULL or not
		{
		I:
			printf("\nMedicine Code\t :");
			scanf("%i", &ID);
			while (fscanf(fp, "%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid, &st.Qnt) != EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if (ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else //runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i", &st.productid);
		}

		//add product name
		do
		{

			printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nMedicine Name\t :");
			gets(st.productname); // get input string
			st.productname[0] = toupper(st.productname[0]);
			//iterate for every character in string
			for (index = 0; index < strlen(st.productname); ++index)
			{ //check if character is valid or not
				if (isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			}
		} while (!valid); //while end here

		//Product Company
		do
		{
			char productcomp[40];
			fflush(stdin);
			printf("\nMedicine Brand\t :");
			gets(st.productcomp); // get input string
			st.productcomp[0] = toupper(st.productcomp[0]);
			//iterate for every character in string
			for (index = 0; index < strlen(st.productcomp); ++index)
			{ //check if character is valid or not
				if (isalpha(st.productcomp[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			}
		} while (!valid);

		//productid
		do
		{
			printf("\nPrice [10-5000]TAKA:");
			scanf("%i", &st.price);
			if (st.price < 10 || st.price > 5000)
			{
				printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
			}
		} while (st.price < 10 || st.price > 5000);

		do
		{
			printf("\nQuantity [1-500]\t:");
			scanf("%i", &st.Qnt);
			if (st.Qnt < 1 || st.Qnt > 500)
			{
				printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
			}
		} while (st.Qnt < 1 || st.Qnt > 500);

		printf("\nProduct Price\t :");
		scanf("%i", &st.price);
		printf("\nProduct ID\t :");
		scanf("%i", &st.productid);
		printf("\nProduct Quantity :");
		scanf("%i", &st.Qnt);

		fp = fopen("Medicine_Record.txt", "a");
		fprintf(fp, "\n%s %s %i %i %i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
		fclose(fp); //Here close the Medicine_Record.txt named file
		printf("\nPress 'Enter' to add more Medicine and any other key to go to main menu");

	} while ((c = getch()) == '\r');
	menu();
}
/*declaration of Search Medicine functions*/

void search_Medicine()
{
	char target[40];
	int found = 0;
	FILE *sfile;
	sfile = fopen("Medicine_Record.txt", "r"); //Here Creat a Medicine_Record.txt named file
	printf("\nEnter name to search:");
	fflush(stdin);
	gets(target);
	target[0] = toupper(target[0]);
	while (!feof(sfile) && found == 0)
	{
		fscanf(sfile, "%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid, &st.Qnt);
		if (strcmp(target, st.productname) == 0)
		{
			found = 1;
		}
	}

	if (found) //if The Medicine Is Found Then Show it
	{
		printf("\n Record found");
		printf("\nMedicine Name\t\t:%s  \nMedicine Brands\t\t:%s \nMedicine Price\t\t:%i \nMedicine ID\t\t:%i \nMedicine Quantity\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
	}
	else
		printf("Noo Record found"); //if The Medicine is NOT Found Then Show it
	fclose(sfile);
	printf("\nPress any key to go to Main Menu!");
	while ((st.c = getch()) == '\r')
		;
	menu();
}
// Declared the function to need to be Delete any Medicine
void deleteproduct(void)
{
	char target[40];
	int found = 0;
	FILE *sfile, *tfile;
	sfile = fopen("Medicine_Record.txt", "r");
	tfile = fopen("TempFile.txt", "w+");
	printf("\n Enter name to Delete: ");
	fflush(stdin);
	scanf("%s", target);
	target[0] = toupper(target[0]);
	while (fscanf(sfile, "%s %s %i %i %i\n", st.productname, st.productcomp, &st.price, &st.productid, &st.Qnt) != EOF)
	{
		if (strcmp(target, st.productname) == 0)
		{
			found = 1;
		}
		else
		{
			fprintf(tfile, "%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
		}
	}
	if (!found)
	{
		printf("\n Record not Found");
		getch();
		menu();
	}
	else
	{
		printf("\n Record deleted");
	}
	fclose(sfile);
	fclose(tfile);
	remove("Medicine_Record.txt");
	rename("TempFile.txt", "Medicine_Record.txt");

	printf("\nPress any key to go to Main Menu!");
	while ((st.c = getch()) == '\r')
		;
	menu();
}

void total_bill() // Function of Customer Purchase Bill
{
	float total_amount, amount, sub_total, discount_amount, tax_amount, quantity, value, discount, tax;

	printf("\n Enter the quantity of Medicine sold: ");
	scanf("%f", &quantity);
	printf("\n Enter the value of Medicine: ");
	scanf("%f", &value);
	printf("\n Enter the discount percentage: ");
	scanf("%f", &discount);
	printf(" \n Enter the tax: ");
	scanf("%f", &tax);
	amount = quantity * value;
	discount_amount = (amount * discount) / 100.0;
	sub_total = amount - discount_amount;
	tax_amount = (sub_total * tax) / 100.0;
	total_amount = sub_total + tax_amount;
	printf(" \n\n\n \xdb\xdb\xdb\xdb\xdb BILL \xdb\xdb\xdb\xdb\xdb ");
	printf("\nQuantitySold: %f", quantity);
	printf("\nPriceperMedicine: %f", value);
	printf(" \n -------------");
	printf("\nAmount: %f", amount);
	printf(" \n Discount: - %f", discount_amount);
	printf("\n Discounted Total: %f", sub_total);
	printf("\n Tax:+ %f", tax_amount);
	printf("\n-------------");
	printf("\n Total Amount %f", total_amount);
	getch();
	menu();
}
// Search the Stored Medicines
void read_Medicine()
{
	FILE *f;
	int i, q;
	if ((f = fopen("Medicine_Record.txt", "r")) == NULL)
	{

		gotoxy(10, 3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();
	}
	else
	{

		gotoxy(0, 5); // gotoxy function Use for Output Position On the Screen
		for (i = 0; i < 100; i++)
		{
			printf("\xdb");
		}
		gotoxy(5, 6);
		printf("Medicine Name");
		gotoxy(25, 6);
		printf("Medicine Price");
		gotoxy(40, 6);
		printf("Medicine Brand");
		gotoxy(60, 6);
		printf("Medicine CODE");
		gotoxy(80, 6);
		printf("Medicine Quantity\n");

		for (i = 0; i < 100; i++)
		{
			printf("\xdb");
		}
		q = 8;
		while (fscanf(f, "%s %s %i %i %i\n", st.productname, st.productcomp, &st.price, &st.productid, &st.Qnt) != EOF)
		{
			gotoxy(5, q);
			printf("%s", st.productname);
			gotoxy(25, q);
			printf("%i", st.price);
			gotoxy(40, q);
			printf("%s", st.productcomp);
			gotoxy(60, q);
			printf("%i", st.productid);
			gotoxy(80, q);
			printf("%i", st.Qnt);

			q++;
		}
		printf("\n");
		for (i = 0; i < 100; i++)
			printf("\xdb");
	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");
	while ((st.c = getch()) == '\r')
		;
	getch();
	menu();
}
//-----Declared Function for update the Medicine from The List------

void Update_Medicine()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a = 0;
	int id;
	char Update;
	long int size = sizeof(st);
	if ((fp = fopen("Medicine_Record.txt", "r+")) == NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.txt", "a");
		system("cls");
		printf("Enter Medicine' Code for Update:");
		scanf("%i", &id);
		fflush(stdin);
		while (fscanf(fp, "%s %s %i %i %i\n", st.productname, st.productcomp, &st.price, &st.productid, &st.Qnt) != EOF)
		{
			if (id == st.productid)
			{

				a = 1;
				printf("\n\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
				printf("\nMedicine Name\t\t: %s", st.productname);
				printf("\nMedicine's Brand\t\t: %s", st.productcomp);
				printf("\nPrice\t\t\t: %i", st.price);
				printf("\nMedicine Code\t\t: %i", st.productid);
				printf("\nMedicine Quantity\t:%i", st.Qnt);

				printf("\n\n\t*** Medicine_Record Record ***");
				do
				{

					fflush(stdin);
					printf("\nMedicine_Record Medicine Name\t\t: ");
					gets(st.productname); // get input string
					st.productname[0] = toupper(st.productname[0]);
					//iterate for every character in string
					for (index = 0; index < strlen(st.productname); ++index)
					{ //check if character is valid or not
						if (isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();
					}
				} while (!valid); //while end here

				//Product Company
				do
				{
					char productcomp[40];
					fflush(stdin);
					printf("\nMedicine_Record Medicine Brand\t\t:");
					gets(st.productcomp); // get input string
					st.productcomp[0] = toupper(st.productcomp[0]);
					//iterate for every character in string
					for (index = 0; index < strlen(st.productcomp); ++index)
					{ //check if character is valid or not
						if (isalpha(st.productcomp[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();
					}
				} while (!valid);

				do
				{
					printf("\nMedicine_Record Price {10-5000}TAKA ৳ :");
					scanf("%i", &st.price);
					if (st.price < 10 || st.price > 5000)
					{
						printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
					}
				} while (st.price < 10 || st.price > 5000);

				printf("\nEnter Medicine_Record Medicine Code\t\t:");
				scanf("%i", &st.productid);

				do
				{
					printf("\nMedicine_Record Quantity [1-500]\t:");
					scanf("%i", &st.Qnt);
					if (st.Qnt < 1 || st.Qnt > 500)
					{
						printf("\n\tEnter Medicine_Record Quantity[1-500] only.Re-Enter.");
					}
				} while (st.Qnt < 1 || st.Qnt > 500);

				printf("Press 'y' to Update the existing record or any key to cancel...");
				Update = getche();
				if (Update == 'y' || Update == 'Y')
				{
					fprintf(rp, "%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY UpdateED!!!");
				}
			}
			else
			{
				fprintf(rp, "%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
				fflush(stdin);
			}
		}
		if (!a)
		{
			printf("\n\nTHIS Medicine DOESN'T EXIST!!!!"); // If the Medicine Is not in the List Then it show
		}
		fclose(rp);
		fclose(fp);
		remove("Medicine_Record.txt");
		rename("TempFile.txt", "Medicine_Record.txt"); // This TempFile.txt File is need for Update Medicine List from Medicine_Record.txt File
		getch();
	}
	menu();
}
