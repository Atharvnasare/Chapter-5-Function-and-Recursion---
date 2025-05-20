#include<stdio.h>
#include<math.h>

// // Write a function that print "Namaste " if user is Indian and "Bonjour " if user is French

// //declaration/Prototype

// void namaste() ;
// void bonjour() ;

// //function call

// int main (){
//     printf("Enter F for french And I For indian  : \n");
//     char ch;
//     scanf("%c",&ch);

//     if (ch == 'I' || ch == 'i'){
//         namaste();
//     }else{
//         bonjour();
//     }
    
//     return 0 ;
// }

// //function Defination

// void namaste(){
//     printf("Namaste Guys!\n");
// }

// void bonjour(){
//     printf("Bonjour Guys\n");
// }


// Sum of A and B

// int sum (int a , int b);

// int main(){
//     int a , b ;

//     printf("Enter First Number : ");
//     scanf("%d" , &a);
//     printf("Enter second Number : ");
//     scanf("%d" , &b);

//     int s = sum (a , b) ;
//     printf("Sum is : %d \n " , s);

//     return 0;
// }

// int sum (int x , int y){
//     return x + y ;
// }



// Print Table 


// void printTable (int n);

// int main(){
//     int n ;
//     printf("Enter Number :");
//     scanf("%d" , &n);

//     printTable(n); //argument / Actual Parameter

//     return 0;

// }

// void printTable (int n){ // paramter / Formal parameter
//     for ( int i = 1 ; i <= 10 ; i++){
//         printf("%d \n" , i * n);
//     }

// }

// Change the parameter in function don't change the value in calling function

// void calculatePrice(float value);

// int main(){
//     float value =100.0;
//     calculatePrice(value);
//     printf("Value is : %f \n" , value);
//     return 0;

// }

// void calculatePrice(float value){
//     value = value +(0.18  * value);
//     printf("Finsl Price : %f \n" , value);
// }

//use library function to calculate the square of no given by user

// int main(){
//     int n = 4;
//     printf("%f" , pow (n , 2));
//     return 0;
// }

//write function to calculate area of a square , a circle and a rectangle

// float squareArea (float side);
// float circleArea ( float rad);
// float rectangleArea (float a , float b);

// int main(){
//     float a = 5.0;
//     float b =10.0;
//     printf("Area  of rectangle is : %f \n" , rectangleArea(a,b));
    

//     float side = 4 ;
//     printf( "Area of square is : %f \n" , squareArea(side));
    

//     float rad = 2;
//     printf("Area of circle is : %f \n" , circleArea(rad));
//     return 0;

// }

// float squareArea (float side){
//     return side * side ;
// }

// float circleArea (float rad){
//     return 3.14 * rad * rad; // pow(rad , 2)
// }

// float rectangleArea( float a , float b){
//     return a * b;
// }


// Recursion

// print Hello world 5 times 

// void printHW (int count );

// int main (){
//     printHW (5);
//     return 0;
// }

// void printHW (int count ){
//     if (count == 0){
//         return ;

//     }
//     printf("Hello World\n");
//     printHW(count -1);
// }

// Sum of first n natural number

// int sum (int n);

// int main (){
//     printf("Sum is : %d", sum (4));
//     return 0;
// }
// // recursive function 

// int sum (int n ){
//     if (n==1){
//         return 1;
//     }

// int sumNm1 = sum (n-1);
// int sumN = sumNm1 + n;
// return sumN;

// }

//Factorail of n

// int fact (int n);

// int main(){
//     printf("Factorial is : %d", fact(10));
// }

// int fact (int n){
//     if (n==0){
//         return 1;
//     }

//     int factNm1 = fact (n-1);
//     int factN= factNm1 * n;
//     return factN;
// }

// write a function to convert celcius to fahrenheit

// float convertTemp (float celsius);

// int main(){

//     float far = convertTemp(24);
//     printf("far : %f", far);
//     return 0;
// }

// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }

//Write a function to calculate percentage of a student from marks in science , maths , and sanskrit

// int calcPercentage (int Science , int Math , int Hindi);

// int main(){
//     int sc = 99;
//     int math = 98;
//     int hindi = 98;
    
//     printf("Percentage is : %d  " , calcPercentage(sc , math , hindi));
//     return 0;


// }

// int calcPercentage(int Science  , int Math , int Hindi){
//     return ((Science + Math + Hindi)/3);
// }

// write a function to print n term of fibonacci sequence

int fib(int n);

int main(){
    printf("%d" , fib(6));
    return 0;
}

int fib (int n ){
    if (n == 0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    int fibNm1 = fib (n-1);
    int fibNm2 = fib (n-2);
    int fibN = fibNm1 + fibNm2;
// printf("fib of %d is %d \n" , n , fibN);
    return fibN;
}