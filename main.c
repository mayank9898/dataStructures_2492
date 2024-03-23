



# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the a");
# //     scanf("%d",&a);
# //     return 0;
# // }


# // #include <stdio.h>
# // int main(){
# //    int i, j, N;
# //    printf("Enter number of rows: ");
# //    scanf("%d", &N);
# //    for(i=1; i<=N; i++) {
# //       for(j=1; j<=N; j++){
# //          if(i==1 || i==N || j==1 || j==N){
# //             printf("*");
# //          }
# //          else{
# //             printf(" ");
# //          }
# //       }
# //       printf("\n");
# //    }
# //    return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a,n;
# //     printf("enter the value of ");
# //     scanf("%d%d",&a,&n);
# //     int c=a*n;
# //     printf("multiplication %d",c);
# //     return 0;
# // }


# // #include<stdio.h>
# // main(void){
# //     funct a,b;
# //     printf("enter the value of ");
# //     scanf("%d%d\n",&a,&b);
# //     int c = a/b;
# //     printf("division %d",c);
# // }


# // #include<stdio.h>
# // int main()
# // {
# //     int rows = 5;
# //     for ( int i=0;  i < rows ; i++ ) {
# //         for ( int j=0;  j < 2*(rows-i) - 1 ; j++ ) {
# //             printf(" ");
# //         }
# //             for(int k=0 ; k<=i ; k++){
# //                 printf("# ");
# //              }
# //             printf("\n");
# //     }
# //     return 0;
# //  } 


# // #include<stdio.h>
# //  main(){
# //     printf("mayank dubey");   
# // }


# // #include <stdio.h>
# // int main()
# // {
# // int rows = 5;
# //     for (int i = 0; i < rows; i++) {
# //         for (int j = 0; j <= i; j++) {
# //             printf("* ");
# //         }
# //         printf("\n");
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int rows = 5;
# //     for(int i=0 ; i<rows ;i++){
# //         for(int j=0 ; j<=2*(rows-i)-1 ;j++){
# //             printf(" ");
# //             }
# //             for(int k=0; k<i;k++){
# //                 printf("@ ");
# //             }
# //             printf("\n");
# //     }
# //     return 0;
# // }


# // // alphabate
# // #include<stdio.h>
# // int main(){
# //     char ch;
# //     printf("alphabate a-z \n");
# //     for( ch='a'; ch<='z' ; ch++){
# //     printf("%c\n",ch);
# //     }
# //     return 0;
# // }


# // // natural no.
# // #include<stdio.h>
# // int main(){
# //     int i;
# //     printf("enter the first 10 natural no. \n");
# //     for(int i=0 ;i<1000 ;i++){
# //         printf("%d \n",i);
# //     }
# //     return 0;
# // }


# // // sum of natural no.
# // #include<stdio.h>
# // int main(){
# //     int i,sum = 0;
# //     printf("enter the natural no. \n");
# //     for(int i=0 ; i<=1000 ; i++){
# //         printf("%d\n",i);
# //            sum = sum + i;
# //            }
# //        printf("%d sum of natural no. \n",sum);
# //     return 0;
# // }


# // // sum and avg
# // #include<stdio.h>
# // int main(){
# //     int i,n,sum = 0;
# //     float avg;
# //     printf("enter the natural no.: \n");
# //     for( i=1; i<=10; i++ ){
# //         printf("number %d ",i);
# //         scanf("%d \n",&n);
# //         sum +=n;
# //     }
# //     avg=sum/10.0;
# //     printf("the sum of 10 no. is: %d\n the average is : %f\n",sum,avg);
# //     return 0;
# // }


# // // cube
# // #include<stdio.h>
# // int main(){
# //     int i , ctr ;
# //     printf("enter the terms ctr ");
# //     scanf("%d",&ctr);
# //     for(int i=1; i<=ctr ; i++){
# //         printf("number is :%d entered the cube of %d : %d\n",i,i,(i*i*i));    
# //     } 
# //     return 0;
# // }


# // // square
# // #include<stdio.h>
# // int main(){
# //     int ctr ,i;
# //     printf("enter the ctr ");
# //     scanf("%d",&ctr);
# //     for(int i=1 ; i<=ctr ; i++){
# //         printf("number : %d the square is %d :%d\n ",i,i,(i*i));
# //     }
# // }


# // table off any no.
# // #include<stdio.h>
# // int main(){
# //     int n;
# //     printf("nter the no.");
# //     scanf("%d",&n);
# //     for(int i=1 ; i<=10 ; i++){
# //         printf("%d\n",n*i);
# //     }
# //     return 0;
# // }


# // // table of any no.
# // #include<stdio.h>
# // int main(){
# //     int i,n;
# //     printf("enter the value of n");
# //     scanf("%d",&n);
# //     for(int i=1 ; i<=10; i++ ){
# //         printf("%d X %d = %d\n",n,i , (n*i));
# //     }
# //     return 0;
# // }


# // // odd natural no. and their sum 
# // #include<stdio.h>
# // void main()
# // {
# //     int i,a,sum=0;
# //     printf("input the no. of terms :");
# //     scanf("%d",&a);
# //     printf("\n the odd no. are:");
# //     for ( i=1 ; i<=a ;i++){
# //         printf("%d",2*i-1);
# //          sum+=2*i-1;
# //     }
# //     printf("\nenter the sum i %d :sum is%d\n",a,sum);
# // }


# // // print your name n times
# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for (int i=0 ; i<=a ; i++){
# //         printf("mayank dubey\n");
# //     }
# //      printf("\n");
# // }


# // // // pattern infinite
# // #include<stdio.h>
# // int main(){
# //     int a,i,j;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for(int i=0 ; i<=a ; i++)
# //     {
# //         for(int j=0 ; j<=i ; j++){
# //             printf("* ");
# //         }
# //         printf("\n");
# //     }
# // }


# // // pattern 
# // #include<stdio.h>
# // int main(){
# //     int i,j,x;
# //     printf("enter the value of x");
# //     scanf("%d",&x);
# //     for (int i=1;i<=x ;i++){
# //         for(int j=1 ;j<=i ; j++){
# //             printf("%d ",j);
# //         }
# //         printf("\n");
# //     }
# // }


# // // pattern
# // #include<stdio.h>
# // int main(){
# //     int i,j,x;
# //     printf("enter the value of x");
# //     scanf("%d",&x);
# //     for(int i=1 ; i<=x ;i++){
# //         for(int j=1 ; j<=i ; j++){
# //             printf("%d",i);
# //         }
# //         printf("\n");
# //     }
# // }


# // // pattern
# // #include<stdio.h>
# // int main(){
# //     int i,j,rows,x=1;
# //     printf("enter the no. of rows");
# //     scanf("%d",&rows);
# //     for(int i=1 ;i<=rows; i++){
# //         for(int j=1 ; j<=i ; j++){
# //             printf("%d",x++);
# //         }
# //         printf("\n");
# //     } 
# //     return 0;
# // }


# // // pattern triangle ulta 
# // #include<stdio.h>
# // int main(){
# //     int i,j,x;
# //     printf("enter the value of x");
# //     scanf("%d",&x);
# //     for (int i=x;i>=1 ;i--){
# //         for(int j=1 ;j<=i ; j++){
# //             printf("#");
# //         }
# //         printf("\n");
# //     }
# // }


