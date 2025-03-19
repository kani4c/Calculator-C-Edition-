#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main() { 
    char errorMessage[16] = "Bad input value!"; 
    char input1[50]; 
    char input2[50]; 
    char mainOperator[8]; 
    int inputNumber1 = 0; 
    int inputNumber2 = 0; 
    int output; 

    printf("'Calc is short for calculator for those just joining the stream'\n\nInput first number of operation:\n\n");
    
    scanf("%s", &input1); 

    if (atoi(input1)==0){ 
        printf("%s", &errorMessage); 
        return 0; 
    } else { 
        inputNumber1 = atoi(input1); 
    } 

    printf("\nPlease input the second number of the operation\n\n"); 

    scanf("%s", &input2); 

    if (atoi(input2)==0){ 
        printf("%s", &errorMessage); 
        return 0; 
    } else { 
        inputNumber2 = atoi(input2); 
    } 

    printf("\nPlease input the operator (Add, Subtract, Multiply, Divide)\n\n"); 
    
    scanf("%s", &mainOperator); 

    if (strcmp(mainOperator, "Add") == 0){ 
        output = inputNumber1+inputNumber2; 
        printf("\n%d", output); 
    } else if (strcmp(mainOperator, "Subtract") == 0){
        output = inputNumber1-inputNumber2;
        printf("\n%d", output);
    } else if (strcmp(mainOperator, "Multiply") == 0){ 
        output = inputNumber1*inputNumber2;
        printf("\n%d", output); 
    } else if (strcmp(mainOperator, "Divide") == 0){ 
        output = inputNumber1/inputNumber2; 
        printf("\n%d", output); 
    } else{ 
        printf("%s", errorMessage); 
    } 
    return 0; 
} 