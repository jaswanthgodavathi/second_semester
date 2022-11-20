/*
	#include<stdio.h>
	
int main() {
    int x;
    signed int d;
    unsigned int e;
    short int f;
    signed short int g;
    unsigned short int h;
    float y;
    double z;
    char a;
    signed char b;
    unsigned char c;
    printf("Size of int: %d bytes\n", sizeof(x));
    printf("Size of signed int: %d bytes\n", sizeof(d));
    printf("Size of unsigned int: %d bytes\n", sizeof(e));
    printf("Size of short int: %d bytes\n", sizeof(e));
    printf("Size of unsigned short int: %d bytes\n", sizeof(e));
    printf("Size of float: %d bytes\n", sizeof(y));
    printf("Size of double: %d bytes\n", sizeof(z));
    printf("Size of char: %d byte\n", sizeof(a));
    printf("Size of signed char: %d byte\n", sizeof(b));
    printf("Size of unsigned char: %d byte\n", sizeof(c));
    
    return 0;
}
#include<stdio.h>
int main()
{
   int n, r, c, b;
   int a=1;

   printf("Enter number of rows: ");
   scanf("%d",&n);

   for(r=1; r<=n; r++)
   {
     b=a+r-1;
     for(c=1; c<=r; c++, a++)
     {
       if(r%2==1) printf("%5d",a);
       else printf("%5d",b--);
     }

     printf("\n");
   }

   return 0;
}
int main()
{
	int 
printf("   *    ");
printf("  ***   ");
printf(" *****  ");
printf("******* ");
int main()
{
	
	printf("%f \n",5/3);  //int by int
	printf("%f \n",5/3.0);//int by float
	printf("%f \n",5.0/3);//float by int
	printf("%f \n\n\n",5.0/3.0);//float by float
	//format specifier int
	printf("%d \n",5/3);  //int by int
	printf("%d \n",5/3.0);//int by float
	printf("%d \n",5.0/3);//float by int
	printf("%d \n",5.0/3.0);//float by float
	
}
==============================================================================*/
/*int main()
{
	int x = 5;
	char X = 'F';                        
	printf("%d \n",x);
	printf("%c \n",);
}
*/