# // // calculater
# // #include<stdio.h>
# // int main(){
# //     int x,y,add,sub,mult;
# //     float div;
# //     printf("enter the value of x,y");
# //     scanf("%d%d\n",&x,&y);
# //      add= x+y;
# //     printf("it is the addition=%d\n",add);
# //      sub = x-y;
# //     printf("it is the subtraction=%d\n",sub);
# //      mult= x*y;
# //     printf("it is the multipilaction=%d\n",mult);
# //      div = x/y;
# //     printf(" it is the division=%f\n",div);
# //     return 0;
# //  }


# // // addition
# // #include<stdio.h>
# // int main(){
# //     int a,b,add;
# //     printf("enter the vslue of a,b");
# //     scanf("%d%d",&a,&b);
# //     add = a+b;
# //     printf("%d",add);
# // }


# // // case break q
# // #include<stdio.h>
# // int main(){
# //     int a,b,ca,sum,sub,mult,div,mod;
# //     printf("enter the ca");
# //     scanf("%d",&ca);
# //     printf("enter the value of a,b");
# //     scanf("%d%d",&a,&b);
# //     switch (ca)
# //     {
# //     case 1:
# //         printf("sum=%d",sum=a+b);
# //         break;
# //     case 2:
# //         printf("sub=%d",sub=a-b);
# //         break;
# //     case 3:
# //         printf("mult=%d",mult=a*b);
# //         break;
# //     case 4:
# //         printf("div=%d",div=a/b);
# //         break;
# //     case 5:
# //         printf("mod=%d",mod=a%b);
# //         break;
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     float pi=3.14;
# //     printf("age is%f\n",pi);
# //     return 0;
# // }


# // case break q
# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the a");
# //     scanf("%d",&a);
# //     switch(a)
# //     {
# //         case 1:
# //         printf("monday\n");
# //         break;
# //         case 2:
# //         printf("tuesday\n");
# //         break;
# //         default:
# //         printf("not valid");
# //         break;
# //     }
# //     return 0;
# // }


# // // print odd no.
# // #include<stdio.h>
# // int main(){
# //     // loop counter decleration
# //     int number;
# //     int a;
# //     // assigne initial value\n
# //     number = 1;
# //     printf("enter the value of a: ");
# //     scanf("%d",&a);
# //     printf("print the odd from 1 %d:\n",a);
# //     // the while loop will print number
# //     while(number<=a){
# //         if(number%2 != 0)
# //         printf("%d ",number);
# //         // increasing counter from 1
# //         number++;
# //     }
# //     return 0;
# // }


# // even no
# // #include<stdio.h>
# // int main(){
# //     int a,i;
# //     a = 1;
# //     printf("enter the value of a: ");
# //     scanf("%d",&a);
# //     printf("print the even number from 1 %d:\n",a);
# //     for(i=0; i<=a ; i++)
# //     if(i%2==0){
# //     printf("%d\n",i);
# //     }
# //  return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a,i;
# // a=1;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for(int i=0 ;i<=a ; i++);
# //        if(i%2==0){
# //         printf("enter the number%d\n",i);
# //     }
# //     return 0;
# // }


# // // print name n times
# // #include<stdio.h>
# // int main(){
# //     int i=0;
# //     while (i<=5){
# //     printf(" mayank ");
# //     i++;
# //     }
# //     return 0;
# // }


# // // small alphabate
# // #include<stdio.h>
# // int main(){
# //     char c;
# //     for(c='a';c<='z';++c)
# //         printf(" %c ", c);
# //     return 0;
# // }


# // // capital alphabate
# // #include<stdio.h>
# // int main(){
# //     char c;
# //     for(c='A';c<='Z';++c)
# //         printf(" %c ", c);
# //     return 0;
# // }


# // // upper and lower case alphabate 
# // #include<stdio.h>
# // int main(){
# //     char x;
# //     printf("enter L for lowercase alphabate.\n");
# //     printf("enter U for uppercase alphabate.\n");
# //     scanf("%c",&x);
# //     if( x == 'L'|| x == 'l'){
# //         for(x = 'a';x <= 'z';++x)
# //         printf(" %c ",x);
# //     } else if(x == 'U'|| x == 'u'){
# //         for(x='A'; x<='Z';++x)
# //         printf(" %c ",x);
# //     } else {
# //         printf(" character is invalid.");
# //     }
# //     return 0;
# // }


# // // number is odd or even
# // #include<stdio.h>
# // int main()
# // {
# //     int num ;
# //     printf("enter the number");
# //     scanf("%d",&num);
# //     if(num%2==0){
# //         printf("entered number is even ");
# //     }else {
# //         printf("entered number is odd");
# //     }
# //     return 0;
# // }


# // // the year is leap year or not
# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the year a");
# //     scanf("%d",&a);
# //     if(a%4==0){
# //         printf("the year is leap year");
# //     }
# //     else{
# //         printf("it is not leap year");
# //     }
# //     return 0;
# // }


# // // prime no.
# // #include<stdio.h>
# // int main(){
# // int a,b=0,i;
# // printf("enter the prime no.");
# // scanf("%d",&a);
# // for(i=1;i<=a;i++){
# //     if(a%i==0){
# //     b++;
# //     }
# // }
# // if(b==2){
# //     printf("its a prime no.");
# // }
# // else{
# //     printf("its not a prime no.");
# // }
# // return 0;
# // }


# // //  Multiply Two Floating-Point Numbers
# // #include<stdio.h>
# // int main(){
# //     double multi,a,b;
# //     printf("enter the value of a,b");
# //     scanf("%lf%lf",&a,&b);
# //     multi=a*b;
# //     printf("%2lf",multi);
# // return 0;
# // }


# // // after swapping 2 no.
# // #include<stdio.h>
# // int main(){
# //     double a,b,c;
# //     printf("enter the value of a,b\n");
# //     scanf("%lf%lf",&a,&b);
# //     c=a;
# //     a=b;
# //     b=c;
# //     printf("\n after swapping a=%.lf",a);
# //     printf("\nafter swapping b=%.lf",b);
# //     return 0;
# // }


# // // read integer
# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the integer value a");
# //     scanf(" entered integer is %d",&a);
# // return 0;
# // }


# // // factorial
# // #include<stdio.h>
# // int main(){
# //     double n,fact = 1,i;
# //     printf("enter the value of n");
# //     scanf("%lf",&n);
# //     for (i=1;i<=n;i++)
# //     {
# //     fact = fact*i; 
# //     }
# //     printf("factorial of no.  %lf\n",fact);  
# //     return 0;
# // }


