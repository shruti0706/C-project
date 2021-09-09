// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct loginCredential
{
  int userid;
  char password[50];
} login[100];

struct Inventory
{
  int sno;
  int code;
  char name[50];
  int rate;
  int quantity;
  char gender;
} product[100];

void welcomepage();
void mainMenu(int i);
void loginpage();
void addProduct();
void editProduct();
void displayAllProducts();
void searchEntry();
void deleteProduct();
int calculateBill();
static int sum = 0;
static int a = 0;
static int n = 0;
int main()
{
//   clrscr();

  welcomepage();
  loginpage();
//   getch();
  return 0;
}
void welcomepage()
{

    
        printf("************************************                                           ");
        
        printf("\n\n\n\n\n\n                :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n                ::                                                                 ::");
       
           printf("\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                          FASHION HUB                            ::  \n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                  A style for every story...     ::\n                ");
            printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
        printf("\n\n\n\n\n\n\n");
       printf("************************************                                           ");
         


    
}

void loginpage()
{
  int choice, i;
  char AdminID[15];
  char password[12];
  printf("Enter 1 for AdminID:\n");
  printf("Enter 2 for UserID:\n");
  printf("Enter choice ");
  scanf("%d", &choice);

  if (choice == 1) // login for admin
  {

    printf("Enter AdminID:\n");
    scanf("%s", AdminID);

    printf("Enter password:\n");
    scanf("%s", password);

    if (strcmp(AdminID, "arun") == 0)
    {
      if (strcmp(password, "123") == 0)
      {

        printf("\nWelcome. LOGIN SUCCESS!");
        mainMenu(choice);
      }

      else
      {
        printf("\nWrong Password please try again");
        loginpage();
      }
    }
    else
    {
      printf("\nAdminID doesn't exist");
      //LoginPage();
    }
  }

  if (choice == 2) //login for user
  {
    int ch, i;
    printf("Enter 1 for New User:\n");
    printf("Enter 2 for Existing User:\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    if (ch == 1)
    {

      printf("enter new user id ");
      scanf("%d", &login[n].userid);
      if (login[n].userid == 0)
      {
        printf("user ID cannot be zero . Retry");
        loginpage();
      }
      for (i = 0; i < n; i++)
      {
        if (login[i].userid == login[n].userid)
        {
          printf("duplicate user ID . Retry");
          loginpage();
        }
      }
      printf("enter password");
      scanf("%s", &login[n].password);
      n++;
    }
    else if(ch==2){
      
    }
  }
}

void mainMenu(int i)
{

  int choice;
  while (1)
  {
    if (i == 1)
    {
      printf("\n\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
      printf("\n\t\t\t\t+   WELCOME CLOTHING STORE MANAGEMENT SYSTEM   +      ");
      printf("\n\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
      printf("                                                                                          ");
      printf("                                                                                          ");
      printf("\n\t\t\t\t FEATURE OF CLOTHING STORE\n\t\t\t\t __");
      printf("\n\t\t\t\t\t\t MAIN MENU\n\t\t\t\t\t\t............");
      printf("\n\t\t\t\t| [1] ADD PRODUCT                              |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [2] EDIT PRODUCT                           |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [3] SEARCH PRODUCT                           |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [4] DISPLAY PRODUCT                          |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [5] DELETE PRODUCT                             |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [6] EXIT                                     |\n\t\t\t\t____\n\t\t\t\t\t\t\t\t");
      printf("\n\t\t\t\t|ENTER CHOICE\n\n");

      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
        addProduct();
        break;
      case 2:
        editProduct();
        break;
      case 3:
        searchEntry();
        break;
      case 4:
        displayAllProducts();
        break;
      case 5:
        deleteProduct();
        break;
      case 6:
        exit(0);
      }
    }
  }
  if (i == 2)
  {
    printf("\n\t\t\t\t\t\t MAIN MENU FOR USER\n\t\t\t\t\t\t............");
    printf("\n\t\t\t\t| [1] DISPLAY_PRODUCT                              |");
    printf("\n\t\t\t\t| _________________|");
    printf("\n\t\t\t\t| [2] SEARCH ANY_PRODUCT                           |");
    printf("\n\t\t\t\t| _________________|");
    printf("\n\t\t\t\t| [3] MAKE_PURCHASE                                |");
    printf("\n\t\t\t\t| _________________|");
    printf("\n\t\t\t\t| [4] EXIT                                     |\n\t\t\t\t__________________\n\t\t\t\t\t\t\t\t");
    printf("\n\t\t\t\t|ENTER CHOICE\n\n");

    scanf("%d", &choice);
    if (choice == 1)
    {
      displayAllProducts();
    }
    else if (choice == 2)
      searchEntry();
    else if (choice == 3)
    {
      calculateBill();
      printf("total amount =%d", sum);
    }
    else if (choice == 4)
      exit(0);
    else
    {
      printf("enter valid choice");
    }
  }
}
void addProduct()
{
  char ch;
  int j;
  while (1)
  {
    printf("Add new record ? Y/N ");
    scanf("%c", &ch);
    if (ch == 'N' || 'n')
    {
      mainMenu(1);
    }
    else if (ch == 'Y' || 'y')
    {
      printf("Enter new product code");
      scanf("%d", &product[a].code);
      printf("\nProduct code should not be repeated and cannot be zero.\n");
      for (j = 0; j < a; j++)
      {
        if (product[a].code == product[j].code)
        {
          printf("duplicate product code..re enter");
          addProduct();
        }
        if (product[a].code == 0)
        {
          printf("Product code cannot be zero..re enter");
          addProduct();
        }
      }
      product[a].sno = a + 1;
      printf("Enter new product name");
      scanf("%s", product[a].name);
      printf("Enter new product rate");
      scanf("%d", &product[a].rate);
      printf("Enter new product quantity");
      scanf("%d", &product[a].quantity);
      printf("Enter the gender ");
      scanf("%c", &product[a].gender);

      ++a;
    }
    else
    {
      printf("Invalid choice.Retry");
    }
  }
}
void editProduct()
{
  int id, i, f;
  if (product[0].code == 0)
  {
    printf("No record found");
    return;
  }

  printf("\nEnter product code whose details you want to modify:");
  scanf("%d", &id);
  for (i = 0; i < a; i++)
  {
    f = 1;

    if (product[i].code == id)
    {
      printf("\nEnter first name,last name,email and mobile number respectively for employee having id  %d", id);
      scanf("%s%d%d%c", &product[i].name, &product[i].rate, &product[i].quantity, &product[i].gender);
      break;
    }
    else
    {
      f = 0;
    }
  }
  if (f == 0)
    printf("\nid not found");
}
void displayAllProducts()
{

  int i, a = 10;

  if (product[0].sno == 0)
  {
    printf("NO RECORD FOUND ");
    return;
  }
  printf("%9s %9s %9s %9s %9s", "sno", " code ", " name ", " rate  ", " quantity ");

  for (i = 0; i < a; i++)
  {
    printf("%9d %9d %9s %9d %9d ", product[i].sno, product[i].code, product[i].name, product[i].rate, product[i].quantity);
  }
}
void searchEntry()
{

  int s, a, i;

  if (product[0].sno == 0)
  {
    printf(" *     NO RECORD AVAILABLE     *  ");
    return;
  }
  printf("\nEnter Product code  whose record you want to search : ");
  scanf("%d", &s);
  printf("%9s %9s %9s %9s %9s", "sno", " code ", " name ", " rate  ", " quantity ");
  for (i = 0; i < a; i++)
  {
    int f = 1;
    if (product[i].code == s)
    {
      printf("%9d %9d %9s %9d %9d ", product[i].sno, product[i].code, product[i].name, product[i].rate, product[i].quantity);
    }
  }
}
void deleteProduct()
{
  int id, i, f, j;
  if (product[0].code == 0)
  {
    printf("No record found");
    return;
  }
  printf("\nEnter employee id whose record you want to delete:");
  scanf("%d", &id);

  for (i = 0; i < a; i++)
  {
    f = 1;

    if (product[i].code == id)
    {
      for (j = i; j < a - 1; j++)
      {
        product[j].sno = product[j + 1].sno;
        product[j].code = product[j + 1].code;
        *product[j].name = *product[j + 1].name;
        product[j].rate = product[j + 1].rate;
        product[j].quantity = product[j + 1].quantity;
        product[j].gender = product[j + 1].gender;
      }
      product[j].code = 0;

      printf("record deleted successfully");
      return;
    }

    else
    {
      f = 0;
    }
  }
  if (f == 0)
    printf("\nid not found");
}
int calculateBill()
{
  static int t = 1;
  int id, i, f, qty, total;
  if (product[0].code == 0)
  {
    printf("No record found ");
    return;
  }
  printf("enter 0 to stop taking inputs");
  printf("\nEnter Product code - ");
  scanf("%d", &id);
  while (id != 0)
  {
    for (i = 0; i < a; i++)
    {
      f = 1;
      if (product[i].code == id)
      {
        printf("Enter quantity ");
        scanf("%d", &qty);
        if (qty < product[i].quantity)
        {

          product[i].quantity = product[i].quantity - qty;
          calculateBill();
        }
        else
        {
          printf("insufficient quantity.try again");
          break;
        }

        break;
      }
      else
      {
        f = 0;
      }
    }
    if (f == 0)
      printf("\nid not found");
    if (t == 1)
    {
      printf("%9s %9s %9s %9s %9s %9s", "sno", " code ", " name ", " rate  ", " quantity ", " total ");
      ++t;
    }
    total = product[i].rate * product[i].quantity;
    printf("%9d %9d %9s %9d %9d %9d ", product[i].sno, product[i].code, product[i].name, product[i].rate, product[i].quantity);
    sum = sum + total;
  }
}
