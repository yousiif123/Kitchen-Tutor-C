#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void frontheader()
 {
 
	printf("\n\n"); 
	printf("\n                              * * * * * * * * * * * *       ");
	printf("\n                                                            ");
	printf("\n                              *                     *       ");
	printf("\n                                      HELLO                 ");
	printf("\n                              *                     *       ");
	printf("\n                                                            ");
	printf("\n                              * * * * * * * * * * * *       ");
	printf("\n\n");
	printf("\nPress Any Key To Continue....");
 }
 
void frontheader2() 
 {
 
	printf("\n\n"); 
	printf("\n                       ::::::::::::::::::::::::::::::::::::: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::   I Am your Kitchen Assistant   :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::::::::::::::::::::::::::::::::::::: ");
	printf("\n\n");
	printf("\nPress Any Key To Continue....");
 }
 
void frontheader3()
 {
 
	printf("\n\n"); 
	printf("\n                       ::::::::::::::::::::::::::::::::::::: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::    I Know Tasty Food Recipies   :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::                                 :: ");
	printf("\n                       ::::::::::::::::::::::::::::::::::::: ");
	printf("\n\n");
	printf("\nPress Any Key To Continue....");
 }
 
 int main()
 {
 	frontheader();
 	getch();
	system("CLS");
	frontheader2();
	getch();
	system("CLS");
	frontheader3();
    getch();
	system("CLS");
	
	
	int type=0;
	int foodchoice;
	int foodchoicee;
	
	printf("\n\n\n                       : : : : : : : : : : : : : : : : : : : : : : : : : ");
	printf("\n\n                                         FOOD TYPE                       ");
	printf("\n\n                         - - - - - - - - - - - - - - - - - - - - - - -    ");
	printf("\n                       :    Enter 1 for Non-Vegetarian Food        : ");
	printf("\n\n                       :    Enter 2 for Vegetarian Food   : ");
	printf("\n                         - - - - - - - - - - - - - - - - - - - - - - -    "); 
	printf("\n\n                                         Your Choice :  "); 
	
	scanf("%d",&type);
	
	printf("\n                       : : : : : : : : : : : : : : : : : : : : : : : : : ");
	printf("\n\n");
	printf("\nPress Any Key To Continue....");
    getch();
	system("CLS");
	
	if (type==1)
	{
		printf("\n\n\n");
		printf("\n                | SERIAL |        FOOD         | SERIAL |         FOOD        |");
		printf("\n                --------------------------------------------------------------   ");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    1   |Chicken roast        |    11  |Nuggets sandwich     |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    2   |Beef marination      |    12  |Kofta Chicken        |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    3   |Chicken Malai Boti   |    13  |Kofta Biryani        |");       
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    4   |Chicken malai kabab  |    14  |Nargisi Kofta        |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    5   |Omellete keema roll  |    15  |Macaroni Casserole   |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    6   |Pizza                |    16  |Mutanjan with Beef   |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    7   |chicken changezi     |    17  |Chicken Shashlik     |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    8   |Lemon Chicken        |    18  |Chicken Manchurian   |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    9   |schezwan chicken     |    19  |Beef Haleem          |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    10  |Dry Beef chili       |    20  |Chicken Nihari       |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |       PROJECT MADE BY https://github.com/yousiif123/        |");
		printf("\n                ---------------------------------------------------------------   ");
		printf("\n\n\n");
		
		printf("                Enter Your Choice (Serial) :  ");
		scanf("%d",&foodchoice);
		
		printf("\nPress Any Key To Continue....");
		 
		getch();
		system("CLS");
		
		
		if (foodchoice==1)
		{
			FILE *fptr1;
			char ch1;
			fptr1 = fopen("chicken roast.txt","r");
			while((ch1=getc(fptr1)) != EOF)
			{
				printf("%c", ch1);
				
			}
			
		}
		else if (foodchoice==2)
		{
			FILE *fptr2;
			char ch2;
			fptr2 = fopen("beef marination.txt","r");
			while((ch2=getc(fptr2)) != EOF)
			{
				printf("%c", ch2);
			}
		}
		else if (foodchoice==3)
		{
			FILE *fptr3;
			char ch3;
			fptr3 = fopen("Chicken Malai Boti.txt","r");
			while((ch3=getc(fptr3)) != EOF)
			{
				printf("%c", ch3);
			}
		}
		else if (foodchoice==4)
		{
			FILE *fptr4;
			char ch4;
			fptr4 = fopen("chicken malai kabab.txt","r");
			while((ch4=getc(fptr4)) != EOF)
			{
				printf("%c", ch4);
			}
		}
		else if (foodchoice==5)
		{
			FILE *fptr5;
			char ch5;
			fptr5 = fopen("omellete keema roll.txt","r");
			while((ch5=getc(fptr5)) != EOF)
			{
				printf("%c", ch5);
			}
		}
		else if (foodchoice==6)
		{
			FILE *fptr6;
			char ch6;
			fptr6 = fopen("12 inch pizza.txt","r");
			while((ch6=getc(fptr6)) != EOF)
			{
				printf("%c", ch6);
			}
		}
		else if (foodchoice==7)
		{
			FILE *fptr7;
			char ch7;
			fptr7 = fopen("chicken changezi.txt","r");
			while((ch7=getc(fptr7)) != EOF)
			{
				printf("%c", ch7);
			}
		}
		else if (foodchoice==8)
		{
			FILE *fptr8;
			char ch8;
			fptr8 = fopen("Ingredients Lemon Chicken.txt","r");
			while((ch8=getc(fptr8)) != EOF)
			{
				printf("%c", ch8);
			}
		}
		else if (foodchoice==9)
		{
			FILE *fptr9;
			char ch9;
			fptr9 = fopen("Ingredients for schezwan chicken.txt","r");
			while((ch9=getc(fptr9)) != EOF)
			{
				printf("%c", ch9);
			}
		}
		else if (foodchoice==10)
		{
			FILE *fptr10;
			char ch10;
			fptr10 = fopen("Beef chili Dry.txt","r");
			while((ch10=getc(fptr10)) != EOF)
			{
				printf("%c", ch10);
			}
		}
		else if (foodchoice==11)
		{
			FILE *fptr11;
			char ch11;
			fptr11 = fopen("Ingredients for nuggets sandwich.txt","r");
			while((ch11=getc(fptr11)) != EOF)
			{
				printf("%c", ch11);
			}
		}
		else if (foodchoice==12)
		{
			FILE *fptr12;
			char ch12;
			fptr12 = fopen("Kofta Chicken.txt","r");
			while((ch12=getc(fptr12)) != EOF)
			{
				printf("%c", ch12);
			}
		}else if (foodchoice==13)
		{
			FILE *fptr13;
			char ch13;
			fptr13 = fopen("Kofta Biryani Recipe.txt","r");
			while((ch13=getc(fptr13)) != EOF)
			{
				printf("%c", ch13);
			}
		}else if (foodchoice==14)
		{
			FILE *fptr14;
			char ch14;
			fptr14 = fopen("Nargisi Kofta.txt","r");
			while((ch14=getc(fptr14)) != EOF)
			{
				printf("%c", ch14);
			}
		}else if (foodchoice==15)
		{
			FILE *fptr15;
			char ch15;
			fptr15 = fopen("Macaroni Casserole.txt","r");
			while((ch15=getc(fptr15)) != EOF)
			{
				printf("%c", ch15);
			}
		}
		else if (foodchoice==16)
		{
			FILE *fptr16;
			char ch16;
			fptr16 = fopen("Mutanjan with Beef.txt","r");
			while((ch16=getc(fptr16)) != EOF)
			{
				printf("%c", ch16);
			}
		}
		else if (foodchoice==17)
		{
			FILE *fptr17;
			char ch17;
			fptr17 = fopen("Chicken Shashlik.txt","r");
			while((ch17=getc(fptr17)) != EOF)
			{
				printf("%c", ch17);
			}
		}
		else if (foodchoice==18)
		{
			FILE *fptr18;
			char ch18;
			fptr18 = fopen("Chicken Manchurian.txt","r");
			while((ch18=getc(fptr18)) != EOF)
			{
				printf("%c", ch18);
			}
		}
		else if (foodchoice==19)
		{
			FILE *fptr19;
			char ch19;
			fptr19 = fopen("Beef Haleem Recipe.txt","r");
			while((ch19=getc(fptr19)) != EOF)
			{
				printf("%c", ch19);
			}
		}
		else if (foodchoice==20)
		{
			FILE *fptr20;
			char ch20;
			fptr20 = fopen("Ingredients for Chicken Nihari.txt","r");
			while((ch20=getc(fptr20)) != EOF)
			{
				printf("%c", ch20);
			}
		}
	}
	else if (type==2)
	{
		printf("\n\n\n");
		printf("\n                | SERIAL |        FOOD         | SERIAL |         FOOD        |");
		printf("\n                --------------------------------------------------------------   ");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    1   |Dhansak masala       |    6   |Dal Chawal           |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    2   |Gobi Manchurian      |    7   |Halwa Puri ChannA    |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    3   |Lahori Murgh Cholay  |    8   |Tandoori Chai        |");       
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    4   |TBSP Salt            |    9   |Lacha Paratha        |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |    5   |Fried WOnton         |    10  |White Biryani        |");
		printf("\n                |        |                     |        |                     |");
		printf("\n                |       PROJECT MADE BY https://github.com/yousiif123/        |");
		printf("\n                ---------------------------------------------------------------   ");
		printf("\n\n\n");
		
		printf("                Enter Your Choice (Serial) :  ");
		scanf("%d",&foodchoicee);
		getch();
		system("CLS");
		
		printf("\nPress Any Key To Continue....");
		
		if (foodchoicee==1)
		{
			FILE *fptrr1;
			char cha1;
			fptrr1 = fopen("dhansak masala.txt","r");
			while((cha1=getc(fptrr1)) != EOF)
			{
				printf("%c", cha1);
			}
		}
		
		else if (foodchoicee==2)
		{
			FILE *fptrr2;
			char cha2;
			fptrr2 = fopen("Gobi Manchurian.txt","r");
			while((cha2=getc(fptrr2)) != EOF)
			{
				printf("%c", cha2);
			}
		}
		
		else if (foodchoicee==3)
		{
			FILE *fptrr3;
			char cha3;
			fptrr3 = fopen("Lahori Murgh Cholay.txt","r");
			while((cha3=getc(fptrr3)) != EOF)
			{
				printf("%c", cha3);
			}
		}
		
		else if (foodchoicee==4)
		{
			FILE *fptrr4;
			char cha4;
			fptrr4 = fopen("Dal Chwal.txt","r");
			while((cha4=getc(fptrr4)) != EOF)
			{
				printf("%c", cha4);
			}
		}
		
		else if (foodchoicee==5)
		{
			FILE *fptrr5;
			char cha5;
			fptrr5 = fopen("Fried WOnton.txt","r");
			while((cha5=getc(fptrr5)) != EOF)
			{
				printf("%c", cha5);
			}
		}
		
		else if (foodchoicee==6)
		{
			FILE *fptrr6;
			char cha6;
			fptrr6 = fopen("Dal Chwal.txt","r");
			while((cha6=getc(fptrr6)) != EOF)
			{
				printf("%c", cha6);
			}
		}
		
		else if (foodchoicee==7)
		{
			FILE *fptrr7;
			char cha7;
			fptrr7 = fopen("Halwa Puri Channa.txt","r");
			while((cha7=getc(fptrr7)) != EOF)
			{
				printf("%c", cha7);
			}
		}
		
		else if (foodchoicee==8)
		{
			FILE *fptrr8;
			char cha8;
			fptrr8 = fopen("Tandoori Chaye.txt","r");
			while((cha8=getc(fptrr8)) != EOF)
			{
				printf("%c", cha8);
			}
		}
		
		else if (foodchoicee==9)
		{
			FILE *fptrr9;
			char cha9;
			fptrr9 = fopen("Lacha Paratha.txt","r");
			while((cha9=getc(fptrr9)) != EOF)
			{
				printf("%c", cha9);
			}
		}
		
		else if (foodchoicee==10)
		{
			FILE *fptrr10;
			char cha10;
			fptrr10 = fopen("White Biryani Recipe.txt","r");
			while((cha10=getc(fptrr10)) != EOF)
			{
				printf("%c", cha10);
			}
		}	
}
	
	else
	{
		printf("Enter a valid type");
	}


return 0;

}
  	