# // // print hello
# // #include<stdio.h>
# // int main(){
# //     printf(" Hello Mayank");
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a ,b;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     if(a <= 100){
# //         printf("free");
# //     }
# //     else(a>100 || a<= 200);{
# //          b= a*1;
# //         printf("1 rs per call = rs %d",b);
# //     }
# //     return 0;
# // }


# // // prime no. or not
# // #include<stdio.h>
# // int main(){    
# // int n,i,m=0,flag=0;    
# // printf("Enter the number to check prime:");    
# // scanf("%d",&n);    
# // m=n/2;    
# // for(i=2;i<=m;i++)    
# // {    
# // if(n%i==0)    
# // {    
# // printf("Number is not prime");    
# // flag=1;    
# // break;    
# // }    
# // }    
# // if(flag==0)    
# // printf("Number is prime");     
# // return 0;  
# // }    `


# // // artmimatic operators
# // #include<stdio.h>
# // int main(){
# //     float a,b;
# //     float add,subtraction,multi,div;
# //     printf("enter the value of a,b");
# //     scanf("%f%f",&a,&b);
# //     add=a+b;
# //     printf("the sum is %f\n",add);
# //     subtraction=a-b;
# //     printf("the sub is %f\n",subtraction);
# //     multi=a*b;
# //     printf("the product is %f\n",multi);
# //     div=a/b;
# //     printf("the division is %f\n",div);
# //     return 0;
# // }


# // #inxlude<stdio.h>
# // int main(){
# //     int a,b,c,d,op;
# //     printf("enter the values");
# //     scanf("%d%d%d%d",&a,&b,&c,&d);
# //     switch op;
# // }


# // #include<stdio.h>
# // int main()
# // {
# //     int day;
# //     printf("enter the no");
# //     scanf("%d",&day);
# //     switch (day){
# //     case 1:
# //     printf("mon");
# //     break ;
# //     case 2:
# //     printf("tues");
# //     break;
# //     case 3:
# //     printf("wed");
# //     break;
# //     case 4:
# //     printf("ther");
# //     break ;
# //     case 5:
# //     printf("fri");
# //     break;
# //     case 6:
# //     printf("sat");
# //     break ;
# //     case 7:
# //     printf("sun");
# //     break;
# //     }
# //     return 0;
# // }


# // // if else greater or small
# // #include<stdio.h>
# // int main(){
# //     int a,b;
# //     printf("enter the value of a,b");
# //     scanf("%d%d",&a,&b);
# //     if(a<b){
# //         printf("b is greater");
# //     }
# //     if(a>b){
# //         printf(" a is greater");
# //     }
# //     else{
# //         printf("a and b are equal");
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int num;
# //     printf("enter the num");
# //     scanf("%d",&num);
# //     if(num<0){
# //         printf("it is the nagitive number");
# //     }
# //     else{
# //     printf("it is positive");
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     float a,b,multi;
# //     printf("enter the a,b");
# //     scanf("%f%f",&a,&b);
# //     multi=a*b;
# //     printf("it is the multiplication %f",multi);
# //     return 0;
# // }


# // // num is odd or even
# // #include<stdio.h>
# // int main(){
# //     int num;
# //     printf("enter the num");
# //     scanf("%d",&num);
# //     if( num%2 == 0){
# //         printf("the num is even");
# //     }
# //     else{
# //         printf("it is odd");
# //     }
# //     return 0;
# // }


# // // array question
# // #include<stdio.h>
# // int main(){
# //     int arr [6]={1,2,3,4,5,6};
# //     for (int i=0;i<6;i++){
# //         printf("%d\n",arr[i]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     char arr [6]={'a','b','c','d','e','f'};
# //     for (char i=0;i<6;i++){
# //         printf("%c\n",arr[i]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int arr[5];
# //     printf("enter the value of elements");
# //     for(int i=0;i<5;i++){
# //         scanf("%d",&arr[i]);
# //     }
# //     printf("array of elements are :\n");
# //     for(int i=0;i<5;i++){
# //         printf("%d\n",arr[i+1]);
# //     }
# //     return 0;
# // }


# // // dought
# // #include<stdio.h>
# // int main(){
# //     char ch,i;
# //     printf("enter the value of n");
# //     scanf("%c",&ch);
# //     char arr[ch];
# //     printf("enter the value of elements");
# //     for(char i='a';i<ch;i++){
# //         scanf("%c ",&arr[i]);
# //     }
# //     printf("array of elements are :\n");
# //     for(char i='a';i<ch;i++){
# //         printf("%c \n",arr[i]);
# //     }
# //     return 0;
# // }


# // // nahi bana
# // #include<stdio.h>
# // int main(){
# //     int array[10],i,n,j,flag=0;
# //     printf("enter the size of array: ");
# //     scanf("%d",&n);
# //     for(i=0;i,n;i++){
# //         printf("\n array[%d] = ",i);
# //         scanf("%d",&array[i]);
# //     }
# //     for(i=0;i<n;i++){
# //         for(j=i+1;j<n;j++){
# //             if(array[i]==array[j] && i!=j){
# //                 flag=1;
# //                 printf("\n number found at the location %d and %d ",i,j);
# //             }
# //         }
# //     }
# //     if (flag==0)
# //     printf("\n no location found");
# //     return 0;
# // }


# // // new type of sum
# // #include<stdio.h>
# // int main(){
# //     int a,b;
# //     scanf("%d%d",&a,&b);
# //     printf("sum of a and b %d",a+b);
# //     return 0;
# // }


# // // while
# // #include<stdio.h>
# // int main(){
# //   int i = 1;
# //   while ( i<= 10) {
# //     printf("%d\n", i*2);
# //     i++;
# //   }
# //   return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int n;
# //     printf("enter the value for n");
# //     scanf("%d",&n);
# //   int i = 1; 
# //   while ( i<= 10) {
# //     printf("%d\n", i*n);
# //     i++;
# //   }
# //   return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a;
# //     printf("enter the no.");
# //     scanf("%d",&a);
# //     int i=1;
# //     for(i=1;i<=10;i++)
# //     while(i%2!=0){
# //         printf("%d\n",i);
# //         i++;
# //     }
# //     return 0;
# // }


# // // break
# // #include<stdio.h>
# // int main(){
# //     int i;
# //     double a,sum=0.0;
# //     for(i=1; i<=10 ;i++){
# //     printf("enter the value of a %d \n",i);
# //     scanf("%lf",&a);
# //     if(a<0.0){
# //       break;
# //     }
# //     sum += a;
# //     }
# //     printf("sum = %.2lf",sum);
# // return 0;
# // }


# // // continue;
# // #include<stdio.h>
# // int main(){
# //     int i;
# //     double a,sum=0.0;
# //     for(i=1; i<=10 ;i++){
# //     printf("enter the value of a %d \n",i);
# //     scanf("%lf",&a);
# //     if(a<0.0){
# //       continue;
# //     }
# //     sum += a;
# //     }
# //     printf("sum = %.2lf",sum);
# // return 0;
# // }


# // #include<stdio.h>
# // void main(){
# //     int a,b;
# //     printf("enter the no.a");
# //     scanf(" %d",&a);
# //     printf("enter the no.b");
# //     scanf(" %d",&b);
# // }


# // #include<stdio.h>
# // int main(){
# //     int i,j,x;
# //     printf("enter the value of x");
# //     scanf("%d",&x);
# //     for(int i=5 ; i<=x ;i--){
# //         for(int j=5 ; j<=i ; j++){
# //             printf("%d",i);
# //         }
# //         printf("%d\n",j);
# //     }
# // }



# // #include<stdio.h>
# // int main(){
# //     int a,i,j;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for(int i=0 ; i<=a ; i++)
# //     {
# //         for(int j=1 ; j<=i ; j++){
# //             printf("# ");
# //         }
# //         printf("\n");
# //     }
# // }


# // #include<stdio.h>
# // int main()
# // {
# //     int i,j,x;
# //     printf("enter the value of x");
# //     scanf("%d",&x);
# //     for(int i=0;i<=x;i++){
# //         for(int j=1;j<=i;j++)
# //         {
# //     if(j==1||i==j||i==x)
# //       printf("# ");
# //     else
# //         printf("  ");
# // }
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // int main()
# // {
# //     int rows = 5;
# //     for (int i = 0; i < rows; i++) {
# //         for (int j = 0; j < 2 * (rows - i) - 1; j++) {
# //             printf(" ");
# //         }
# //         for (int k = 0; k <= i; k++) {
# //             printf("* ");
# //         }
# //         printf("\n");
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int i,rows = 5;
# //     for(int i=0;i<rows;i++){
# //         for(int j=0 ;j<;j++){
# //         printf(" ");
# //     }
# //     for(int k=0 ; k<=i;k++){
# //         printf("# ");
# //     }
# //     printf("\n ");
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // int main()
# // {
# //     int rows = 5;
# //     for (int i = 0; i < rows; i++) {
# //         for (int j = 0; j < rows; j++) {
# //             if (i > 0 && i < rows - 1 && j > 0
# //                 && j < rows - 1) {
# //                 printf("  ");
# //             }
# //             else {
# //                 printf("* ");
# //             }
# //         }
# //         printf("\n");
# //     }
# //     return 0;
# // }


# // // fabbonic no.
# // #include<stdio.h>
# // int main()
# // {
# //     int i,n;
# //     int a=0,b=1;
# //     int nextterm=a+b;
# //     printf("enter the value for n");
# //     scanf("%d",&n);
# //     for(i=0;i<n;i++){
# //         printf("%d \n",nextterm);
# //         a=b;
# //         b=nextterm;
# //         nextterm = a+b;
# //     }
# //     return 0;
# // }


# // // lcm
# // #include <stdio.h>
# // int main() {
# //     int a, b, max;
# //     printf("Enter two positive integers: ");
# //     scanf("%d %d", &a, &b);
# //     max = (a > b) ? a: b;
# //     while  (1){
# //         if ((max % a == 0) && (max % b == 0)) {
# //             printf("The LCM of %d , %d ,%d.", a, b, max);
# //             break;
# //         }
# //         ++max;
# //     }
# //     return 0;
# // }


# // array
# // #include<stdio.h>
# // int main(){
# //     int arr [6]={1,2,3,4,5,6};
# //     arr[2]=65;
# //     for (int i=0;i<6;i++){
# //         printf("%d\n",arr[i]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int arr [4][3];
# //     for (int i=0;i<4;i++){
# //         printf("%d\n",arr[i]);
# //     }
# //     for(int j=0;j<3;j++){
# //         printf("%d\n",arr[j]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main()
# // {
# //     int arr[4][3]={{1,2,3},{3,4,5},{6,7,8},{9,0,8}};
# //     for(int i=0;i<4;i++){
# //     for(int j=0;j<3;j++){
# //         printf("arr[%d] [%d] = %d\n",i,j,arr[i][j]);
# //     }
# //     }
# //     return 0;
# // }


# // string
# // #include<stdio.h>
# // #include<string.h>
# // int main(){
# //     char string[6]= {'m','a','y','a','n','k'};
# //     printf("length is 6\n");
# //     for(int i=0;i<7;i++){
# //         printf("%c\n",string[i]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // #include<string.h>
# // int main(){
# //     char string[6];
# //     printf("enter the  elements ");
# //     for(int i=0;i<6;i++){
# //         scanf("%c",&string[i]);
# //     }
# //     printf("char are :\n");
# //     for(int i=0;i<6;i++){
# //         printf("%c\n",string[i]);
# //     }
# //     return 0;
# // }


# // #include <stdio.h>  
# // #include <stdlib.h>  
# // void main()
# // {
# //     char str[50];
# //     printf("Input the string : ");
# //     fgets(str, sizeof str, stdin);
# //     printf("The string you entered is : %s\n", str);
# // }


# // #include<stdio.h>
# // int sum (int a,int b)
# // {
# //     return a+b;
# // }
# // int main(){
# //     int add = sum (2,3);
# //     printf("%d",add);
# //     return 0;
# // }


# // #include <stdio.h>
# //     int sum (int, int);//function declaration
# //     int main (void)
# //     {
# //         int total;
# // 		printf("\n\n Function : a simple structure of function :\n");
# // 		printf("------------------------------------------------\n");	
# //         total = sum (5, 6);//function call
# //         printf ("The total is :  %d\n", total);
# //         return 0;
# //     }
# //     int sum (int a, int b) //function definition
# //     {
# // 	    int s;
# // 		s=a+b;
# //         return s; //function returning a value
# //     }


# // #include<stdio.h>
# // int main(){
# //     int k=0;
# //     for(;k<3 ;k++)
# //     {
# //         printf("Hello\n");
# //     
# // }


# // // recursion
# // #include<stdio.h>
# // int sum (int n);
# // int main(){
# //     int result, num;
# //     printf("enter the num");
# //     scanf("%d",&num);
# //     result = sum(num);
# //     printf("%d",result);
# //     return 0;
# // }
# //     int sum (int n){
# //     if (n != 0)
# //      return n + sum(n-1);
# //      else 
# //      return n;
# //     }


# // recursion factorial
# // #include<stdio.h>
# // int fact(int n);
# // int main(){
# //     int n,result;
# //     printf("enter the value of n");
# //     scanf("%d",&n);
# //     result = fact(n);
# //     printf("factorial of no.  %d\n",result);  
# //     return 0;
# // }
# // int fact(int n){
# //     if(n>1)
# //      return n * fact(n-1);
# //      else 
# //      return n;
# //     }


# // #include<stdio.h>
# // void main(){
# //     int i,a;
# //     printf("entr the value of a");
# //     scanf("\n%d",&a);
# //     for(i=1;i<=a;i++){
# //         printf("the number is: %d and the cube is: %d\n",i,(i*i*i));
# //     }
# // }


# // #include<stdio.h>
# // void main(){
# //     int i,a;
# //     printf("entr the value of a");
# //     scanf("\n%d",&a);
# //     for(i=1;i<=a;++i){
# //         printf("the number is: %d and the cube is: %d\n",i,(i*i));
# //     }
# // }


# // #include<stdio.h>
# // int main(){
# //     int a,b=0,i;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for(int i=1;i<=a;i++){
# //     if(a%i==0){
# //     b++;    
# //     }
# //     }
# //     if(b==2){
# //         printf("its the prime no.");
# //         }
# //         else{
# //             printf("its not a prime no.");
# //         }
# // return 0;
# // }


# // #include <stdio.h>
# //     int sum (int, int);//function declaration
# //     int main (void)
# //     {
# //         int total;
# // 		printf("\n\n Function : a simple structure of function :\n");
# // 		printf("------------------------------------------------\n");	
# //         total = sum (5, 6);//function call
# //         printf ("The total is :  %d\n", total);
# //         return 0;
# //     }
# //     int sum (int a, int b) //function definition
# //     {
# // 	    int s;
# // 		s=a+b;
# //         return s; //function returning a value
# //     }


# // // strcpy is used to copy one string to another
# // #include <stdio.h>
# // #include <string.h>
# // typedef struct Person {
# //   char name[50];
# //   char add [50];
# //   int sapid,rollno;
# // } person;
# // int main() {
# //   person p1;
# //   strcpy(p1.name, "mayank dubey");
# //   strcpy(p1.add,"sagar");
# //   p1.sapid = 4536;
# //   p1.rollno = 537;
# //   printf("Name: %s\n", p1.name);
# //   printf("home town : %s\n",p1.add);
# //   printf("identification : %d\n", p1.sapid);
# //   printf("identity in class: %d", p1.rollno);
# //   return 0;
# // }


# // #include <stdio.h> 
# //   struct student1 {
# //     int rollno,sapid;
# //     char name[50];
# //     char add[30];
# // }; 
# // struct student2 {
# //     int rollno,sapid;
# //     char name[54];
# //     char add[45];
# // };
# // struct student3 {
# //     int rollno,sapid;
# //     char name[54];
# //     char add[45];
# // } var; 
# // int main()
# // {
# //     struct student1 var1 = { 537, 500492, "mayankdubey","sagar" };
# //     struct student2 var2 = { 565, 3456765, "prashantrai","bihar"};
# //     struct student3 var3 = { 5368, 500125464 , "mytommy","bihar" };
# //      printf("Struct 1:\n\trollno = %d, sapid = %d, name = %s, add = %s\n",
# //            var1.rollno, var1.sapid, var1.name, var1.add);
# //     printf("Struct 2:\n\trollno = %d, sapid = %d, name = %s, add = %s\n",
# //            var2.rollno, var2.sapid, var2.name, var2.add);
# //     printf("Struct 3\n\trollno = %d, sapid = %d, name = %s, add = %s\n", var3.rollno,
# //            var3.sapid, var3.name, var3.add);
# //     return 0;
# // }


# // #include<stdio.h>
# // #include<string.h>
# // struct Student
# // {
# //     int Marks, SAPID, Roll_No;
# //     char name[50];
# //     char address[100];
# // };
# // void main()
# // {
# //     int choice;
# //     struct Student Student1,Student2,Student3,Student4;
# //     printf("Enter the names of the students \n");
# //     scanf("%s",&Student1.name);
# //     scanf("%s",&Student2.name);
# //     scanf("%s",&Student3.name);
# //     scanf("%s",&Student4.name);
# //     printf("Enter the addresses \n");
# //     scanf("%s",&Student1.address);
# //     scanf("%s",&Student2.address);
# //     scanf("%s",&Student3.address);
# //     scanf("%s",&Student4.address);
# //     printf("Enter the roll number \n");
# //     scanf("%d",&Student1.Roll_No);
# //     scanf("%d",&Student2.Roll_No);
# //     scanf("%d",&Student3.Roll_No);
# //     scanf("%d",&Student4.Roll_No);
# //     printf("Enter the SAPID \n");
# //     scanf("%d",&Student1.SAPID);
# //     scanf("%d",&Student2.SAPID);
# //     scanf("%d",&Student3.SAPID);
# //     scanf("%d",&Student4.SAPID);
# //     printf("Enter the marks \n");
# //     scanf("%d",&Student1.Marks);
# //     scanf("%d",&Student2.Marks);
# //     scanf("%d",&Student3.Marks);
# //     scanf("%d",&Student4.Marks);
# //     printf("Enter the sapid");
# //     scanf("%d",&choice);
# //     if(Student1.SAPID==choice)
# //     {
# //     printf("\n STUDENT INFORMATION \n");
# //     printf("\nName : %s", Student1.name);
# //     printf("\nAddress : %s", Student1.address);
# //     printf("\nRoll Number : %d", Student1.Roll_No);
# //     printf("\nSAP ID : %d", Student1.SAPID);
# //     printf("\nMarks : %d \n", Student1.Marks);
# //     }
# //     else if(Student2.SAPID==choice)
# //     {
# //     printf("\n STUDENT INFORMATION \n");
# //     printf("\nName : %s",Student2.name);
# //     printf("\nAddress : %s",Student2.address);
# //     printf("\nRoll Number : %d",Student2.Roll_No);
# //     printf("\nSAP ID : %d",Student2.SAPID);
# //     printf("\nMarks : %d \n",Student2.Marks);
# //     }
# //     else if (Student3.SAPID==choice)
# //     {
# //     printf("\n STUDENT INFORMATION \n");
# //     printf("\nName : %s",Student3.name);
# //     printf("\nAddress : %s",Student3.address);
# //     printf("\nRoll Number : %d",Student3.Roll_No);
# //     printf("\nSAP ID : %d",Student3.SAPID);
# //     printf("\nMarks : %d \n",Student3.Marks);
# //     }
# //     else
# //     {
# //     printf("\n STUDENT INFORMATION \n");
# //     printf("\nName : %s",Student4.name);
# //     printf("\nAddress : %s",Student4.address);
# //     printf("\nRoll Number : %d",Student4.Roll_No);
# //     printf("\nSAP ID : %d",Student4.SAPID);
# //     printf("\nMarks : %d \n",Student4.Marks);
# // }
# // }


# // #include<stdio.h>
# // int main(){
# //     printf("%d",a&b);
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int arr[5][6]={{1,2,3,4,5},{12,13,14,15,16,17}};
# //     printf("%d",arr[2]);
# //     return 0;
# // }


# // #include<stdio.h>
# // int main() {
# //     int n, reverse, remainder;
# //     printf("Enter the number to find its reverse:");
# //     scanf("%d", & n);
# //     while (n != 0) {
# //         remainder = n % 10;
# //         reverse = reverse * 10 + remainder;
# //         n = n / 10;
# //     }
# //     printf("Reverse of the is %d: ", reverse);
# //     return 0;
# // }


# // #include <stdio.h>
# // int reverseDigits(int num)
# // {
# //     int rev_num = 0;
# //     while (num > 0) {
# //         rev_num = rev_num * 10 + num % 10;
# //         num = num / 10;
# //     }
# //     return rev_num;
# // }
# // int main()
# // {
# //     int num = 4562;
# //     printf("Reverse of no. is %d", reverseDigits(num));
# //     getchar();
# //     return 0;
# // }


# // #include <stdio.h>
# // int main()
# // {
# //     int Arr[] = { 1, 2, 3, 4, 5 };
# //     // variable to store size of Arr
# //     int length = sizeof(Arr) / sizeof(Arr[0]);
# //     printf("The length of the array is: %d\n", length);
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int arr[5]={1,2,3,4,5};
# //     int *ptr1,*ptr2
# //     ptr1=&arr[0];
# //     ptr2=&arr[5];
# //     printf("%p\n",(ptr1+ptr2));
# //     return 0;
# // }


# // #include <stdio.h>
# // void world()
# // {
# //     int var = 10;
# //     int *ptr;
# //     ptr = &var;
# //     printf("Value at ptr = %p \n", ptr);
# //     printf("Value at var = %d \n", var);
# //     printf("Value at *ptr = %d \n", *ptr);
# // }
# // int main()
# // {
# //     world();
# //     return 0;
# // }


# // #include <stdio.h>
# // int main() {
# //   int myAge = 43; 
# //   printf("%d\n", myAge);
# //   printf("%p\n", &myAge);
# // return 0;
# // }
  

# // #include<stdio.h>
# // int main(){
# //     int a,b;
# //     printf("enter the value of a,b");
# //     scanf("%d%d",&a,&b);
# //     char op;
# //     switch (op)
# //     {
# //     case '+':
# //         printf("%d a+b");
# //         break;
# //     default:
# //         break;
# //     }
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int* ptr;
# //     int a, i;
# //     a = 2;
# //     printf("Enter number of elements: %d\n", a);
# //     ptr = (int*)calloc(a, sizeof(int));
# //     if (ptr == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else {
# //         printf("Memory successfully allocated using calloc.\n");
# //         for (i = 0; i < a; ++i) {
# //             ptr[i] = i + 2;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < a; ++i) {
# //             printf("%d, ", ptr[i]);
# //         }
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int* ptr;
# //     int n, i;
# //      n = 5;
# //     printf("Enter number of elements: %d\n", n);
# //     ptr = (int*)calloc(n, sizeof(int));
# //     if (ptr == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else {
# //         printf("Memory successfully allocated using calloc.\n");
# //         for (i = 0; i < n; ++i) {
# //             ptr[i] = i + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < n; ++i) {
# //             printf("%d, ", ptr[i]);
# //         }
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int* ptr;
# //     int n, i;
# //     n = 5;
# //     printf("Enter number of elements: %d\n", n);
# //     ptr = (int*)calloc(n, sizeof(int));
# //     if (ptr == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else {
# //         printf("Memory successfully allocated using calloc.\n");
# //         for (i = 0; i < n; ++i) {
# //             ptr[i] = i + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < n; ++i) {
# //             printf("%d, ", ptr[i]);
# //         }
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int* ptr;
# //     int n, i;
# //     printf("Enter number of elements:");
# //     scanf("%d",&n);
# //     printf("Entered number of elements: %d\n", n);
# //     ptr = (int*)malloc(n * sizeof(int));
# //     if (ptr == 0) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else {
# //         printf("Memory successfully allocated using malloc.\n");
# //         for (i = 0; i < n; ++i) {
# //             ptr[i] = i + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < n; ++i) {
# //             printf("%d, ", ptr[i]);
# //         }
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int *ptr, *ptr1;
# //     int n,a,i,j;
# //     n = 5;
# //     a = 4;
# //     printf("Enter number of elements: %d\n", n);
# //     printf("enter number of elements: %d\n", a);
# //     ptr = (int*)malloc(n * sizeof(int));
# //     ptr1 = (int*)calloc(a, sizeof(int));
# //     if (ptr == NULL && ptr1 == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else
# //     {
# //         printf("Memory successfully allocated using malloc and calloc.\n");
# //         for (i = 0; i < n ; ++i) {
# //             ptr[i] = i + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < n ; ++i) {
# //             printf("%d ", ptr[i]);
# //         }
# //     }
# //        else
# //     {
# //         printf("Memory successfully allocated using malloc and calloc.\n");
# //         for (j = 0; j < a; ++j) {
# //             ptr1[j] = j + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (j = 0;  j < a; ++j) {
# //             printf("%d ", ptr1[j]);
# //         }     
# //     }
# //     return 0;
# // }


# // #include <stdio.h>
# // #include <stdlib.h>
# // int main()
# // {
# //     int *ptr, *ptr1;
# //     int n,a,i,j;
# //     n = 5;
# //     a = 4;
# //     printf("Enter number of elements: %d\n", n);
# //     ptr = (int*)malloc(n * sizeof(int));
# //     if (ptr == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);
# //     }
# //     else
# //     {
# //         printf("Memory successfully allocated using malloc.\n");
# //         for (i = 0; i < n ; ++i) {
# //             ptr[i] = i + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (i = 0; i < n ; ++i) {
# //             printf("%d ", ptr[i]);
# //         }
# //     }
# //     printf("enter number of elements: %d\n", a);
# //         ptr1 = (int*)calloc(a, sizeof(int));
# //          if ( ptr1 == NULL) {
# //         printf("Memory not allocated.\n");
# //         exit(0);1
# //          }
# //            else
# //     {
# //         printf("Memory successfully allocated using malloc.\n");
# //         for (j = 0; j < n ; ++j) {
# //             ptr1[j] = j + 1;
# //         }
# //         printf("The elements of the array are: ");
# //         for (j = 0; j < n ; ++j) {
# //             printf("%d ", ptr1[j]);
# //         }
# //     }
# //     return 0;
# // }


# // #include <stdio.h> 
# // #include <stdlib.h>
# // int main() {
# //     int *ptr;
# //     int n, i, choice;
# //     printf("Enter the number of elements: ");
# //     scanf("%d", &n);
# //     printf("Enter your choice:\n1. Malloc\n2. Calloc\n");
# //     scanf("%d", &choice);
# //     switch (choice) {
# //         case 1:
# //             ptr = (int*) malloc(n * sizeof(int));
# //             break;
# //         case 2:
# //             ptr = (int*) calloc(n, sizeof(int));
# //             break;
# //         default:
# //             printf("Invalid choice!");
# //             return 0;
# //     }
# //     printf("Enter %d elements:\n", n);
# //     for (i = 0; i < n; i++) {
# //         scanf("%d", &ptr[i]);
# //     }
# //     printf("The elements you entered are:\n");
# //     for (i = 0; i < n; i++) {
# //         printf("%d ", ptr[i]);
# //     }
# //     free(ptr);
# //     return 0;
# // }
 

# // // recursion
# // #include<stdio.h>
# // int sum (int n);
# // int main(){
# //     int result, num;
# //     printf("enter the num");
# //     scanf("%d",&num);
# //     result = sum(num);
# //     printf("%d",result);
# //     return 0;
# // }
# //     int sum (int n){
# //     if (n != 0)
# //      return n + sum(n-1);
# //      else 
# //      return n;
# //     }


# // // array 
# // #include <stdio.h>
# // #define SIZE 10
# //  int main()
# //  {
# //  int n[ SIZE ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
# //  int i, j;
# //  printf( "%s%13s%17s\n", "Element", "Value", "Histogram" );
# //  for ( i = 0; i <= SIZE - 1; i++ ) {
# //  printf( "%7d%13d ", i, n[ i ]) ;
# //  for ( j = 1; j <= n[ i ]; j++ ) /* print one bar */
# //  printf( "%c", '*' );
# //  printf( "\n" );
# //  }
# //  return 0;
# //  }


# // #include<stdio.h>
# // void main( )
# // {
# // int i=-3, j=2, k=0, m;
# // m = ++j && ++i || ++k;
# // printf(" %d%d%d%d \n ", i, j, k, m);
# // }


# // #include<stdio.h>
# // void fun(struct emp)
# // 'struct emp'
# // {
# // char name[20];
# // int age;
# // };
# // void main( )
# // {
# // struct emp a={"UPES", 20};
# // fun(a);
# // }
# // void fun(struct emp b)
# // {
# // printf("\n %s %d", b.name, b.age);
# // }


# // #include<stdio.h>
# // int main( )
# // {
# // int i=4;
# // switch(i)
# // {
# // default:
# // printf("\n I study in UPES\n");
# // case 1:
# // printf("\n I shall perform better and better always\n");
# // break;
# // case 4:
# // printf("\n I would have read the program carefully\n");
# // break;
# // }
# // return 0;
# // }


# // #include<stdio.h>
# // int main()
# // {
# // int a=10, b=20, c=30;
# // int d;
# // b <<=2;
# // printf("%d\n", b);
# // printf("%d\n",c>>=3);
# // printf("%d\n", b>20?b:c);
# // printf("%d\t%d\t%d\t%d\n",b&c,b|c,b^c,!(b^c));
# // return 0;
# // }


# // #include<stdio.h>
# // int main ()
# // {
# //     int a;
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# // }


# // #include <stdio.h>
# // void convert_to_binary(int num) {
# //   // Base case: If number is 0, print 0 and return
# //   if (num == 0) {
# //     return;
# //   }
# //   // Recursively call the function with half the number (divide by 2)
# //   convert_to_binary(num / 2);
# //   // Print the remainder of dividing by 2 (either 0 or 1)
# //   printf("%d", num % 2);
# // }
# // int main() {
# //   int number;
# //   printf("Enter an integer number: ");
# //   scanf("%d", &number);
# //   printf("Binary equivalent of %d: ", number);
# //   convert_to_binary(number);
# //   printf("\n");
# //   return 0;
# // }


# // #include<stdio.h>
# // int main(){ 
# //   int arr[10];
# //   // printf("enter the value of i");
# //   scanf("%d",&i);
# //   for(int i=0 ; i<=10 ; i++)
# //   {
# //     printf("%d \n",arr[i]);
# //   }
# //   // printf("\n");
# //   return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a;
# //       char arr [a];
# //     printf("enter the value of a");
# //     scanf("%d",&a);
# //     for (int i=0;i<a;i++){
# //         printf("%d\n",arr[i]);
# //     }
# //     return 0;
# // }


# // #include<stdio.h>
# // int main(){
# //     int a,b;
# //     printf("enter the value of");
# //     scanf("%d%d",&a,&b);
# //     if(a==b)
# // {
# //     printf("both are equal \n");
# // }
# // else{
# //     printf("both are not equal \n");
# // }
# // if(a<=b){
# //     printf("b is greater \n");
# // }
# // else{
# //     printf("a is greater \n");
# // }
# // return 0;
# // }




# // #include <stdio.h>  
# // void main() {  
# //    int Arr[5] = {18, 30, 15, 70, 12};  
# // int i;  
# //    printf("Elements of the array are:\n");  
# //    for(i = 0; i<5; i++) {  
# //       printf("Arr[%d] = %d,  ", i, Arr[i]);  
# //    }  
# // }  





# // #include <stdio.h>  
# // void main ()  
# // {  
# //     int arr[3][3],i,j;   
# //     for (i=0;i<3;i++)  
# //     {  
# //         for (j=0;j<3;j++)  
# //         {  
# //             printf("Enter a[%d][%d]: ",i,j);              
# //             scanf("%d",&arr[i][j]);  
# //         }  
# //     }  
# //     printf("\n printing the elements ....\n");   
# //     for(i=0;i<3;i++)  
# //     {  
# //         printf("\n");  
# //         for (j=0;j<3;j++)  
# //         {  
# //             printf("%d\t",arr[i][j]);  
# //         }  
# //     }  
# // } 





# // #include<stdio.h>  
# // #include<stdlib.h>  
# // struct node   
# // {  
# //     int data;  
# //     struct node *next;   
# // };  
# // struct node *head;  
  
# // void beginsert ();   
# // void lastinsert ();  
# // void randominsert();  
# // void begin_delete();  
# // void last_delete();  
# // void random_delete();  
# // void display();  
# // void search();  
# // void main ()  
# // {  
# //     int choice =0;  
# //     while(choice != 7)   
# //     {  
# //         printf("\n*********Main Menu*********\n");  
# //         printf("\nChoose one option from the following list ...\n");  
# //         printf("\n===============================================\n");  
# //         printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");  
# //         printf("\nEnter your choice?\n");         
# //         scanf("\n%d",&choice);  
# //         switch(choice)  
# //         {  
# //             case 1:  
# //             beginsert();      
# //             break;  
# //             case 2:  
# //             lastinsert();         
# //             break;  
# //             case 3:  
# //             begin_delete();       
# //             break;  
# //             case 4:  
# //             last_delete();        
# //             break;  
# //             case 5:  
# //             search();         
# //             break;  
# //             case 6:  
# //             display();        
# //             break;  
# //             case 7:  
# //             exit(0);  
# //             break;  
# //             default:  
# //             printf("Please enter valid choice..");  
# //         }  
# //     }  
# // }  
# // void beginsert()  
# // {  
# //     struct node *ptr,*temp;   
# //     int item;   
# //     ptr = (struct node *)malloc(sizeof(struct node));  
# //     if(ptr == NULL)  
# //     {  
# //         printf("\nOVERFLOW");  
# //     }  
# //     else   
# //     {  
# //         printf("\nEnter the node data?");  
# //         scanf("%d",&item);  
# //         ptr -> data = item;  
# //         if(head == NULL)  
# //         {  
# //             head = ptr;  
# //             ptr -> next = head;  
# //         }  
# //         else   
# //         {     
# //             temp = head;  
# //             while(temp->next != head)  
# //                 temp = temp->next;  
# //             ptr->next = head;   
# //             temp -> next = ptr;   
# //             head = ptr;  
# //         }   
# //         printf("\nnode inserted\n");  
# //     }  
              
# // }  
# // void lastinsert()  
# // {  
# //     struct node *ptr,*temp;   
# //     int item;  
# //     ptr = (struct node *)malloc(sizeof(struct node));  
# //     if(ptr == NULL)  
# //     {  
# //         printf("\nOVERFLOW\n");  
# //     }  
# //     else  
# //     {  
# //         printf("\nEnter Data?");  
# //         scanf("%d",&item);  
# //         ptr->data = item;  
# //         if(head == NULL)  
# //         {  
# //             head = ptr;  
# //             ptr -> next = head;    
# //         }  
# //         else  
# //         {  
# //             temp = head;  
# //             while(temp -> next != head)  
# //             {  
# //                 temp = temp -> next;  
# //             }  
# //             temp -> next = ptr;   
# //             ptr -> next = head;  
# //         }  
          
# //         printf("\nnode inserted\n");  
# //     }  
  
# // }  
  
# // void begin_delete()  
# // {  
# //     struct node *ptr;   
# //     if(head == NULL)  
# //     {  
# //         printf("\nUNDERFLOW");    
# //     }  
# //     else if(head->next == head)  
# //     {  
# //         head = NULL;  
# //         free(head);  
# //         printf("\nnode deleted\n");  
# //     }  
      
# //     else  
# //     {   ptr = head;   
# //         while(ptr -> next != head)  
# //             ptr = ptr -> next;   
# //         ptr->next = head->next;  
# //         free(head);  
# //         head = ptr->next;  
# //         printf("\nnode deleted\n");  
  
# //     }  
# // }  
# // void last_delete()  
# // {  
# //     struct node *ptr, *preptr;  
# //     if(head==NULL)  
# //     {  
# //         printf("\nUNDERFLOW");  
# //     }  
# //     else if (head ->next == head)  
# //     {  
# //         head = NULL;  
# //         free(head);  
# //         printf("\nnode deleted\n");  
  
# //     }  
# //     else   
# //     {  
# //         ptr = head;  
# //         while(ptr ->next != head)  
# //         {  
# //             preptr=ptr;  
# //             ptr = ptr->next;  
# //         }  
# //         preptr->next = ptr -> next;  
# //         free(ptr);  
# //         printf("\nnode deleted\n");  
  
# //     }  
# // }  
  
# // void search()  
# // {  
# //     struct node *ptr;  
# //     int item,i=0,flag=1;  
# //     ptr = head;   
# //     if(ptr == NULL)  
# //     {  
# //         printf("\nEmpty List\n");  
# //     }  
# //     else  
# //     {   
# //         printf("\nEnter item which you want to search?\n");   
# //         scanf("%d",&item);  
# //         if(head ->data == item)  
# //         {  
# //         printf("item found at location %d",i+1);  
# //         flag=0;  
# //         }  
# //         else   
# //         {  
# //         while (ptr->next != head)  
# //         {  
# //             if(ptr->data == item)  
# //             {  
# //                 printf("item found at location %d ",i+1);  
# //                 flag=0;  
# //                 break;  
# //             }   
# //             else  
# //             {  
# //                 flag=1;  
# //             }  
# //             i++;  
# //             ptr = ptr -> next;  
# //         }  
# //         }  
# //         if(flag != 0)  
# //         {  
# //             printf("Item not found\n");  
# //         }  
# //     }     
          
# // }  
  
# // void display()  
# // {  
# //     struct node *ptr;  
# //     ptr=head;  
# //     if(head == NULL)  
# //     {  
# //         printf("\nnothing to print");  
# //     }     
# //     else  
# //     {  
# //         printf("\n printing values ... \n");  
          
# //         while(ptr -> next != head)  
# //         {  
          
# //             printf("%d\n", ptr -> data);  
# //             ptr = ptr -> next;  
# //         }  
# //         printf("%d\n", ptr -> data);  
# //     }  
              
# // }




# // #include<stdio.h>
# // int main()
# // {
# // struct node
# // {
# //  int data;
# //   struct node *next;
# //   };
# //   struct node *head, newnode;
# //   head=0;
# //   newnode=(struct node*)(malloc(sizeof(struct node)));
# //   newnode->data = 20;
# //   head=newnode;
# //   newnode->next = 0;
# // }



# // #include<stdio.h> 
# // int main()
# // {
# //   struct node{
# //     struct node *next;
# //   };
# //   struct node *head,*newnode,*temp;
# //   head = NULL;
# //   newnode = (struct node*);
# //   while(newnode!=NULL && ch =='Y')
# //   {
# //     if(head == NULL)
# //   {
# //   head = newnode;
# //   scanf("%d",value);
# //   newnode->data=value;
# //   newnode->next=NULL;
# //   temp=head;
# //   }
# //   else
# //   {
# //     temp->next=newnode;
# //     scanf("%d",&value);
# //     newnode->data=value;
# //     newnode->next=NULL;
# //     temp=temp->next;
# //   }
# //   scanf("%d",&search_value);
# //   temp=head;
# // }  








# // #include<stdio.h>
# // int main(){
# //   int max;
# //   int data;
# //   int stack[max];
# //   printf("enter the size ");
# //   scanf("%d",&max);
# //   int top = -1;
# //   if (top == max-1)
# //   {
# //     printf("overflow");
# //   }
# //   else if (top == -1)
# //   {
# //     top = top+1;
# //   }
# //   else{
# //     top = top+1;
# //     stack[top] = data;
# //   }
# //   return 0;

# // }






// # #include<stdio.h>
// # #include<stdlib.h>
// # #include<malloc.h>

// # struct node{
// # 	int data;
// # 	struct node *next;
// # };

// # struct node *head = NULL; // there is no linked list has been created
// # struct node *temp; // to navigate the list as we cant move head

// # void ins_beg(struct node*);//pass the node
// # void ins_end(struct node*);
// # void del_beg();
// # void del_end();
// # void traverse();

// # main(){
// # 	int choice, n;
// # 	struct node *new1;
	
// # 	while(1){
// # 		printf("\nenter the choice\n");
// # 		printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5. traverse\n6. exit\n");
// # 		scanf("%d",&choice);
// # 		switch(choice){
// # 			case 1:
// # 					new1 = (struct node*)malloc(sizeof(struct node));
// # 					printf("enter the data\n");
// # 					scanf("%d",&new1->data);
// # 					new1->next = NULL;
// # 					ins_beg(new1);
// # 					break;
// # 			case 2:
// # 					new1 = (struct node*)malloc(sizeof(struct node));
// # 					printf("enter the data\n");
// # 					scanf("%d",&new1->data);
// # 					new1->next = NULL;
// # 					ins_end(new1);
// # 					break;
// # 			case 3:
// # 					del_beg();
// # 					break;
// # 			case 4:
// # 					del_end();
// # 					break;
// # 			case 5:
// # 					traverse();
// # 					break;
// # 			default:
// # 					exit(1);
// # 		}
// # 	}
// # }
// # 	void ins_beg(struct node *new1){
// # 		if(head == NULL)
// # 			head = new1;
// # 		else{
// # 			new1->next = head;
// # 			head = new1;
// # 		}
// # 	}
	
// # 	void ins_end(struct node *new1){
// # 		temp = head;
// # 		if(head == NULL)
// # 			head = new1;
// # 		else{
// # 			while(temp->next!= NULL)
// # 				temp = temp->next;
// # 			temp->next = new1;
// # 			}
// # 		}
		
// # 	void del_beg(){
// # 		if(head == NULL)
// # 			printf("no item to delete\n");
// # 		else
// # 			head = head->next;
// # 	}

// # 	void del_end(){
// # 		struct node *temp = head;
// # 		struct node *temp1 = head;
// # 		if(head == NULL)
// # 			printf("no item to delete\n");
// # 		else{
// # 			while(temp1->next != NULL){
// # 				temp = temp1;
// # 				temp1 = temp1->next;
// # 				}
// # 	    	if(temp1 == head)
// # 	    		head = NULL;
// # 			else
// # 			 	temp->next = NULL;
// # 			}
// # 	}

	
// # 	void traverse(){
// # 		struct node *temp = head;
// # 		if(head == NULL)
// # 			printf("no item to traverse\n");
// # 		while(temp != NULL){
// # 			printf("%d ",temp->data);
// # 			temp = temp->next;
// # 		}
// # 	}




// list1 = ["apple", "banana", "cherry"]
// list2 = [1, 5, 7, 9, 3]
// list3 = [True, False, False]

// print(list1)
// print(list3)
// print(list2)







#include<stdio.h>
int main(){
    int size;
    printf("enter the size of expression");
    scanf("%d",&size);
    
}

















































