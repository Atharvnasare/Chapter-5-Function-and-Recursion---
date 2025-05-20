#include<stdio.h>

//declaration/Prototype
void namaste() ;
void bonjour() ;

//function call
int main (){
    printf("Enter F for french And I For indian  : \n");
    char ch;
    scanf("%c",&ch);

    if (ch == 'I' || ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    
    return 0 ;
}



//function Defination
void namaste(){
    printf("Namaste Guys!\n");
}

void bonjour(){
    printf("Bonjour Guys\n");
}
