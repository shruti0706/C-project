#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

static int count=0;
int main()
{

  //Welcomepage();
  MainMenu();
  return 0;
}
void welcomepage()
{

  printf("****                                           ");

  printf("\n\n\n\n\n\n                :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n                ::                                                                 ::");

  printf("\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                          FASHION HUB                            ::  \n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                                                 ::\n                ::                                  A style for every story...     ::\n                ");
  printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
  printf("\n\n\n\n\n\n\n");
  printf("****                                           ");
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
      printf("\n\t\t\t\t| [1] ADD_PRODUCT                              |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [2] DELETE_PRODUCT                           |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [3] SEARCH_PRODUCT                           |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [4] DISPLAY_PRODUCT                          |");
      printf("\n\t\t\t\t| ___|");
      printf("\n\t\t\t\t| [5] EDIT_PRODUCT                             |");
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
{ int choice,i;
    char AdminID[15]; 
    char password[12]; 
    printf("Enter 1 for AdminID:\n");
    printf("Enter 2 for UserID:\n");
    printf("Enter choice ");
    scanf("%d",&choice);
    
    
    
   /* int i;
    if(i==1)
    printf("Enter AdminID and password ");
    scanf("%s %s",&AdminID &password);
    {
        if(AdminID == arun && password == 123)
         printf("\nWelcome. LOGIN SUCCESS!"); 
        MainMenu();
        else
        printf("Wrong password. Try again ");
        
    }
    */
    
   if(choice==1)  // login for admin
   {
       
    printf("Enter AdminID:\n"); 
    scanf("%s",&AdminID); 
 
    printf("Enter password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(AdminID,"arun")==0)
    { 
        if(strcmp(password,"123")==0)
        { 
 
        printf("\nWelcome. LOGIN SUCCESS!"); 
       // MainMenu();
 
        }
    
        else
        { 
        printf("\nWrong Password please try again"); 
       // LoginPage();
        } 
    }
    else
    { 
printf("\nAdminID doesn't exist"); 
//LoginPage();
} 
}

  
  if(choice==2)  //login for user
  {
      int choice,i;
    char UserID[15]; 
    char password[12]; 
     //printf("Enter 1 for New User:\n");
    // printf("Enter 2 for Existing User:\n");
     //printf("Enter choice: ");
    // scanf("%d",&choice);
     //if(choice==1)
    // {
         
         printf("Enter default UserID = kopil:\n"); 
         scanf("%s",&UserID); 
         printf("Enter default password = qwerty:\n"); 
         scanf("%s",&password); 
         
         if(strcmp(UserID,"kopil")==0)
    { 
        if(strcmp(password,"qwerty")==0)
        { 
 
        printf("\nWelcome. LOGIN SUCCESS!"); 
       //UserMenu();
 
        }
    
        else
        { 
        printf("\nWrong Password please try again"); 
       // LoginPage();
        } 
    }
    else
    { 
printf("\nUserID doesn't exist"); 
//LoginPage();
} 
         
  }    
}
void addProduct()
{ char ch;
while(1){
  printf("Add new record ? Y/N ");
  scanf("%c",&ch);
if(ch=='N'||'n'){
  mainMenu(1);
}
else if(ch=='Y'||'y'){
  printf("Enter new product code");
  scanf("")

}
else{
  printf("Invalid choice.Retry");
}
  
}

}
void editProduct()
{
}
void displayAllProducts()
{
  

        int a=10;
        
  if (product[0].Sno == 0)
  {
    printf("NO RECORD FOUND ");
    return;
  }
    printf("%9s %9s %9s %9s %9s","Sno" ," code "," name ", " rate  "," qty " );
 
     
       for (int i=0;i<a;i++){
    printf("%9d %9d %9s %9d %9d ",product[i].Sno, product[i].code, product[i].name, product[i].rate, product[i].qty );
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
