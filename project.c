#include <stdio.h> //
#include <stdlib.h>arunnnnnn
#include <string.h>shruti
#include <math.h>//
struct loginCredential
{
  char userid[50];

  char password[50];
} login[100];

struct Inventory
{
  int Sno;
  int code;
  char name[50];
  int rate;
  int qty;
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
void calculateBill();
int main()
{

  //Welcomepage();
  MainMenu();
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
      printf("\n\t\t\t\t FEATURE OF CLOTHING STORE\n\t\t\t\t ________________");
      printf("\n\t\t\t\t\t\t MAIN MENU\n\t\t\t\t\t\t............");
      printf("\n\t\t\t\t| [1] ADD_PRODUCT                              |");
      printf("\n\t\t\t\t| _______________|");
      printf("\n\t\t\t\t| [2] DELETE_PRODUCT                           |");
      printf("\n\t\t\t\t| _______________|");
      printf("\n\t\t\t\t| [3] SEARCH_PRODUCT                           |");
      printf("\n\t\t\t\t| _______________|");
      printf("\n\t\t\t\t| [4] DISPLAY_PRODUCT                          |");
      printf("\n\t\t\t\t| _______________|");
      printf("\n\t\t\t\t| [5] EDIT_PRODUCT                             |");
      printf("\n\t\t\t\t| _______________|");
      printf("\n\t\t\t\t| [6] EXIT                                     |\n\t\t\t\t__________________\n\t\t\t\t\t\t\t\t");
      printf("\n\t\t\t\t|ENTER CHOICE\n\n");

      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
        addProduct();
        break;
      case 2:
        Delete_Product();
        break;
      case 3:
        Search_Product();
        break;
      case 4:
        Display_Product();
        break;
      case 5:
        Edit_Product();
        break;
      case 6:
        exit(0);
      }
    }
  }
  if (i == 2)
  {
  }
}
void loginpage()
{
}
void addProduct()
{
  
  
}
void editProduct()
{
}
void displayAllProducts()
{
  if (product[0].Sno == 0)
  {
    printf("NO RECORD FOUND ");
    return;
  }
  for (i = 0; i < a; i++)
  {
    if (product)  
  }
}
void searchEntry()
{
}
void deleteProduct()
{
}
void calculateBill()
{
}