/*
int main()
{
	int num1, num2;
	printf("Enter first number ");
	scanf("%d",&num1);
	printf("Enter second number ");
	scanf("%d",&num2);
	
	if(num1 == num2)
	{
		printf("The numbers are same");
	}
	else if(num1>num2)
		printf("number 1 is greter");
	else
		printf("number 2 is greter");
}
*/
/*
int main()
{
float units, bill;
printf("Enter the number of units consumed");
scanf("%f",&units);
if(units<=50)
{	
	bill = 0.5 * units;
	printf("Your bill is %.0f rupees ",bill);
}
else if(units>50 && units<=100)
{
	units = units - 50;
	
}
}*/
/*
int main()
{
	int x =5,y=10;
	x,y =  y, x;
	printf("%d \n",x);
	printf("%d",y);
	
}
int main()
{
	int year;
	scanf("%d",&year);
	if (year%100==0)
	{
		if (year%400==0)
		printf("leap year \n");
	}
	else
	printf("Not a leap year");
	
	
	
	
	
	
	
	
}
int main()
{
	int x = 20, y= 30;
	printf("Before swapping \n");
	printf("%d \n",x);
	printf("%d \n\n\n",y);
	x=x+y;//x=20+30
	y=x-y;//y=50-30
	x=x-y;//x=30
	printf("Before swapping \n");
	printf("%d \n",x);
	printf("%d \n\n\n",y);
	
}
int main()
{	
	int num;
	int i=0;
	printf("Enter the number ");
	scanf("%d",&num);	
	while(i<num)
	{
		printf("%d, ",num);
		num = num-1;
	}
}
int main()
{	
	int num,i,value=1;
	printf("Enter the number to find the factorial");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		value=value*(i+1);
		printf("%d \n",value);
	}
	printf("%d \n",value);
}
int main()
{
	int choice;
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{	
		case 2:printf("c program");
		case 1:printf("Welcome");
		default:
			printf("wrong entry");
		break;
	}
}
int main()
{
	char c;
	printf("Enter a character ");
	scanf("%c",&c);
	switch(c)
	{
	case 'C':printf("The character you entered is 'C'");
	break;
	case 'D':printf("The character you entered is 'D'");
	break;
	default:
		printf("%%d%");
	}
}
int main()
{
	int a = -1;
	do
	{
		printf("Hello World \n");
		a = a-1;
	}while(a<3);
}
int main()
{
	int a = 1;
	while(a<3)
	{
		printf("Hello World \n");
		a = a+1;
	}
	if(a==4)
	{
	printf("Hello");
	}
}
int main()
{
	int i,j;
	for(i=0;j=0;i<5 && j<5;i++ && j++)
	{
		printf("i = %d, j = %d \n",i,j);
		printf("======================\n");
	}
}
int main()
{
	int i;
	for(i=0;i<5;i++)
		printf("i = %d \n",i);
		printf("********* \n");
	
}
int main()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int i;
	for(i=0;i<5;i++)
		printf("i = %d \n",i);
		printf("********* \n");
	
}













//                                                 ARRAYS                                          //
int main()
{
	//array initialization//
	char a[10]={0,1,2,3,4,'Aa'};
	printf("%d",a[5]);
}
int main()
{
	int num,a[num],i,max=0,j;
	printf("Enter the number of elements in the array ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		{
			printf("Enter the %d element of the array ",i+1);
			scanf("%d",&a[num]);
		}
	
}
int main()
{
	int num,a[num],i,max=0,j;
	printf("Enter the number of elements in the array ");
	
}
int main()
{
	printf("Hello");
	int num,a[num],i,j,max;
	printf("Enter the number of elements in the array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		{
			printf("Enter the %d element of the array ",i+1);
			scanf("%d",&a[num]);
		}
	for(i)
}

//						HACKER EARTH PROBLEMS

#include<stdio.h>
int main()
{
	//Enter the number of test cases
	int test,row,col,i,j,count=0;
	char d;
	scanf("%d",&test);
	//Enter the number of rows and columns with space
	scanf("%d %d",&row,&col);
	//take the inputs in the array with continuous
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				{	
					char arr[row];
					for(j=0;j<col;j++)
						{
						scanf("%1c",&arr[d]);
						if(arr[j]=='#')
							{
								printf("Hello");
							}
						}
				}
				
		}
}

#include<stdio.h>  
int main()    
{
	int test,num,i=0;
	scanf("%d",&test);
	scanf("%d",&num);
	int a[i];
	while (num>0)
		{
			a[i]=num;
			i=i+1;
			num=num-1;
			printf("%d %d\n",num,i);
			
		}
	
}
#include<stdio.h>


	float average(float age[],int n);
	int main()
	{
		float avg,age[]={23.4,55,22.6,3,40.5,18};
		avg=average(age,6);
		printf("Average age = %2f \n",average);
		return 0;
	}
	
	
#include<stdio.h>
float average(float	a[],int n);
int main()
{
	float age[]={23.1,14.5,6,5},avg;
	int i =0;
	for(i=0;i<3;i++)
	{
		printf("%.2f \n",age[i]);
	}
	printf(" Address of the first element of the array is %d\n",&i);
	p=&i;
	if(&i==6684156)
	{
		printf("Hi \n");
	}
	else
	{
		printf("Bye \n");
	}
	avg=average(age,3);
	printf("Average is :%f\n",avg);
	
	}
float average(float	a[],int n)
{
	int i;
	float sum=0.0,avg;
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	avg=sum/n;
	return avg;
	}	


// class on 20/04/2022
#include<stdio.h>
int main()
{	
int a[3][4];
int i,j;
int count=0;
for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			{
				printf("Enter the element in the (%d,%d) index ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
printf("======================================= \n");			
for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			{
				if(a[i][j]==0);
				count=count +1;
				
			}

		}
if(count==12)
{
	printf("0 matrix \n");
	
			}
else 
{
	printf("Not a 0 matrix \n");
						}						
printf("============================================ \n");
}

#include<stdio.h>
void swap(int,int);
int main()
{
	int n1,n2;
	n1=5;
	n2=10;
	swap(n1,n2);
	printf("%d,%d",n1,n2);
	return 0;
}
void swap(int p,int q)
{
	int tmp;
	tmp = p;
	p=q;
	q=tmp;
}

#include<stdio.h>
int main()
{
	printf("Algbly");
	main();
	return 0;
}

#include<stdio.h>
int main()
{
	char a[6]="kuroko";
	int i,j;
	for(i=0,j=6;i<j;a[++i]==a[--j])
	{
		printf("%c",a[i]);
		
	}
}
#include<stdio.h>
int main()
{
	function();
	return 0;
}
void function()
{
	printf("Function in c is awesome");
}
#include<stdio.h>
int hello(int x,int y)
{
	int result = 1;
	if(y==0)
	{
		return result;
	}
	else
	{
		result= x*(hello(x,y-1));
	}
	
}
int main()
{
	int bnum=3,c=4;
	int result;
	result=hello(bnum,c);
	printf("%d \n",result);
	return 0;
}
#include<stdio.h>
int main()
{
	function();
	return 0;
}
void function()
{
	printf("Function in c is awesome");
}
#include<stdio.h>
int main(){
	char str[]="hello Amrita";
	char str1[]={'A','m','i','r','t','a','\0'};
	printf("String 1 : %s \n",str);
	printf("String 2 : %s \n",str1);
	
}
#include<stdio.h>
int main(){
	char name[20],surname[20];
	printf("Enter name: ");
	scanf("%s %s",name,surname);
	printf("Your name is %s %s",name,surname);
}
#include<stdio.h>
int main(){
	char str[20],ch,count=1;
	int i=0;
	while(ch!='\n')
	{
		ch=getchar();
		if(ch==' ')
	{
	count=count+1;
	}
		str[i]=ch;
		i++;
	
	}
	
	str[i]='\0';
	printf("String is : %s",str);
	printf("The number of words is : %d",count);
}
#include<stdio.h>
int main()
{
	int x[6]={-5,3,40,19,3,10};
	int y[6]={75,-1,-4,50,10,15};
	int i;
	x[3]=x[3]+x[5];
	y[1]=y[2]+y[3];
	x[5]=x[0]+x[2];
	x[1]=x[4]+x[x[1]];
	for(i=0;i<=5;i++){
		if(x[i]>10)
		printf("%d\n",x[i]);
		if(x[i]<50)
		printf("%d \n",y[i]);
	}
}
#include<stdio.h>
void update(int[],int);
int main(){
	int a[3]={-2,8,4};
	update(a,3);
	for(int i=0;i<3;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
void update(int c[],int m)
{
	int i;
	for (i=0;i<m;i++)
	{
		if (i%2==0)
		{
			c[i]=c[i]%2;
		}
		else
		{
			c[i]=c[i]-1;
		}
		printf("%d",c[i]);
		
	}
}
#include<stdio.h>
int main(){
	int a[5]={8,1,5,3,-2};
	int i;
	for (i=0;i<5;)
	{
		a[++i]=i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);	
	}
	
}

#include<stdio.h>
void display(int b[],int n)
{
	for(int i =1;i
	{
		printf("%d \n",b[i]);
	}
}

int main(){
	int a[4]={3,4,5,6};
	display(a,4);
	return 0;
}
#include<stdio.h>
int Function(int x, int y)
{
	int Result1;
	if(x<y)
	{
		return x;
	}
	else
	{
		return 1+Function(x-y,y);
	}
}
int main(){
	int a=8,b=4,Result;
	Result=Function(a,b);
	printf("%d",Result);
	return 0;
}
#include<stdio.h>
void fun(int n)
{
	if(n!=0)
	{
		printf("%d \n",n);
		fun(n/2);
		printf("%d \n",n);
		
	}
	else
	return;
}
int main(){
	fun(10);
	return 0;
}

#include<stdio.h>
#include<ctype.h>
int main(){
	int var1='d',var2='3',var3='\t';
	if(isalnum(var1))
	{
		printf("var1 = %c is alphanumeric",var1);
	}
	else{
		printf("var2 = %c is not alphanumberic",var1);
	}
		if(isalnum(var2))
	{
		printf("var2 = %c is alphanumeric",var2);
	}
	else{
		printf("var2 = %c is not alphanumberic",var2);
	}
		if(isalnum(var3))
	{
		printf("var3 = %c is alphanumeric",var3);
	}
	else{
		printf("var3 = %c is not alphanumberic",var3);
	}
}
#include<stdio.h>
#include<ctype.h>
int main(){
	int var1='d',var2='3',var3='\t';
	if(islower(var1))
	{
		printf("var1 = %c is lower case alphabet \n",var1);
	}
	else{
		printf("var2 = %c is not lower case alphabet \n",var1);
	}
		if(islower(var2))
	{
		printf("var2 = %c is lower case alphabet \n",var2);
	}
	else{
		printf("var2 = %c is not lower case alphabet \n",var2);
	}
		if(islower(var3))
	{
		printf("var3 = %c is lower case alphabet \n",var3);
	}
	else{
		printf("var3 = %c is not lower case alphabet \n",var3);
	}
}


#include<stdio.h>
#include<ctype.h>
int main(){
	int var1='D',var2='3',var3='\t';
	if(islower(var1))
	{
		printf("var1 = %c is upper case alphabet \n",var1);
	}
	else{
		printf("var2 = %c is not upper case alphabet \n",var1);
	}
		if(islower(var2))
	{
		printf("var2 = %c is upper case alphabet \n",var2);
	}
	else{
		printf("var2 = %c is not upper case alphabet \n",var2);
	}
		if(islower(var3))
	{
		printf("var3 = %c is upper case alphabet \n",var3);
	}
	else{
		printf("var3 = %c is not upper case alphabet \n",var3);
	}
}





#include<stdio.h>
#include<ctype.h>
int main()
{
	int i = 0;
	char str[]=" C Program";
	while(str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i=1;
	i=i/2;
	printf("%d",i);
}

														// RECURSION
#include<stdio.h>
int plus(int n);
int main()
{
	int n=3,s;
	s=plus(n);
	printf("%d",s);
}
int plus(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(n+plus(n-1));
	}
}




#include<stdio.h>
int fact(int num);
int main()
{
	int num =4,f;
	f=fact(num);
	printf("%d",f);
	return 0;
	
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return(num*fact(num-1));
	}
}

												//MATH LIBRARY FUNCTIONS
#include<stdio.h>
#include<math.h>
int main()
{
	
	printf("%d",ceil(4.5));
}



#include<stdio.h>
int avg(int a, int b, int c);
int main()
{
	int a,b,c,average;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	printf("Enter third number ");
	scanf("%d",&c);
	average=avg(a,b,c);
	printf("The average of %d,%d and %d is %d",a,b,c,average);
	return 0;
}
int avg(int a,int b, int c)
{	
	int average;
	average=(a+b+c)/3;
	return average;
}





#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Amrita",str2[]="School";
	printf("The first string is %s \n",str1);
	printf("The second string is %s \n",str2);
	printf("The joined string is %s \n",strcat(strcat(str1," "),str2));
}


#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Jaswanth";
	char sur[]="Godavarthi";
	printf("Before copying \n");
	printf("Source name: %s",name);
	printf("Full name : %s \n\n",sur);
	strcpy(name,sur);
	printf("After copying \n");
	printf("Source name: %s",name);
	printf("Full name : %s \n\n",sur);
}


#include<stdio.h>
#include<string.h>
int main()
{
	char lang[]="C Programming";
	printf("%s",lang);
	printf("\n Length:	%d",strlen(lang));
}

#include<stdio.h>
#include<string.h>
int main()
{
	char food[]="Pizza";
	char bestfood[strlen(food)];
	strcpy(bestfood,food);
	printf("%s",bestfood);
}




#include<stdio.h>
#include<string.h>
int main()
{
	char text1[]="Hey, ";
	char text2[]="How are you";
	strcat(text1,text2);
	printf("%s",text1);
}


//problem: Create a program to compare two strings and print the larger string//
//1.	Get two string input from the user using fgets()
//2.	Compare the length of both the string using strlen()
//3.	Print the larger string 

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter the first string \n");
	fgets(str1,20,stdin);
	printf("Enter the second string \n");
	fgets(str2,20,stdin);
	if((strlen(str1)>strlen(str2)))
	{
		printf("The largest string among %s and %s is %s",str1,str2,str1);
	}
	else
	{
		printf("The largest string among %s and %s is %s",str1,str2,str2);
	}
}


#include<stdio.h>
int main()
{
	enum{india, is=7, GREAT,nice,of=11,prince,iso=10,rice };
	
	printf("%d %d %d %d %d",india,GREAT,nice,prince,rice);
}



#include<stdio.h>
int main()
{
	int a =	10,b=25;
	a=b++ + a++;
	b=++b + ++a;
	printf("%d %d",a,b);
}


#include<stdio.h>
int main()
{
	int num;
	num = 6;
	printf("%d \n",num);
	printf("%d",&num);
}

#include<stdio.h>
int main()
{
	int *ptr;
	int x = 5;
	ptr = &x;
	printf("%d \n",x);
	printf("%d \n",&x);
	printf("%d \n",ptr);
	printf("%d \n",&ptr);
	printf("%d \n",*ptr);
	*ptr = 5.5;
	printf("%d \n",*ptr);
	if(*ptr == 5)
	{
		printf("HI");
	}
	else
	{
		printf("Bye");
	}
}

#include<stdio.h>
int main(){
	int i = 10;
	int *p,*q;
	p=&i;
	q=p;
	printf("%d %d",&p,&q);


}
#include<stdio.h>
int main(){
	int i =1;
	int *q;
	int *p = &i;
	q=p;
	*q=5;
	printf("%d",*p);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char name[5][10];
	int i,x,f=0;
	printf("Enter 5 strings: \n");
	for(i=0;i<2;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("%s \n\n",&name[i][0]);
	}

	
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{

char name[5][10];
int i,x,f=0,count=0;
printf("Enter 5 strings \n");
for(i=0;i<5;i++)
{
	scanf("%s",&name[i][0]);
}
char item[20]="cccc";
for(i=0;i<5;i++)
{
	if (strcmp(item,name[i]) == 1)
		{
			
		}
	else
	{
		printf("Found in the %d row \n",i+1);
		break;
		}	
}
}
#include<stdio.h>
int main()
{
	int num,i;
	int array[20];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
}
#include<stdio.h>
int swap(int a, int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}
int main()
{
	int a =10,b=5;
	swap( a,  b);
	printf("%d",a);
	printf("%d",b);
}
#include<stdio.h>
int x=5,y=10,temp;
void swap(int,int)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	swap(x,y);
	printf("%d",x);
	printf("%d",y);
}
#include<stdio.h>
int main()
{
	int height,width,i,j,tempheight;
	char name[20];
	printf("Enter the height of the tile ");
	scanf("%d",&height);
	printf("Enter a members name in capitals ");
	scanf("%s",name);
	width=3*height;
	for(i=0;i<height;i++)
		{
		for(j=0;j<width;j++)
			{
				printf("-");
			}
			printf("\n");
		}
	char array[height][width];
	tempheight=tempheigth/2;
	tempheight=tempheight+1;
	int k;
	while(k>0)
	
}
#include<stdio.h>
swap(int *a,int *b)
{
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
int main()
{
	int a=10,b=5;
	swap(&a,&b);
	printf("%d",a);
	printf("%d",b);
}
#include<stdio.h>
int main()
{
int x[5]={1,2,3,4,5};
int *ptr;
ptr = &x[0];
printf("%d \n",*ptr);
printf("%d \n",*(ptr+4));
printf("%d \n",*(ptr-1));
printf("%d \n",*ptr + 5);
}
//    PRINTING ELEMENTS IN REVERSE ORDER
#include<stdio.h>
int main(){
	int array[3],i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=2;i>=0;i--)
	{
		printf("%d ",array[i]);
	}
}
//			FINDING THE SUM OF ELEMENTS IN THE ARRAY
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter the number of elements  in the array ");
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element in the array ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+array[i];
	}
	printf("The sum of all the elements in the array is %d",sum);
	
}


//  WRITE A C PROGRAM TO COPY TO COPY THE ELEMENTS OF ONE ARRAY TO ANOTTHER
#include<stdio.h>
int main()
{
	int i,num,temp;
	printf("Enter the number of elements in the array");
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element of the array",i+1);
		scanf("%d",&array[i]);
	}
	temp = num;
	int secondarray[temp];
	for(i=0;i<num;i++)
	{
		secondarray[i]= array[i];
	}
	printf("Elements in the first array are : \n");
	for(i=0;i<num;i++)
	{
		printf("%d \t",array[i]);
	}
	printf("\n Elements in the second array are : \n");
	for(i=0;i<num;i++)
	{
		printf("%d \t",secondarray[i]);
	}
	
}

#include<stdio.h>
int main()
{
	int a = 0;
	while(a)
	{
		printf("Hello world");
		a>>=1;
	}
}
#include<stdio.h>
int fun(int num)
{
	
	num = 435;
	while(num)
	{
		count++;
		num>>=1;
	}
	return count;
}
int main()
{	
	int count = 0;
	innum = 435;           
	while(num)
	{
		count++;
		num>>=1;
	}
	printf("%d",count);
}
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number of elements in the array");
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element of the array",i+1);
		scanf("%d",&array[i]);
	}
	
	
}
#include<stdio.h>
int sum(int , int);

int main()
{	
	int a,b,add;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	sum(a, b);
	printf("The sum of %d and %d is %d",a,b,add);
}
int sum(int a,int b)
{
	return(a+b);
}
#include<stdio.h>
int wdlen;
do{
	printf()
}
#include<stdio.h>
int main()
{	
	int a,b,c,big;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the secind number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
	big= (a>b && a>c)? a : ((b>c) ? b : c);
	printf("The biggest number among the following is %d",big);
}
#include<stdio.h>
int main(void){
	int i;
	for(i=0;i<5;i++)
	{
		printf("%c",'a'+i);
	}
}
#include<stdio.h>
int main()
{
int abcdefghijkl0123456789 = 9;
printf("%d", abcdefghijkl0123456789);
return 0;
}
#include<stdio.h>
int main()
{
float pi= 3.14;
printf("%f",pi);
return 0;
}
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d %d \n",i,j);
		}
	}
}
#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of rows");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

//							TO IDENTIFY WHEATHER A GIVEN NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{
	int num, i;
	printf("Enter a number \n");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0){
			printf("Number: %d is not a prime number \n",num);
			break;
		}
		i++;
	}
		if(i==num)
		{
			printf("Number : %d is a prime number",num);
		}
	}
	
#include<stdio.h>
int main()
{
	int num,i,j,temp;
	printf("Enter the number of elements in the array");
	scanf("%d",&num);
	int mainarray[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element in the array: ",i+1);
		scanf("%d",&mainarray[i]);
	}
	int temparray[num];                                  //COPYING THE STRINGS INTO ANOTHER ARRAY
	for(i=0;i<num;i++)
	{
		temparray[i]=mainarray[i];
	}
	for(i=0;i<num;i++)
	{
		printf("Elements in temp array are %d \n",temparray[i]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<num;j++)
		{
			if(mainarray[j]>mainarray[i])
			{
				temp = mainarray[i];
				mainarray[i]=mainarray[j];
				mainarray[j]= temp;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d \n",mainarray[i]);
	}
	
}
										//SORTING THE ELEMENTS IN ASCENDING ORDER
#include<stdio.h>
int main()
{
	int i,j,a,n,number[30];
	printf("Enter the value of N \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(number[i]<number[j])										// ONLY DIFFERENCE BETWEEN ASCENDING AND DECENDING IS THE SIGN
			{
				a = number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("The numbers arranged in ascending order are given below \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",number[i]);
	}
}



//  		ARRANGING ELEMENTS IN DECENDING ORDER IN AN ARRAY
#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	int number[30];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element in the array: ",i+1);
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[j]>number[i])
			{
			a = number[i];
			number[j]=number[i];
			number[j]=a;
			}
		}
	}
	printf("The elements in the ascending order are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",number[i]);
	}
}
#include<stdio.h>
int main()
{
	int name[20];
	printf("Enter your name ");
	scanf("%s",&name);
	printf("%s",name);
}
#include<stdio.h>
int main()
{
	char name[30],ch;
	int i = 0;
	printf("Enter name : ");
	while(ch!='\n')
	{
		ch = getchar();
		name[i] = ch;
		i++;
		}	
	name[i]='\0';
	printf("Name is %s",name);
	return 0;	
}
							//	SAMPLE SUBMISSION IN C

#include<stdio.h>
const int M =3;
const int N =3;
void print(int arr[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		printf("%d",arr[i][j]);
}
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	print(arr);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	gets(name);
	printf("Name : ");
	puts(name);
	return 0;
}
#include<stdio.h>
int main()
{
	char food[5];
	printf("Enter favourite food");
	scanf("%s",food);
	printf("Favourite food is : %s \n",food);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char food[5];
	printf("Enter favourite food");
	fgets(food,sizeof(food),stdlin);
}
#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter name");
	fgets(name,sizeof(name),stdin);
	printf("Name : ");
	return 0;
}
#include<stdio.h>
#include<ctype.h>
int main()
{
	int a = '4';
	int c = 'b';
	if(	isalnum(a))
	{
		printf("It is alpha numeric \n");
	}
	else
	{
		printf("It is not alpha numberic \n");
	}
		if(	isalnum(c))
	{
		printf("It is alpha numeric \n");
	}
	else
	{
		printf("It is not alpha numberic \n");
	}
}
#include<stdio.h>
#include<ctype.h>
int main()
{
	int a = '4';
	int c = 'b';
	if(isalpha(a))
	{
		printf("It is an alphabet");
	}
	else
	{
		printf("It is not an alphabet \n");
	}
		if(	isalpha(c))
	{
		printf("It is an alphabet \n");
	}
	else
	{
		printf("It is not an alphabet\n");
	}
}
#include<stdio.h>
#include<ctype.h>
int main()
{
	int a = '4';
	int b = 'd';
	if(isdigit(a))
	{
		printf("It is a digit");
	}
	else
	{
		printf("It is not a digit");
	}
	if(isdigit(b))
	{
		printf("It is a digit");
	}
	else
	{
		printf("It is not a digit");
	}
}
#include<stdio.h>
#include<ctype.h>
int main()
{
	int i = 0;
	char c;
	char str[]="C Program";
	while(str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}
}
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],i;
	printf("Enter the string");
	gets(s);
	for(i=0;s[i]!='\0';++i);
	printf("Length of the string: %d",i);
	return 0;
	}

//								SAMPLE PAPER 1
#include<stdio.h>
int main()
{
	int num,i=0,j;
	printf("Enter a number");
	scanf("%d",&num);
	int array[5000];
	array[0]=num;
	while(num!=1)
	{
	if(num%2 == 0)
	{	
		printf("Hi");	
		num=num/2;
		array[i]=num;
		i++;
		printf("%d \n",i);
	}
	else
	{	
		num = 3*num+2;
		array[i]=num;
		i++;
		printf("%d",i);
	}
	}
	for(j=0;j<i;j++)
	{
		printf("%d \t",array[i]);
	}
}

#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter a number");
	scanf("%d",&num);
	while(num!=1)
	{
	if(num%2 == 0)
	{
		num = num/2;
		count = count +1;
	}
	else
	{
		num = 3*num+2;
		count = count +1;
	}
}
	printf("%d",count);
}
#include<stdio.h>
int square(int , int)
{
		
}
int main()
{
	
}

//							TO FIND THE AVERAGE OF 3 NUMBERS USING FUNCTIONS
#include<stdio.h>
float average(float,float,float);
int main(){
	float a,b,c;
	printf("Enter 3 numbers please");
	scanf("%f %f %f",&a,&b,&c);
	printf("Average of 3 numbers is = %.3f \n",average(a,b,c));
	return 0;
}
float average(float x,float y, float z)
{
	float r;
	r = (x+y+z)/3;
	return r;
}
#include<stdio.h>
int square(int,int);
int main()
{
	int a;
	printf("Enter the number to find the square");
	scanf("%d",&a);
	printf("The square of %d is %d",a,square(a,a));
	return 0;
}
int square(int x,int y)
{
	int sq;
	sq=x*x;
	return sq;
}

#include<stdio.h>
int oddoreven(int a)
{
	int x;
	if(x%2 == 0)
	{
		x = 1;
		return x;
	}
	else
	{
		x=0;
		return x;
	}
}
int main()
{
	int num = 9;
	oddoreven(num);
	if(x==1)
	{
		printf("The number is even");
	}
	else if(x==0)
	{
		printf("The number is odd");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int x[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("Enter the value of the element in the position (%d,%d)",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	printf("The following 10 by 10 matrix has values : \n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d \t",x[i][j]);
		}
		printf("\n");
	}
	
}

#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],x;
	printf("Enter your name: ");
	gets(name);
	x = strlen(name);
	printf("%d",x);
}

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to find the factorial");
	scanf("%d",&num);
	while(num != 1)
	{
		
	}
}
#include<stdio.h>
int sum(int n);
int main()
{
	int number,result;
	printf("Enter a positive integer \n");
	scanf("%d",&number);
	result = sum(number);
	printf("sum = %d",result);
	return 0;
}
int sum(int num)
{
	if (num!=0)
	{
		return num+sum(num-1);
	}
	else
	{
		return num;
	}
}
#include<stdio.h>
int main()
{
	printf("Welcome to C programming!!\n");
	printf("This is my first Lab\n");
	printf("Good luck");
}
#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;


  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("%d", reverse);

  return 0;
}
#include<stdio.h>
int main()
{
	char name[1000];
	scanf("%s",&name);
	printf("%s",name);
}
#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	printf("Enter the number of rows in the matrix ");
	scanf("%d",&rows);
	printf("Enter the number of columns in the matrix ");
	scanf("%d",&cols);
	int num[100][100];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter the element in the (%d,%d) index ",i+1,j+1);
			scanf("%d",&num[i][j]);
		}
	}
	// 					TO PRINT THE ELEMENTS IN THE ORIGINAL MATRIX
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//    				TO FIND THE TRANSPOSE OF THE MATRIX
	printf("This is the transpose of the matrix \n");
	for(j=0;j<cols;j++)
	{
		for(i=0;i<rows;i++)
		{
			printf("%d \t",num[i][j]);
		}
		printf("\n");
	}

printf("\n");
//			TO FIND THE MAXIMUM AND MINIMUM ELEMENT IN THE MATRIX
int max,min,count = 0;
for(i=0;i<rows;i++)
{
	for(j=0;j<rows;j++)
	{
		if(num[i][j]>count)
		{
			count = num[i][j];
		}
	}
}
printf("The largest element in the matrix is %d \n",count);
count=max;
for(i=0;i<rows;i++)
{
	for(j=0;j<rows;j++)
	{
		if(num[i][j]<max)
		{
			min = num[i][j];
		}
	}
}
//			TO SEARCH THE ELEMENT IN A MATRIX
int num2,check=0;
printf("The smallest element in the matrix is %d \n",count);
printf("Enter the element to be searched ");
scanf("%d",&num2);
for(i=0;i<rows;i++)
{
	for(j=0;j<rows;j++)
	{
		if(num[i][j]==num2)
		{
			check=check+1;
			printf("The element is found in the matrix");
			break;
		}
	}
}
if(check==0)
{
	printf("The element is not found in the matrix\n");
}
}
#include<stdio.h>
int main()
{
	int i,j,numofcities;
	printf("Enter the number of cities ");
	scanf("%d",&numofcities);
	int arr[2][numofcities];
	for(i=0;i<2;i++)
	{
		for(j=0;j<numofcities;j++)
		{
			if(i==0)
			{
				printf("Enter the value of gold on the previous day of the %d city ",j+1);
				scanf("%d",&arr[i][j]);
				
			}
			else if(i==1)
			{
				printf("Enter the value of gold on the present day of the %d city ",j+1);
				scanf("%d",&arr[i][j]);
			}
		}
	}
	printf("\n This is the given data on previous day and present day respectively \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<numofcities;j++)
		{
			printf("%d, ",arr[i][j]);
		}
		printf("\n");
	}

printf("\n");
int difference;
int difarr[numofcities];
for(i=0;i<1;i++)
{
	for(j=0;j<numofcities;j++)
	{
		difarr[j]=arr[1][j]-arr[i][j];
	}
}
printf("The differences between yesterday and today is \n");
for(i=0;i<numofcities;i++)
{
	printf("%d \t",difarr[i]);
}
printf("The following is the predicted prices for tommorow \n ");
for(j=0;j<numofcities;j++)
{
	printf("%d\t",arr[1][j]+difarr[j]);
}
}
#include<stdio.h>
int main()
{
	char str[1000],ch;
	int count = 0;
	printf("Enter a string ");
	fgets(str,sizeof(str),stdin);
	printf("Enter a character to find its freqency ");
	scanf("%c",&ch);
	for(int i=0;str[i] != '\0';i++)
	{
		if (ch==str[i])
		{
			count++;		}
	}
	printf("The freqency of %c = %d",ch,count);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],ch;
	fgets(str,sizeof(str),stdin);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],c;
	printf("Enter your name ");
	gets(name);
	printf("Enter the character to be searched ");
	scanf("%c",&c);
	int i;
	for(i=0;i<30;i++)
	{
		if(name[i]==c)
		{
			printf("%d \n",i+1);
		}
	}
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char name[10],i;
	printf("Enter your name ");
	gets(name);
	for(i=0;i<20;i++)
	{
		if(isupper(name[i]))
		{
			tolower(name[i]);
		}
		else
		{
			toupper(name[i]);
		}
	}
	for(i=0;i<20;i++)
	{
		printf("%c",name[i]);
	}
}
//						TO PRINT THE STRING IN REVERSE ORDER 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int l,i;
	printf("Enter eh string ");
	gets(str);
	l=strlen(str);
	printf("The characters of the string in reverse order is \n");
	for(i=l;i>=0;i--)
	{
		printf("%c ",str[i]);
	}
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	printf("Enter the string ");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
		{
			alp++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			digit++;
		}
		else
		{
			splch++;
		}
		i++;
	}
	printf("Number of alphabets in the string are %d \n",alp);
	printf("Number of digits in the string are %d \n",digit);
	printf("Number of special characters in the string are %d \n",splch);
}
						WRONG PROGRAM TO SWAP TWO NUMBERS
#include<stdio.h>
void exchange(int x, int y);
int main(void)
{
	int a =5;
	int b =7;
	exchange(a,b);
	printf("%d %d \n",a,b);
	return 0;
}
void exchange(int x, int y)
{
	int temp;
	temp = x;
	x =y;
	y = temp;
	return;
}
#include<stdio.h>
void exchange(int*,int*);
int main(void)
{
	int a =5;
	int b = 7;
	exchange(&a,&b);
	printf("%d %d \n",a,b);
	return 0;
}
void exchange(int *px,int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	return;
}
#include<stdio.h>
int sum(int*, int*);
int main()
{
	int a =5;
	int b = 7;
	sum(&a,&b);
	printf("%d \n",....);
	return 0;
}
int sum(int *px, int *py)
{
	int temp;
	temp = *px + *py;
	return temp;
}
#include<stdio.h>
void printarray(int* array,int length)
{
	int index;
	for(index=0;index<length;++index)
	{
		printf("%d",*(array + index));
	}
}
int main()
{
	int arr[6]={6,5,4,3,2,1};
	printarray(arr,6);
	return 0;
}
// INCREASE THE ELEMENTS BY 1 AND PRINT IT 
#include<stdio.h>
void printarray(int* array,int length)
{
	int index;
	for(index=0;index<length;++index)
	{
		printf("%d",(*(array + index))+1);
	}
}
int main()
{
	int arr[6]={6,5,4,3,2,1};
	printarray(arr,6);
	return 0;
}
#include<stdio.h>
int* smaller(int* p1,int* p2);
int main()
{
	int a,b;
	int* p;
	scanf("%d %d",&a,&b);
	p = smaller(&a,&b);
}
int* smaller(int* px, int* py)
{
	return(*px < *py ? px : py);
}
//  						TO PRINT THE SUM OF TWO NUMBERS USING FUNCTIONS
#include<stdio.h>
int sum(int px,int py);
int main()
{
	int a,b;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	sum( a, b);
}
int sum(int px,int py)
{
	int add;
	add = px + py;
	printf("The sum of %d and %d is %d",px,py,add);
}
#include<stdio.h>
int sum(int,int);				// FUNCTION DECLARATION
int main(void)
{
	int total;
	total = sum(8,6);      //FUNCTION CALL
	printf("The total is %d \n",total);
	return 0;
}
int sum(int a,int b)			//FUNCTION DEFINITION
{
	int s;
	s = a+b;
	return s;					//FUNCTION RETURNING A VALUE
}
//			WRITE A PROGRAM IN C TO FIND THE SQUARE OF ANY NUMBER USING THE FUNCTION
#include<stdio.h>
int square(int);
int main()
{
	int sq;
	int a;
	scanf("%d",&a);
	sq=square(a);
	printf("The square of %d is %d",a,sq);
}
int square(int a)
{
	int s;
	s = a*a;
	return s;
}
//   		WRITE A PROGRAM IN C TO SWAP TWO NUMBERS USING FUNCTIONS
#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	swap(a,b);
	printf("The values of a and b after swapping is %d and %d respectively",a,b);
}
void swap(int px,int py)
{
	int temp;
	temp = px;
	px = py;
	py = temp;
}
#include<stdio.h>
void swap(int *,int *);
int main()
{
	int n1,n2;
	printf("Input 1st number: ");
	scanf("%d",&n1);
	printf("Input 2nd number: ");
	scanf("%d",&n2);
	printf("Before swapping : n1 = %d and n2 = %d \n",n1,n2);
	swap(&n1,&n2);
	printf("After swapping : n1 = %d and n2 = %d \n",n1,n2);
	return 0;
}
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

#include<stdio.h>
int main()
{
	int i,j,arr[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter the monthly temperature of the %d month in the %d city ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The following matrix represents the temperatures of all the 10 cities \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	// 				FOR THE FIRST BIT
	int city,month,high=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j]>high)
			{
				month = i;
				city = j;
				high = arr[i][j];
			}
		}
		printf("\n");
	}
	printf("The city and month corresponding to highest temperature is %d and %d respectively\n",city+1,month+1);
//  FOR THE SECOND BIT
	int nofc,avg=0;
	printf("Enter the number of the city to find the average ");
	scanf("%d",&nofc);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==(nofc-1))
			{
				avg = avg + arr[i][j];
			}
		}
	}
	printf("The average of %d city is %d",nofc,avg/5);
	
	//			FOR THE THIRD BIT
		
}
//									PROGRAM TO REMOVE ALL THE BLANK SPACES IN A STRING
#include<stdio.h>
#include<string.h>
int main()
{
	char name[80],l,i,j=0;
	printf("Enter a sectence: ");
	gets(name);
	l = strlen(name);
	printf("The length of the string is %d",l);
	for(i=0;i<l;i++)
	{
		if(name[i]==' ')
		{
			j=i;
			while(j<l)
			{
			name[i]=name[i+1];
			j++;
			}
		}
		j=0;
	}
	printf("The sentence after removing the blanks is ");
	for(i=0;i<l;i++)
	{
		printf("%c",name[i]);
	}
}
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i,k=0;
	printf("Enter the string: ");
	gets(s);
	for(i=0;s[i];i++)								//DOUBT TO BE ASKED 
	{
		s[i]=i+k;
		if(s[i]==' ' || s[i]=='\t')
		{
			k++;
			i--;
		}
	}
	printf("String after removing all the blank spaces :");
	printf("%s",s);
}
#include<stdio.h>
#include<string.h>
int main()
{
	int i,len = 0,j;
	char str[100];
	printf("Enter a string: ")
	gets(str);
	len = strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;j<len;j++)
		{
			str[j]=str[j+1];
		}
		len--;
	}
	}
	printf("String after removing all the spaces is %s ",str);
	
}
#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i,j;
	printf("Enter the number of brands of bag ");
	scanf("%d",&m);
	printf("Enter the number of customers ");
	scanf("%d",&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the price of the %d brand and %d customer",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("In the following matrix rows indicates the brands and columns indicates the customers \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	int count=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			count = count + arr[j][i];
		}
		if(count>500&& count < 1000)
		{
			count = count - ((count*10)/100);
			printf("The bill of the %d custormer is %d",i+1,count);
		}
	}
}
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr;
	ptr = &arr[0];
	printf("%d \n",*ptr);
	printf("%d \n",ptr);
	printf("%d \n",(ptr+1));
}
#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",&a[i][j]);
		}
		printf("\n");
	}


//                      		&A[0][0],A,A[0],A+0,&A[0] ALL THESE WILL PRINT THE BASE ADDRESS I.E A[0][0]
for(j=0;j<3;j++)
{
	printf("%d \n",&a[1][j]);
}
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d\t",*(&a[i][j]));
	}
	printf("\n");
}
}
#include<stdio.h>
int main()
{
	int i,j;
	int a[5][5]={1,2,3,4,5,6,7,8,9,};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
//									POINTER TO POINTER EXAMPLE
#include<stdio.h>
int main()
{
	//    * is known as the dereferencing operator
	int *ptr= NULL;								//   THIS IS KNOWN AS THE NULL POINTER
	int a;
	int *ptr1;`							// POINTER WITHOUT ANY CONTENT IS KNOWN AS WILD POINTER 
	printf("%d \n",&ptr);
	printf("%d \n",&a);
	return 0;
}
//   							THIRD TYPE OF POINTER IS DANGLING POINTER
#include<stdio.h>
int main()
{
	int *ptr = NULL;
	printf("%d",*ptr);
}
#include<stdio.h>
int main()
{
int *ptr;
float *ptr1;
int a = 5;
float b =5.5;
ptr=&a;
ptr1 = &b;
printf("Integer value= %d \n",*ptr);
printf("Integer value of b is : %f",*ptr1);
}
//                         	VOID POINTERS
#include<stdio.h>
int main()
{
	void *ptr;
	int a = 5,i;
	float b = 5.5;
	char name[10]="Jaswanth";
	ptr = &a;
	printf("Address of ptr is %d \n",&ptr);
	printf("Integer value = %d \n",*(int*)ptr);					// TYPE CASTING IN C
	ptr = &b;
	printf("Address of ptr is %d \n",&ptr);
	printf("Float value = %f \n",*(float*)ptr);
	ptr = &name;
	for(i=0;i<10;i++)
	{
	printf("String name is %c",*(char*)ptr);
	}
}
// 				ARRAY OF POINTERS
#include<stdio.h>
int main()
{
	int *a[3],i;
	int p =3,q=4,r=5;
	a[0]=&p;
	a[1]=&r;
	a[2]=&q;
	for(i=0;i<=2;i++)
	{
		printf("Value = %d \n",*a[i]);
		printf("Address = %d \n",a[i]);
	}
}










//												STRUCTURES IN C 
#include<stdio.h>
struct student
{
	char name[20];
	int roll_no;
	float marks;
	char gender;
	long long int phone_no;
	int a[5]={1,2};
};
int main()
{
	struct student st1={"Amrita",4,89,'M',9849994698};
	printf("Name\t\t\tRoll number\tMarks\t\tGender\tPhone no\t\n");
	printf("------------------------------------------------\n");
	printf("\n%s\t\t%d\t\t%f\t%c\t%lld\t\t%d",st1.name,st1.roll_no,st1.marks,st1.gender,st1.phone_no,st1.a[5]);
	return 0;
	}
	
//										POINTERS ASSIGNMENT	
// 1st question
#include<stdio.h>
int main()
{
	int *ptr;
	int a = 5;
	ptr = &a;
	printf("%d\n",*ptr++);
	printf("%d\n",++*ptr);
	printf("%d\n",sizeof(ptr));
}
//    2nd question
#include<stdio.h>
int main()
{
	int y[4]={6,7,8,9};
	int *ptr = y+2;
	printf("%d\n",ptr[1]);
	printf("%d\n",ptr[0]);
}
//    3rd question
#include<stdio.h>
int main()
{
	char str[]="hai";int i;
	for(i=0;str[i];i++)
	{
		printf("\n%c%c%c%c",str[i],*(str+i),*(i+str),i[str]);
	}
}
//     4th question
#include<stdio.h>
int main()
{
	int n[25];
	n[0]=100;
	n[24]=200;
	printf("%d%d",*n,*(n+24)+*(n+0));
}
//			5th question
#include<stdio.h>
int main()
{
	int x[8]={10,20,30,40,50,60,70,80};
	printf("%d\n",x);
	printf("%d\n",x+2);
	printf("%d\n",*x);
	printf("%d\n",(*x+2));
	printf("%d\n",*(x+2));
}
//			6th question
#include<stdio.h>
int main()
{
	char str1[]="India";
	char str2[]="BIX";
	char *s1 = str1,*s2= str2;
	while(*s1++ = *s2++)
	{
		printf("%s",str1);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
struct mystructure{
	int mynum;
	char myletter;
};
int main()
{
	struct mystructure s1;
	s1.mynum = 15;
	s1.myletter = 'B';
	printf("My number: %d \n",s1.mynum);
	printf("My letter: %c \n",s1.myletter);
}
#include<stdio.h>
struct mys{
	int num;
	char letter;
};
int main()
{
	struct mys s1;
	s1.num = 5;
	s1.letter = 'j';
	printf("my number is : %d \n",s1.num);
	printf("my letter is : %c",s1.letter);
}
#include<stdio.h>
struct mys{
	int num;
	char name[10];
};
int main()
{
	int i;
	struct mys s1;
	s1.num = 5;
	s1.name = "Jaswanth";
	printf("My num is : %d",s1.num);
	for(i=0;i<10;i++)
	{
		printf("My num is : %d",s1.name[i]);
	}
}
#include<stdio.h>
struct mys{
	int num1,num2;
};
int main()
{
	struct mys s1,s2;
	printf("Enter the first number ");
	scanf("%d",&s1.num1);
	printf("Enter the second number ");
	scanf("%d",&s2.num2);
	printf("The sum of %d and %d is %d",s1.num1, s2.num2,s1.num1 + s2.num2);
}
#include<stdio.h>
int main()
{
	char *farther, *farthest;
	printf("%d..%d",sizeof(farther),sizeof(farthest));
}
#include<stdio.h>
int main()
{
	char *p;
	p = "Hello";
	printf("%cn",*&*p);
}
#include<stdio.h>
int main()
{
	char *p = NULL;
	char *q = 0;
	if(p)
	{
		printf(" p ");
	}
	else
	{
		printf("nullp");
	}
	if(q)
	{
		printf(" q ");
	}
	else
	{
		printf("nullq");
	}
}

#include<stdio.h>
int main()
{
	int i = 10;
	void *p = &i;
	printf("%d\n",(int)*p);
}
#include<stdio.h>
int main()
{
	int i = 10;
	void *p = &i;
	printf("%f",*(float *)p);
}

#include<stdio.h>
int main()
{
	int i = 10;
	void *p = &i;
	printf("%d\n",*(int *)p);
}

#include<stdio.h>
int main()
{
	int *ptr, a = 10;
	ptr = &a;
	*ptr = *ptr +1;
	printf("%d %d",*ptr,a);
}
#include<stdio.h>
int main()
{
	int i =5;
	int *p;
	p = &i;
	printf("%u %u",*&p,&*p);
	return 0;
}
#include<stdio.h>
struct book
{
	char name[20];
	int pages;
	float price;
};struct book *bptr;
int main()
{
	printf("%d",bptr->pages);
	printf("Enter your name");
	scanf("%s",bptr->name);
	printf("Name = %s",bptr->name);
}

#include<stdio.h>
#include<stdlib.h>
struct book
{
	char name[20];
};
struct book *bptr;
int main()
{
	scanf("%s",bptr->name);
	printf("Name = %s",bptr->name);
	
}



#include<stdio.h>
#include<stdlib.h>
struct book
{
	char name[20];
};
struct book *bptr;
int main()
{
	bptr = (struct book*)malloc(sizeof(struct book));
	scanf("%s",bptr->name);
	printf("Name = %s",bptr->name);
}
//			
#include<stdio.h>
#include<stdlib.h>
struct book
{
	char  name[20];
};
struct book b1,*bptr;
int main()
{
	bptr = &b1;
	scanf("%s",bptr->name);
	printf("Name = %s",bptr->name);
}
#include<stdio.h>
#include<stdlib.h>
struct book
{
	char  name[20];
	int pages;
	float prices;
};
struct book b1,*bptr;
int main()
{
	int i=10;
	bptr = &b1;
	scanf("%s",bptr->name);
	printf("Name = %s \n",bptr->name[i]);
	i++;
	scanf("%d",bptr->pages);
	printf("Pages = %d \n",bptr->pages[i]);
	i++;
	scanf("%f",bptr->prices);
	printf("Prices = %f \n",bptr->prices[i]);
}
//							FUCTIONS IN STRUCTURES
#include<stdio.h>
struct student
{
	int rollno;
	int marks;
};
int print_func(int,int);
void pass1(struct student var1);
int main()
{
	struct student var;
	scanf("%d %d",&var.rollno,&var.marks);
	print_func(var.rollno,var.marks);
	pass1(var);
}
int print_func(int roll,int mark)
{
	printf("Inside print function \n roll no is %d \n",roll);
	printf("mark is %d\n",mark);
}
void pass1(struct student var1)
{
	printf("Inside pass1\n roll number is %d",var1.rollno);
	printf("Mark is %d \n",var1.marks);
}
#include<stdio.h>
struct student
{
	int rollno;
	int marks[5];
}info;
void read(struct student info);
void disp(struct student info);
int main()
{
	
}
#include<stdio.h>
int main()
{
	int p=5,*ptr;
	ptr = &p;
	printf("%d",*(*ptr));
}
#include<stdio.h>
struct student
{
	int rollno;
	int marks[5];
}info;
void read(struct student info);
void disp(struct student info);
int main()
{
	read(info);
}
void read(struct student info)
{
	scanf("%d",&info.rollno);
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&info.marks[i]);
		disp(info);
	}
void disp(struct student info)
	{899
		int i;
		printf("The roll number is %d \n",info.rollno);
		printf("The marks are   ");
		for(i=0;i<5;i++)
		{
			printf("%d \t",info.marks[i]);
		}
	}
}
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of elements in the array ");
	scanf("%d",&num);
	int arr[num];
	int i,count;
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element of the array ",i+1);
		scanf("%d",&arr[i]);
		count = count + arr[i];
	}
	printf("The sum of all elements in the array is %d",count);
}
#include<stdio.h>
int main()
{	
	int i,j,a,b,c,d;

	printf("Enter the number of rows in the first matrix ");
	scanf("%d",&a);
	printf("Enter the number of cols in the first matrix ");
	scanf("%d",&b);
	printf("Enter the number of rows in the second matrix ");
	scanf("%d",&c);
	printf("Enter the number of cols in the second matrix ");
	scanf("%d",&d);
	int mat1[a][b],mat2[c][d];
	if(b==c)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				printf("Enter the element at index (%d %d) of the first matrix ",i+1,j+1);
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("This is the first matrix \n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				printf("%d\t",mat1[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("Enter the element at index (%d %d) of the second matrix ",i+1,j+1);
				scanf("%d",&mat2[i][j]);
			}
		}
		printf("This is the second matrix \n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d\t",mat2[i][j]);
			}
			printf("\n");
		}
		int mat3[a][b],k=0;
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				mat3[i][j]=0;
				for(k=0;k<b;k++)
				{
					mat3[i][j]= mat3[i][j]+mat1[i][k]*mat2[k][j];
				}
			}
		}
		printf("This is the matrix after finding the product \n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d\t",mat3[i][j]);
			}
			printf("\n");
		}	
	}
	else
	{
		printf("The matrix cannot be multiplied ");
	}
}

#include<stdio.h>
#include<string.h>
struct details{
	char name[30];
	char gen;
	int age;
	
};
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",c+d,c-d);
    return 0;
}
#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if(a>b&&a>c&&a>d)
    {
        return a;
    }
    if(b>a&&b>c&&b>d)
    {
        return b;
    }
    if(c>a&&c>b&&c>d)
    {
        return c;
    }
    if(d>a&&d>b&&d>c)
    {
        return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
}s;
int main()
{
	
}

















//============================================================================================================================================================
//																STRUCTURES IN C 
//=====================================================================================================================================================================
//							STORE INFORMATION AND DISPLAY IT USING STRUCTURES
#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
}s;
int main()
{
	printf("Enter information:\n");
	printf("Enter name: ");
	fgets(s.name,sizeof(s.name),stdin);
	printf("Enter roll number: ");
	scanf("%d",&s.roll);
	printf("Enter marks: ");
	scanf("%f",&s.marks);
	
	printf("Displaying information \n");
	printf("Name : %s\n",s.name);
	printf("Roll number: %d\n",s.roll);
	printf("Marks : %f\n",s.marks);
}

#include<stdio.h>
struct person{
	int age;
	float weight;
};
int main()
{
	struct person *personptr,person1;
	personptr = &person1;
	printf("Enter age: ");
	scanf("%d",&personptr->age);
	printf("Enter weight: ");
	scanf("%f",&personptr->weight);
	printf("Displaying \n");
	printf("Age : %d\n",personptr->age);
	printf("Weight : %f \n",personptr->weight);
	return 0;	
}


#include<stdio.h>
#include<stdlib.h>
struct person{
	int age;
	float weight;
	char name[30];
};
int main()
{
	struct person *ptr;
	int i,n;
	printf("Enter the number of persons ");
	scanf("%d",&n);
	//      allocating memory for n numbers of struct person 
	ptr = (struct person*)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++)
	{
		printf("Enter the name and age respectively ");
		scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
	}
	printf("Displaying information \n");
	for(i=0;i<n;i++)
	{
		printf("Name : %s\tAge : %d\n",(ptr+i)->name,(ptr+i)->age);
	}
}
#include<stdio.h>
struct student{
	char name[50];
	int age;
};
//function prototype
void display(struct student s);
int main()
{
	struct student s1;
	printf("Enter name: ");
	scanf("%s",&s1.name);
	printf("Enter age\n");
	scanf("%d",&s1.age);
	display(s1);
	return 0;
}
void display(struct student s){
	printf("\nDisplaying information\n");
	printf("Name = %s",s.name);
	printf("Age = %d",s.age);
}
#include<stdio.h>
int main()
{
	struct A{
		int x;
		double z;
		short int y;
	};
	printf("%d",sizeof(struct A));
	return 0;
}

#include<stdio.h>
int main()
{
	struct A{
		double z;
		int x;
		short int y;
		
	};
	printf("%d",sizeof(struct A));
}
#include<stdio.h>
int main()
{
	union A{
		double z;
		short int y;
		int x;
		long long int a;
		int c;
		float b;
	};
	printf("%d",sizeof(union A));
	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A structure to hold health profile information
typedef struct{
char lastName[30];
char firstName[30];
int id;
char gender[10];
int monthOfBirth;
int dayOfBirth;
int yearOfBirth;
} HealthProfile;

//Name in char and recieves first and last name of the patient
void setName(HealthProfile *HPP){
char lastName;
char firstName;
printf("Enter patient's first and last name: ");
scanf("%c", %c)
}

//ID is an int and HPP is a pointer used to assign variable
void setID(HealthProfile *HPP){
int id;
printf("Enter patient's ID: ");
scanf("%d", %id);
}

//Gender receives gender information for patient's profile
void setGender(HealthProfile *HPP){
char gender;
printf("Enter patient's gender: ");
scanf("%c", %c);
}

void setBD(int*month, int*day, int*year){
printf("Enter patient's DOB: ")

}

//Main function prints out of my patient's information
int main(){

// HealthProfile *HPP = malloc(sizeof(HealthProfile));
printf("\nName:\t %s \n", );
printf("ID:\t %d \n", );
printf("Gender:\t %c \n", );
printf("DOB:\t %d-%d-%d \n", );

}
#include<stdio.h>
struct{
	char *name;
	int age;
	int salary;
}emp1,emp2;
int manager()
{
	struct{
		char *name;
		int age;
		int salary;
	}manager;
	manager.age=27;
	if(manager.age>30)
	{
		manager.salary = 65000;
	}
	else
	{
		manager.salary = 55000;
	}
	return manager.salary;
}
int main()
{
	printf("Enter the salary of employee 1: ");
	scanf("%d",&emp1.salary);
	printf("Enter the salary of employee 2: ");
	scanf("%d",&emp2.salary);
	printf("Employee 1 salary is %d\n",emp1.salary);
	printf("Employee 2 salary is %d\n",emp2.salary);
	printf("Manager's salary is %d",manager());
	return 0;
}

#include<stdio.h>
struct point{
	int x,y,z;
};
int main()
{
	struct point p1 = {.y=0,.z=1,.x=2};
	struct point p2 = {.x=20};
	printf("x=%d,y=%d,z=%d\n",p1.x,p1.y,p1.z);
	return 0;
}
#include<stdio.h>
#include<string.h>
struct 	mys{
	int num;
	char letter;
	char name[30];
}s1;
int main()
{
	strcpy(s1.name,"Jaswanth Godavarthi");
	printf("My string : %s",s1.name);
}
#include<stdio.h>
struct student{
	int rollno;
	int age; 
	char name[30];
}s1;
int main()
{
	struct student s1 = {13,18,"Jaswanth Godavarthi"};
	printf("%d %d %s",s1.rollno,s1.age,s1.name);
}
#include<stdio.h>
struct book{
	char bookname[30];
	char author[30];
	int bookid;
	float price;
}b;
int main()
{
	int n;
	printf("Enter the number of books ");
	scanf("%d",&n);
	struct book b[n];
	int i;
	printf("Welcome to Dataflair Tutorials \n\n");
	printf("Enter the record of %d books\n ",n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d book name ",i+1);
		scanf("%s",b[i].bookname);
		printf("Enter the author of the %d book ",i+1);
		scanf("%s",b[i].author);
		printf("Enter the book id of the %d book ",i+1);
		scanf("%d",&b[i].bookid);
		printf("Enter the price of the %d book ",i+1);
		scanf("%f",&b[i].price);
	}
	printf("The details of the book are :\n");
	for(i=0;i<n;i++)
	{
		printf("==================================================================================================\n");
		printf("The name of the %d book is %s\n",i+1,b[i].bookname);
		printf("The author of the %d book is %s\n",i+1,b[i].author);
		printf("The id of the %d book is %d\n",i+1,b[i].bookid);
		printf("The price of the %d book is %f\n",i+1,b[i].price);
		printf("==================================================================================================");
		}	
		
		
}
#include<stdio.h>
struct person{
	char name[30];
	char state[30];
	char vaccin[3];
};
int main()
{
	int n;
	printf("Enter the number of patients ");
	scanf("%d",&n);
	struct person s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the first name of the %d patient ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the state of the %d patient",i+1);
		scanf("%s",&s[i].state);
		printf("Enter the vaccination of the %d patient ('Cov`' for Covishield),('V' for Covaxine),('S' for Sputhnik )",i+1);
		scanf("%s",&s[i].vaccin);
	}
	
}
//										ARRAY OF STRUCTURES
#include<stdio.h>
struct student{
	int rollno;
	char name[10];
};
int main()
{
	int i,num;
	printf("Enter the number of students ");
	scanf("%d",&num);
	struct student s[num];
	printf("Enter the records of the students \n");
	for(i=0;i<num;i++)
	{
		printf("Enter the roll number of the %d student ",i+1);
		scanf("%d",&s[i].rollno);
		printf("Enter the name of the %d student ",i+1);
		scanf("%s",s[i].name);
	}
	printf("\n This is the students information list \n");
	for(i=0;i<num;i++)
	{
		printf("The name of the %d student is %s\n",i+1,s[i].name);
		printf("The roll number of the %d student is %d\n",i+1,s[i].rollno);
	}
}
//										NESTED STRUCTURES IN C
#include<stdio.h>
struct person{
	int aadharno;
	char firstname[30];
	char lastname[30];
	char typeofv[30];
	int numberofdoses;
};
int main()
{	
	int i,num;
	printf("Enter the number of persons ");
	scanf("%d",&num);
	struct person s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the aadhar number of the %d student ",i+1);
		scanf("%d",&s[i].aadharno);
		printf("Enter the first name of the %d person ",i+1);
		scanf("%s",&s[i].firstname);
		printf("Enter the last name of the %d person ",i+1);
		scanf("%s",&s[i].lastname);
		printf("Enter the name of the vaccine of the %d person ",i+1);
		scanf("%s",s[i].typeofv);
		printf("Enter the number of doses taken of the %d person ",i+1);
		scanf("%d",&s[i].numberofdoses);
	}
	for(i=0;i<num;i++)
	{
		if(s[i].numberofdoses>=2)
		{
			printf("The person %d can travel interstate \n",i+1);
		}
		else if(s[i].numberofdoses==1&&  s[i].typeofv!=("sputhnik"))
		{
			printf("The person %d can travel inside district \n",i+1);
		}
		else if(s[i].numberofdoses>=1&& s[i].typeofv==("sputhnik"))
		{
			printf("The person %d can travel anywhere\n",i+1);
		}
		else
		{
			printf("Details didn't match\n");
		}
	}
	
}
#include<stdio.h>
struct pilotdetails{
	int unique;
	struct nameofthepilot{
		char firstname[30];
		char lastname[35];
	};
	char country[30];
	int hoursincourse;
	int hoursingoods;
	int hoursindomestic;
};
int main()
{
	int i,num;
	printf("Enter the number of pilots ");
	scanf("%d",&num);
	struct pilotdetails s[num];
	struct pilotdetails.nameofthepilot s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the first name of the %d pilot ");
		scanf("%s",s[i].nameofthepilot.firstname);
	}
}

#include <stdio.h>
struct details{
    
    
    struct name {
        char firstname;
        char lastname;
        
    };
    struct name n1;
    int num;
    char country[20];
    int course;
    int goods;
    int domestic;
    
};

int main()
{
    int sum;
    { 
    int n;
    printf("The number of persons:");
    scanf("%d",&n);
struct details d[n];
    int i;
    for(i=0;i<n;i++)
    
    {
    printf("firstname is:");
    scanf("%s",&d[i].n1.firstname);
    printf("lastname is:");
    scanf("%s",&d[i].n1.lastname);
        
        
        
    printf("unique number is:");
    scanf("%d",&d[i].num);
        
    printf("country name is:");
    scanf("%s",d[i].country);
    printf("course hours is:");
    scanf("%d",&d[i].course);
    printf("goods hours  is:");
    scanf("%d",&d[i].goods);
    printf("domestic hours is:");
    scanf("%d",&d[i].domestic);
    sum=d[i].course+d[i].goods+d[i].domestic;
    printf("the sum is %d\n",sum);
    
    
    
    
    if (sum >=2000 && sum<=3000)
    {
        printf("The pilot having the uniquenumber %d is a good pilots",d[i].num);
    }
    else if (sum >3000)
    {
      printf("The pilot having the uniquenumber %d is passenger pilot",d[i].num);
    }
    else 
    {
       printf("The pilot having the uniquenumber %d is not a trained pilot",d[i].num);
        
    } 
    
    
   
    }printf("\n");
    
    
    
}

}#include<stdio.h>
#include<string.h>
struct student_enrolment{
	int rollno;
	char studentname[30];
	char deptname[5];
	struct doj{
		int date;
		int month;
		int year;
		char fee_paid[1];
	};
	struct doj d;
};
int main()
{
	int i,num;
	printf("Enter the number of students ");
	scanf("%d",&num);
	struct student_enrolment s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the roll number of the %d student ",i+1);
		scanf("%d",&s[i].rollno);
		printf("Enter the name of the %d student ",i+1);
		scanf("%s",&s[i].studentname);
		printf("Enter the dept name of the %d student ",i+1);
		scanf("%s",&s[i].deptname);
		printf("Enter the date of joining of the %d student ",i+1);
		scanf("%d",&s[i].d.date);
		printf("Enter the month of joining of the %d student ",i+1);
		scanf("%d",&s[i].d.month);
		printf("Enter the year of joining of the %d student ",i+1);
		scanf("%d",&s[i].d.year);
		printf("Enter 'y' if student %d has paid the fee else 'n'",i+1);
		scanf("%s",&s[i].d.fee_paid);
	}
	printf("\n==================================================================================================================\n\n");
	int count = 0;
	char dept[5];
	printf("Enter the department name to find the number of students ");
	scanf("%s",&dept);
	for(i=0;i<num;i++)
	{	
		if(strcmp(s[i].deptname,dept))
		{
			count = count + 1;
		}
	}
	printf("The total number of students in %s dept is %d",dept,count);
	printf("\n=====================================================================================================================\n\n");
	printf("\n\n===================================================================================================================\n\n");
	printf("These are the students who joined after july 2013 and not paid the fee ");
	char qe[2]={'y'};
	for(i=0;i<num;i++)
	{
		if(s[i].d.month>7 && s[i].d.year>2013)
		{
			if(strcmp(s[i].d.fee_paid,qe)){
			printf("\n%s\t%d\t%s\n",s[i].studentname,s[i].rollno,s[i].deptname);}
		}
		else{
			printf("hello world \n\n");
		}
	}
	printf("\n\n==========================================================================================================================\n\n");
}
#include<stdio.h>
#include<string.h>
struct patient_registration
{
	char p_name[20];
	int p_id;
}p[20];
struct doa{
	int date;
	int month;
	int year;
	char dis_name[10];
	char doc_name[10];
}d[20];

int main(){
	int i,n;
	printf("no:of patient details you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("!!!!Patient Registration!!!!");
	printf("\n Please Enter the %d.Patient name: ",i+1);
	scanf("%s",&p[i].p_name);
	printf("\n Please Enter the Patient ID: ");
	scanf("%d",&p[i].p_id);
	printf("\n Enter the DATE OF APPOINTMENT in the follwing format(02-05-2003):\n");
	scanf("%d-%d-%d",&d[i].date,&d[i].month,&d[i].year);
	printf("\n Please Enter The Disease Name: ");
	scanf("%s",&d[i].dis_name);
	printf("\n Enter the Required Doctor Name: ");
	scanf("%s",&d[i].doc_name);
	printf("\n\n");
}
	
printf("\n Patients Who booked the Appointment on 19-07-2021 are: ");
	for(i=0;i<n;i++){
		if(d[i].date==19 && d[i].month==07 && d[i].year==2021)
		{
			printf("\n%dpatient name:%s\tpatient ID:%d\t booked appointment with DOCTOR:%s",i+1,p[i].p_name,p[i].p_id,d[i].doc_name);
		}
		
	}
	printf("\n\n\n");
	
	
	
	
	
	
	char dis_ser[20];
	int result;
	printf("\n Enter the Disease name you want to search : ");
	scanf("%s",dis_ser[20]);
	for(i=0;i<n;i++)
	{	
		if(strcmp(d[i].dis_name,dis_ser)==0){
			printf("%d.%s-%s",i+1,p[i].p_name,dis_ser[10]);
		}
		else {
			printf("no patient with this disease");
		}
	}
return 0;
}
//										ENUMERATION
//							SYNTAX:  TYPE_NAME{VALUE1,VVALUE2,.........................VALUEN}
//						enum boolean
//						{
//							false;
//							true;
//						};
//						enum boolean check;
#inlcude<stdio.h>
enum suit{
	club = 0;
	diamonds = 10;
	hearts = 20;
	spades = 3;
};
//  Here the default values respectively for diamonds and hearts would be 1 and 2.However, the default values can be changed as above.
 
#include<stdio.h>
enum week{monday,tuesday,wednesday,thursday,friday=10,saturday,sunday};
int main(void){
	enum week today;
	int day;
	for(day = monday;day<=sunday;day++)
	{
		printf("\n%d",day);
	}
	printf("\n%d",monday);
	return 0;
}
#include<stdio.h>
enum alldays{monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
int main(void){
	enum alldays aday;
	int i;
	printf("Please enter day of the week(1-7)\n");
	scanf("%d",&i);
	aday = i-1;
	if(aday == sunday || aday == saturday)
	{
		printf("It is a weekend :)\n");
	}
	else
	{
		printf("It is not a weekend :(");
	}
}
//	
#include<stdio.h>														
struct student{
	int rollnumber;
	char name[30];
	char gender;
};
int main()
{	
	int i,num;
	printf("Enter the number of students ");
	scanf("%d",&num);
	struct student s[num];
	for(i=0;i<num;i++)
	{
		printf("\nEnter the roll number of the %d student ",i+1);
		scanf("%d",&s[i].rollnumber);
	}
}
#include<stdio.h>
struct account{
	char name[30];
	int accno;
	char type[30];
	float balance;
};
int main()
{
	int i,num;
	printf("Enter the number of account holders ");
	scanf("%d",&num);
	struct account s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the account number of the %d person ",i+1);
		scanf("%d",&s[i].accno);
		printf("Enter the balance of the %d person ",i+1);
		scanf("%f",&s[i].balance);
		printf("Enter the name of the %d person ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the type of account for the %d person ",i+1);
		scanf("%s",&s[i].type);
	}
	printf("\n The following table shows the details of all the persons \n\n");
	printf("========================================================================================\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t\t%s\t\t%s\t\t%.2f\n",s[i].accno,s[i].name,s[i].type,s[i].balance);
	}
	printf("\n=======================================================================================\n");
	int check,count=0,money;
	for(i=0;i<num;i++)
	{
		printf("%s, Enter 1 to withdraw the money and 0 to deposit the money ",s[i].name);
		scanf("%d",&check);
		if(check == 0)
		{
			printf("Enter the amount of money you want to deposit ");
			scanf("%d",&money);
			s[i].balance=s[i].balance + money;
		}
		if(check == 1)
		{
			printf("Enter the amount of money you want to withdraw ");
			scanf("%d",&money);
			s[i].balance=s[i].balance - money;
		}
		if(s[i].balance>count)
		{
			count = s[i].balance;
		}
		money = 0;
	}
	for(i=0;i<num;i++)
	{
		if(count == s[i].balance)
		{
			printf("\n%s has the highest balance - %d\n",s[i].name,count);
		}
	}
	
	
}




#include<stdio.h>
struct account{
	char name[30];
	int accno;
	char type[30];
	float balance;
};
int main()
{
	int i,num;
	printf("Enter the number of account holders ");
	scanf("%d",&num);
	struct account s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the account number of the %d person ",i+1);
		scanf("%d",&s[i].accno);
		printf("Enter the name of the %d person ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the type of account for the %d person ",i+1);
		scanf("%s",&s[i].type);
		printf("Enter the balance of the %d person ",i+1);
		scanf("%f",&s[i].balance);
	}
	printf("\n The following table shows the details of all the persons \n\n");
	printf("========================================================================================\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t\t%s\t\t%s\t\t%.2f\n",s[i].accno,s[i].name,s[i].type,s[i].balance);
	}
	printf("\n=======================================================================================\n");
	int check,count=0,money;
	for(i=0;i<num;i++)
	{
		printf("%s, Enter 1 to withdraw the money and 0 to deposit the money ",s[i].name);
		scanf("%d",&check);
		if(check == 0)
		{
			printf("Enter the amount of money you want to deposit ");
			scanf("%d",&money);
			s[i].balance=s[i].balance + money;
		}
		if(check == 1)
		{
			printf("Enter the amount of money you want to withdraw ");
			scanf("%d",&money);
			s[i].balance=s[i].balance - money;
		}
		if(s[i].balance>count)
		{
			count = s[i].balance;
		}
		money = 0;
	}
	for(i=0;i<num;i++)
	{
		if(count == s[i].balance)
		{
			printf("\n%s has the highest balance - %d\n",s[i].name,count);
		}
	}
	
	
}
#include <stdio.h>
#include <string.h>	

struct package{
    int id;
    char name[20];
    struct dd{
        int day;
        int month;
        int year;
    }date;
    char payment_mode[20];
    float amount;
    char address[50];
};

int input_item(struct package *p);
int display(struct package packages[]);
int update(struct package p[]);
int cancel(struct package p[]);
int income(struct package p[]);

int main(){
    int choice = 0;
    struct package packages[100];
    struct package *p = packages;

    while(choice != 6){
        printf("\nwhat do you want to do:\n 1. input new item\n 2.display all items\n 3.update an DD\n 4.Cancel order\n 5.Monthly income\n 6.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                input_item(p);
                break;
/*           case 2:
                display(packages);
                break;
            case 3:
                update(packages);
                break;
            case 4:
                cancel(packages);
                break;
            case 5:
                income(packages);
                break;
            default : //case 2 will also be excecuted by this
                display(packages);
                break;
        }
        p++;

    }
}

int input_item(struct package *p){
    printf("enter the id:\t");
    scanf("%d", &p->id);
    printf("enter the name:\t");
    scanf("%s", p->name);
    printf("enter the DD(dd/mm/yyyy):\t");
    scanf("%d/%d/%d",&p->date.day,&p->date.month,&p->date.year);
    printf("enter payment mode:\t");
    scanf("%s", p->payment_mode);
    printf("enter the amount:\t");
    scanf("%f", &p->amount);
    printf("enter the address:\t");
    scanf("%s", p->address);
}

int display(struct package packages[]){
    
    for(int i = 0 ; i < 100; i++){
        if(packages[i].id == 0 ) continue;
        printf("%d\t%s\t%d/%d/%d\t%s\t%.2f\t%s\n", packages[i].id, packages[i].name, packages[i].date.day, packages[i].date.month, packages[i].date.year, packages[i].payment_mode, packages[i].amount, packages[i].address);
    }
}
int update(struct package p[]){
    int id;
    printf("enter the product id:\t");
    scanf("%d", &id);
    for(int i=0; i < 100; i++){

        if(p[i].id == id){
            printf("enter the new DD:\t");
            scanf("%d/%d/%d", &p[i].date.day, &p[i].date.month, &p[i].date.year);
        }
        break;
    }

}

int cancel(struct package p[]){
    int id;
    printf("enter the product id:\t");
    scanf("%d", &id);
    for(int i=0; i < 100; i++){

        if(p[i].id == id){

            for(int j = i; j < 100 - 1; j++){
                    p[j] = p[ j + 1 ];
                }
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
int d6(int){
	int diceeval[4];
	int i;
	for(i=0;i<4;i++)
	{
		int d;
		d = rand()%7;
		if(d==0)
		{
			d = rand()%7;
		}
		diceeval[i]=d;
	}
	int temp=0,j,sum;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(diceeval[i]<diceeval[j])
			{
				temp = diceeval[i];
				diceeval[i] = diceeval[j];
				diceeval[j] = temp;
			}
		}
	}
	sum = 0;
	for(i=0;i<3;i++)
	{
		sum = sum + diceeval[i];
	}
	return sum;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],j,i;
	scanf("%s",name);
	j = strlen(name);
	for(i=j-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
}


#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>0)
		{
			printf("positive\n");
		}
		if(a[i]<0)
		{
			printf("negative\n");
		}
		if(a[i]==0)
		{
			printf("zero\n");
		}
	}
}
#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d,",&a[i]);
	}
	int small=a[0],large=a[0];
	for(i=0;i<num;i++)
	{
		if(a[i]>large)
		{
			large = a[i];
		}
		if(a[i]<small)
		{
			small = a[i];
		}
	}
	printf("The largest element in the array is %d\n",large);
	printf("The smallest element in the array is %d\n",small);
	
}



//		FUNCTIONS IN C
#include<stdio.h>
int prime(int n);
int main()
{
	int n1,n2,i,flag;
	printf("Enter two positive integers ");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		n1 = n1+n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}
	printf("Prime numbers between %d and %d are ",n1,n2);
	for(i = n1+1;i<n2;i++)
	{
		flag = prime(i);
		if(flag == 1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
	}												
int prime(int n)
{
	int j,flag = 1;
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

#include<stdio.h>
int main()
{
	function();
	return 0;
}
void function()
{
	printf("Fuction in C is awesome ");
}

#include<stdio.h>
int main()
{
	main();
	return 0;
}
#include<stdio.h>
int add(int a,int b)
{
	int sum;
	sum = a + b;
	return sum;
}
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("%d",add(a,b));
}
#include<stdio.h>
void introduction()
{
	printf("Hello world\n");
	printf("My name is Jaswanth godavarthi\n");
	printf("How are yoy?");
}
int main()
{
	introduction();
	return 0;	
}								//			functions will not be enough to swap two numbers in c
#include<stdio.h>
void swap(int c, int d)
{
	int temp;
	temp = c;
	c = d;
	d = temp;
}
int main()
{
	int a,b;
	printf("Enter 1st number ");
	scanf("%d",&a);
	printf("Enter 2nd number ");
	scanf("%d",&b);
	printf("The numbers before swapping are %d and %d\n",a,b);
	swap(a,b);
	printf("The numbers after swapping are %d and %d\n",a,b);
}
#include<stdio.h>
void swapnum(int *var1, int *var2)
{
	int tempnum;
	tempnum = *var1;
	*var1 = *var2;
	*var2 = tempnum;
}
int main()
{
	int num1,num2;
	printf("Enter the first number ");
	scanf("%d",&num1);
	printf("Enter the second number ");
	scanf("%d",&num2);
	printf("The numbers before swapping are %d and %d\n",num1,num2);
	swapnum(&num1,&num2);
	printf("The numbers after swapping are %d and %d\n",num1,num2);
}
//								PRACTICE for ENDSEM
#include<stdio.h>
int main()
{

int i,j,num;
printf("Enter the value of n for the n*n matrix ");
scanf("%d",&num);
int mat[num][num];
int row,col;
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		printf("Enter the value of the element at index (%d,%d)",i+1,j+1);
		scanf("%d",&mat[i][j]);
		}
}
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		
		if(mat[i][j]==1)
		{
			printf("value of i and j is %d and %d\n",i,j);
			row = i;
			
			for(i=0;i<num;i++)
			{
				mat[row][i]=1;
			}
		}
		
		
		}
		row =0;
		
}
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		if(mat[i][j]==1)
		{
			printf("The value of i and j is %d and %d",i,j);
			col = j;
			for(j=0;j<num;j++)
			{
				mat[j][col]=1;
			}
		}
	}
}
printf("\nThe matrix after changing is \n");
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
	printf("%d\t",mat[i][j]);		
	}
	printf("\n");
}
return 0;
}
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day of the week(1-7): ");
	scanf("%d",&day);
	switch(day){
		case 1: printf("Sunday\n");
		break;
		case 2: printf("Monday\n");
		break;
		case 3: printf("Tuesday\n");
		break;
		case 4: printf("Wednesday\n");
		break;
		case 5: printf("Thursday\n");
		break;
		case 6: printf("Friday\n");
		break;
		case 7: printf("Saturday\n");
		break;
	}
}
#include<stdio.h>
int main()
{
	char letter;
	printf("Enter a character : ");
	scanf("%c",&letter);
	switch(letter){
		case 'C':
		case 'c': printf("Cruiser");
		break;
		case 'b':
		case 'B': printf("Battle ship");
		break;
		case 'd':
		case 'D': printf("Destroyer ");
		break;
		case 'f':
		case 'F': printf("Frigate ");
		break;
		default: printf("Wrong character entered :(");
		break;
	}
}
#include<stdio.h>
int main()
{
	int i = 2;
	switch(i){
		case 1: printf("Case 1");
		case 2: printf("Case 2");
		case 3: printf("Case 3");
		case 4: printf("Case 4");
	}
}
#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature ");
	scanf("%d",&temp);
	if(temp<=0)
	{
		printf("It is very very cold ");
	}
	else if(temp>0 && temp<10)
	{
		printf("Its cold ");
	}
	else if(temp<=20 && temp > 10)
	{
		printf("Its cool out ");
	}
	else if(temp>20 && temp<=30)
	{
		printf("Its warm ");
	}
	else if(temp > 30)
	{
		printf("Its hot ");
	}
}
#include<stdio.h>
int main()
{

int i,j,num;
printf("Enter the value of n for the n*n matrix ");
scanf("%d",&num);
int mat[num][num];
int row,col;
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		do
		{
		printf("Enter the value of the element at index (%d,%d)",i+1,j+1);
		scanf("%d",&mat[i][j]);
	}while(mat[i][j]!=0 && mat[i][j]!=1);
		}
}
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		
		if(mat[i][j]==1)
		{
			printf("value of i and j is %d and %d\n",i,j);
			row = i;
			
			for(i=0;i<num;i++)
			{
				mat[row][i]=1;
			}
		}
		
		
		}
		row =0;
		
}
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		if(mat[i][j]==1)
		{
			printf("The value of i and j is %d and %d",i,j);
			col = j;
			for(j=0;j<num;j++)
			{
				mat[j][col]=1;
			}
		}
	}
}
printf("\nThe matrix after changing is \n");
for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
	printf("%d\t",mat[i][j]);		
	}
	printf("\n");
}
return 0;
}

#include<stdio.h>
struct student{
	int num;
	char firstname[30];
	char lastname[30];
}s[12];
void emptyseats();
void assign();
void del();
void print();
void display();
void yn(void);
void yn(void){
	char check;
	printf("Do you want to try again 'y' or 'n' ");
	scanf("%c",&check);
	if(check == 'y' || check == 'Y')
	{
		display();
	}	
}
int main()
{
	display();
	
}
void emptyseats(){
	printf("HI");
	yn();
}
void assign(){
	printf("Bye");
}
void del(){
	printf("HI");
}
void print(){
	printf("HI");
}
void display()
{
	char num;
	printf("Enter a character\n");
	scanf("%c",&num);
	switch(num){
		case 'a':
		case 'A': emptyseats();
		break;
		case 'b':
		case 'B': assign();
		break;
		case 'c':
		case 'C':del();
		break;
		case 'd':
		case 'D':print();
		break;		
	}
}
#include<stdio.h>
struct student{
	int rollno;
	struct dob{
		int date;
		int month; 
		int year;
	}sp;
}s;
int main()
{
	printf("Enter the roll number of the student ");
	scanf("%d",&s.rollno);
}
























#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[3][3],arr1[3][3];
	int i,j,k,l;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
			arr1[i][j]=arr[i][j];
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (arr[i][j]==1){
				for (k=0;k<3;k++){
					arr1[i][k]=1;
					arr1[k][j]=1;
				}
			}
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3
		;j++){
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
}


#include<stdio.h>
struct student{
	int rollno;
	struct dob{
		int date;
		int month; 
		int year;
	}sp[2];
}s[2];
int main()
{	
	int i;
	for(i=0;i<2;i++)
	{
	printf("Enter the roll number of the student ");
	scanf("%d",&s[i].rollno);
	printf("Enter teh date of dob ");
	scanf("%d",&s[i].sp[i].date);
	printf("Enter the month of the dob ");
	scanf("%d",&s[i].sp[i].month);
	printf("Enter the year of the dob ");
	scanf("%d",&s[i].sp[i].year);
	}
	printf("\n\n\n");
	printf("These are the details of the student\n");
	for(i=0;i<2;i++)
	{
	
	printf("Roll number is %d and dob is %d-%d-%d",s[i].rollno,s[i].sp[i].date,s[i].sp[i].month,s[i].sp[i].year);
}
}


#include<stdio.h>
struct library{
	char bookname[30];
	char author[30];
	char publisher[30];
	int copies;
	float price;
};
	void buyordon(struct library *s[10]);
int main()
{
	int num,i;
	printf("Enter the number of books to be stored ");
	scanf("%d",&num);
	struct library s[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the name of the %d book ",i+1);
		scanf("%s",s[i].bookname);
		printf("Enter the author of the %d book ",i+1);
		scanf("%s",s[i].author);
		printf("Enter the publisher of the %d book ",i+1);
		scanf("%s",s[i].publisher);
		printf("Enter the number of copies of the %d book ",i+1);
		scanf("%d",&s[i].copies);
		printf("Enter the price of the %d book ",i+1);
		scanf("%f",&s[i].price);
	}
	printf("\n\n\n");
	printf("Book name\tauthor\t\tpublisher\t\tcopies\t\tprice\n");
	for(i=0;i<num;i++)
	{
		
		printf("%s\t\t%s\t\t%s\t\t%d\t\t%f\t\t\n",s[i].bookname,s[i].author,s[i].publisher,s[i].copies,s[i].price);
	}
	
}
void buyordon(struct library *s[10]){
	int j;
	printf("Press 1 to add new books to the stack and press 2 to donate books to the stack ");
	scanf("%d",&j);
	if(j==1)
	{
		for(i=0;i<num;i++)
		{
			
				
		}
	}
	
}
#include<stdio.h>

float average(float c, float d, float e);
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	printf("The sum of all the three numbers is %.2f",average(a,b,c));
}
float average(float c, float d, float e){
	float r;
	r = (c + d + e)/3;
	return r;
}
// 				SWAP TWO NUMBERS USING FUNCTIONS 
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The numbers before shifting are %d and %d ",a,b);
	swap(&a,&b);	
	printf("The numbers after shifting are %d and %d ",a,b);	
}
void swap(int *x, int *y)
{
	int temp=0;
	temp = *x;
	*x=*y;
	*y = temp;
	
}
#include<stdio.h>
struct book{
	char name[20];
}*ptr;
int main()
{
	scanf("%s",ptr->name);
	printf("Name : %s",ptr->name);
}
#include<stdio.h>
#include<stdlib.h>
struct book{
	char name[20];
}*ptr;
int main()
{
	ptr= (struct book*)malloc(sizeof(struct book));
	scanf("%s",ptr->name);
	printf("%s",ptr->name);
}
#include<stdio.h>
struct studnet{
	char name[30];
}p,*a;

int main()
{
	a = &p;
	scanf("%s",a->name);	
	printf("%s",a->name);	
}
#include<stdio.h>
void fun(int a[10][10]);
int main()
{
	int a[10][10];
	fun(a);
}
void fun(int a[10][10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("Enter the element at index %d,%d",i+1,j+1);
			scanf("d",&a[i][j]);
		}
	}
}
#include<stdio.h>
#include<string.h>

int main()
{
	struct student{
		int id;
		char name[20];
		float percentage;
	}record;
	record.id=1;
	strcpy(record.name,"Raju");
	record.percentage = 98.5;
	void func(struct student record);
	func(record);
}
void func(struct student record)
{
	printf("Id is %d\n",record.id);
	printf("Name is %s\n",record.name);
	printf("Percentage is %f\n",record.percentage);
}
#include<stdio.h>
int main()
{
	int a=0;
	do{
		printf("%d",a);
		a++;
	}while (a<5);
}
#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num-1;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=num-1;i>0;i--)
	{
		printf("%d ",arr[i]);
	}
}


//					CODECHEF SAMPLE PROBLEM 1
#include<stdio.h>
int main()
{
	int num;
	// to take the input of number of test cases
	scanf("%d",&num);
	int x[num],y[num],a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>=x[i] && a[i]<y[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO");
		}
	}
}
//              CODECHEF SAMPLE PROBLEM PROBLEM 3
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num],y[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",x[i]*y[i]);
	}
}


//				CODECHEF SAMPLE PROBLEM 4
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",2*x[i]*5);
	}
}
// 			CODECHEF SAMPLE PROBLEM 5
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num],y[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i])
		{
			printf("%d\n",y[i]);
		}
		else if(x[i]<y[i])
		{
			printf("%d\n",x[i]);
		}
		else
		{
			printf("%d\n",x[i]);
		}
	}
}
//			CODECHEF SAMPLE PROBLEM 6
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num],y[num],z[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d",x[i]-y[i]+z[i]);
	}
}

//			CODECHEF SAMPLE PROBLEM 7
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",2*x[i]);
	}
}

//			CODECHEF SAMPLE PROBLEM 8
#include<stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c>1000)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}

//			CODECHEF SAMPLE PROBLEM 9
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x[num],count[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]<=1000&& x[i]>100)
		{
			count[i]=x[i]-25;
		}
		else if(x[i]<=5000&& x[i]>1000)
		{
			count[i]=x[i]-100;
		}
		else if(x[i]>5000)
		{
			count[i]=x[i]-500;
		}
		else
		{
			count[i]=x[i];
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",count[i]);
	}
}


//			CODECHEF SAMPLE PROBLEM 10
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]==b[i])
		{
			printf("Yes\n");
		}
		else if((a[i]%2==0)&&(b[i]%2==0))
		{
			printf("No\n");
		}
		else if((a[i]%b[i]==0)||(b[i]%a[i]==0))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 11
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",x-y);
}

//			CODECHEF SAMPLE PROBLEM 12
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],n[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&n[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",(x[i]/10)*n[i]);
	}
}

//			CODECHEF SAMPLE PROBLEM 13
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i])
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 14
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i])
		{
			printf("x[i]\n");
		}
		else
		{
			printf("y[i]\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 15
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d %d",a-b,(a-b)-c);
}

//			CODECHEF SAMPLE PROBLEM 16
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>=y[i])
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 17
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}

//			CODECHEF SAMPLE PROBLEM 18
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]<y[i])
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
}

//			SAMPLE PROBLEM 19
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",10*x[i]+90*y[i]);
	}
}

//			CODECHEF SAMPLE PROBLEM 20
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",x[i]*y[i]);
	}
}

//			CODECHEF SAMPLE PROBLEM 21
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num],z[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i]&&y[i]>z[i])
		{
			printf("%d\n",y[i]);
		}
		else if(y[i]>x[i]&&x[i]>z[i])
		{
			printf("%d\n",x[i]);
		}
		else if
		{
			printf("%d\n",z[i]);
		}
}
}

//			CODECHEF SAMPLE PROBLEM 22
#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y && x>z)
	{
		if(y>z)
		{
			printf("%d",y);
		}
		else
		{
			printf("%d",z);
		}
		}	
	else if(y>x&&y>z)
	{
		if(x>z)
		{
			printf("%d",x);
		}
		else
		{
			printf("%d",z);
		}
	}
	else if(z>x && z>y)
	{
		if(x>y)
		{
			printf("%d",x);
		}
		else
		{
			printf("%d",y);
		}
	}
}

//			HPOJ SAMPLE QUESTION 1
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d",x+y);
}

//			CODE CHEF SAMPLE PROBLEM 24
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num],z[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i] && x[i]>z[i])
	{
		if(y[i]>z[i])
		{
			printf("%d\n",y[i]);
		}
		else
		{
			printf("%d\n",z[i]);
		}
		}	
	else if(y[i]>x[i]&&y[i]>z[i])
	{
		if(x[i]>z[i])
		{
			printf("%d\n",x[i]);
		}
		else
		{
			printf("%d\n",z[i]);
		}
	}
	else if(z[i]>x[i] && z[i]>y[i])
	{
		if(x[i]>y[i])
		{
			printf("%d\n",x[i]);
		}
		else
		{
			printf("%d\n",y[i]);
		}
	}
	}
	
}

//			CODECHEF SAMPLE PROBLEM 25
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i])
		{
			printf("%d\n",x[i]-y[i]);
		}
		else
		{
			printf("0\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 25
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>30)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}

//			CODECHEF SAMPLE PROBLEM 26
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int x[num],y[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<num;i++)
	{
		if(x[i]>y[i])
		{
			printf("SECOND\n");
		}
		else if(x[i]<y[i])
		{
			printf("FIRST\n");
		}
		else
		{
			printf("ANY\n");
		}
		
	}
}

//			HPOJ SAMPLE PROBLEM 2
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int o[num],e[num],t[num];
	int coo,coe;
	for(i=0;i<num;i++)
	{
		scanf("%d",&t[i]);
	}
	for(i=0;i<num;i++)
	{
		if(num[i]%2==0)
		{
			num[i]=
		}
	}
}

//			CODECHEF SAMPLE PROBLEM
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num],c[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<num;i++)
	{
		if((b[i]+(2*c[i]))<=a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	
	
	
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",((7*a[i])-b[i]));
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num],c[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>b[i]&&a[i]>c[i])
		{
			printf("Alice\n");
		}
		else if(b[i]>a[i]&&b[i]>c[i])
		{
			printf("Bob\n");
		}
		else
		{
			printf("Charlie\n");
		}
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<num;i++)
	{
		if((a[i]+b[i])%2==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int t[i],a[i],b[i],c[i];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d %d",&t[i],&a[i],&b[i],&c[i]);
	}
	for(i=0;i<num;i++)
	{
		if(t[i]-(a[i]+b[i])>=c[i])
		{
			printf("0\n");
		}
		else if(t[i]-(a[i]+b[i])<c[i])
		{
			if(a[i]>b[i])
			{
				if(t[i]-b[i]>=c[i])
				{
					printf("1\n");
				}
				else
				{
					printf("2\n");
				}
			}
			if(a[i]<b[i])
			{
				if(t[i]-a[i]>=c[i])
				{
					printf("1\n");
				}
				else
				{
					printf("2\n");
				}
			}
		}
		
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]%5!=0)
		{
			printf("-1\n");
		}
		else
		{
			if(a[i]%10==0)
			{
				printf("%d\n",a[i]/10);
			}
			else
			{
				printf("%d\n",(a[i]/10)+1);
			}
		}
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i,count=0;
	int len,a[num];
	int j=0;
	int b[num];
	for(i=0;i<num;i++)
	{
		int len;
		scanf("%d",&len);
		for(i=0;i<len;i++)
		{
			scanf("%d",&a[i]);	
		}
		for(i=0;i<len;i++)
		{
			if(a[i]>=10&& a[i]<=60)
			{
				count = count + 1;
			}
		}

		b[j]=count;
		j=j+1;
		count = 0;
	}
	for(j=0;j<num;j++)
	{
		printf("%d\n",b[j]);
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",(a[i]*60)/20);
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num];
	for(i=0;i<num;i)
	{
		printf("hello%d\n",num);
		num = num + 1;
	}
	
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int a[num],b[num],c[num];
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",4*a[i]+2*b[i]);
	}
}


#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int a[num],b[num],c[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",(b[i]-c[i])*a[i]);
	}
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		for(i=0;i<num;i++)
		{
			
		}
	}
}
// create the program, save it as .java and try it notepad   public,private and protective
//boot l
#include<stdio.h>
int main()
{
	printf("Hello World!");
	return 0;	
}
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int a[num];
    int i,sum = 0;
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("The array elements are ");
    for(i=0;i<num;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nsum is %d",sum);
}


#include<stdio.h>
int main()
{
	printf("Hello World");
}

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num>0)
    {
        printf("positive");
    }
    if(num == 0)
    {
        printf("zero");
    }
    if(num< 0)
    {
        printf("negative");
    }
}


#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int a;
	a = num % 10;
	while(num>0)
	{
		num = num/10;
		if(num==1 || num==2 || num==3 || num==14 || num==5 || num==6 || num==7 || num==8 || num==9 )
		{
			int b;
			b = num;
			printf("%d",b);
		}
	}
	int i;
	
}
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    /* Input number from user */
    scanf("%d", &num);

    /* Find last digit */
    lastDigit  = num % 10;

    /* Find total number of digit - 1 */
    digits     = (int)log10(num); 

    /* Find first digit */
    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("%d", swappedNum);

    return 0;
}







































