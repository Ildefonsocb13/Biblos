//
//  "Name".c
//  
//
//  Created by Castro Bouquet Ildefonso on -/-/-.
//

/* Libraries */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Custom Libraries */

#include"Motor.h"
#include"Vista.h"

typedef struct BookData
{
    int ID;
    int ISBN;
    char *Title;
    char *Main_Author;
    char *Co1_Author;
    char *Co2_Author;
    int Print_Year;
    char *Editorial;
    char *Comments;
    struct DatosLibro *sig,*ant;
}BOOKDATA;

typedef struct UserData
{
    int ID;
    char *Password;
    char *Name;
    char *Middle_Name;
    char *Last_Name;
    int Late_Returns;
}USERDATA;

typedef struct LoanData
{
    int UserId;
    int BookId;
    char Loan_Date;
    char Limit_Date;
    char Loan_Return;
}LOANDATA;

/* Main Function */
int main (int argc, char *argv[])
{
    if(argc>3)
    printf("Invalid types of argument, please read \"README.md\" for more information.\n");
}
/*End Main*/