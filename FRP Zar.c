#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <Windows.h>
 
int GetFontSize(HANDLE windowHandle, COORD *size)
    {
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };
 
    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    *size = font.dwFontSize;
 
    return 1;
    }
 
int SetFontSize(HANDLE windowHandle, COORD size)
    {
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };
 
    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    font.dwFontSize = size;
 
    if (!SetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    return 1;
    }
 

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
}

void yirmi()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 20 + 1;
    printf("%d", x);
}

void on()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 10 + 1;
    printf("%d", x);
}

void sekiz()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 8 + 1;
    printf("%d", x);
}

void alti()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 6 + 1;
    printf("%d", x);
}

void dort()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 4 + 1;
    printf("%d", x);
}

void yuz()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 100 + 1;
    printf("%d", x);
}

void oniki()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = x % 12 + 1;
    printf("%d", x);
}




int main()
{
    char secim;
    int i;
	 
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size;
 
    if (GetFontSize(h, &size))
        {
        /* Grow by 50% */
        size.X += (SHORT)(size.X * .5);
        size.Y += (SHORT)(size.Y * .5);
        SetFontSize(h, size);
        }
	 
	 menu:

	 printf("\n\t *****************************************************\n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t       FRP Oyunu Zar Atma Programi\n");
	 printf("\n\t_______________________________________________________\n");
	 printf("\n\t *****************************************************\n\n");
	
	 printf("\n\t -> 1d4 icin Q'ya basin.");
     printf("\n\t -> 1d6 icin W'ya basin.");
     printf("\n\t -> 1d8 icin E'ya basin.");
	 printf("\n\t -> 1d10 icin R'ya basin.");
     printf("\n\t -> 1d12 icin T'ya basin.");
     printf("\n\t -> 1d20 icin Y'ya basin.");
     printf("\n\t -> 1d100 icin U'ya basin.");
	
     secim = toupper(getch());

     switch (secim)
     {
         case 'Q':
         delay(1);
         system("cls");
         dort();
         getch();
         system("cls");
		 goto menu;
         break;
     
         case 'W':
         delay(1);
         system("cls");
         alti();
         getch();
         system("cls");
		 goto menu;
         break;

         case 'E':
         delay(1);
         system("cls");
         sekiz();
         getch();
         system("cls");
		 goto menu;
         break;

         case 'R':
         delay(1);
         system("cls");
         on();
         getch();
         system("cls");
		 goto menu;
         break;

         case 'T':
         delay(1);
         system("cls");
         oniki();
         getch();
         system("cls");
		 goto menu;
         break;

         case 'Y':
         delay(1);
         system("cls");
         yirmi();
         getch();
         system("cls");
		 goto menu;
         break;

         case 'Z':
         delay(1);
         system("cls");
         yuz();
         getch();
         system("cls");
		 goto menu;
         break;
         
         case 'U':
         delay(1);
         system("cls");
         yuz();
         getch();
         system("cls");
		 goto menu;
         break;
         
         default:
         system("cls");
		 printf("Tekrar dene.");
		 delay(1);
		 system("cls");
		 goto menu;
         break;
     }
    return 0;
}
