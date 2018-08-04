#include <stdio.h>
#include <stdlib.h>

//array declaration for printing
   char single_digit[10][10]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
   char two_digit[10][10]={"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN",
   "SEVENTEEN","EIGHTEEN","NINTEEN"};
   char ten_multiple[10][10]={"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY",
   "EIGHTY","NINTY"};
   int *value,temp;

void num_to_string(int *num){     //parameter is address so pointer is used to access the data
        int number = *num;        //it shows error on checking pointer with integer  eg (num < 1000) so its assigned to interger
  if(number==0){
          printf("ZERO");
          }
     if(number<9999){
             if(number>1000){
             temp=number/1000;        //divide and say the quotient
             number=number%1000;      //perform modulo and bring the reminder
             printf("%s THOUSAND",single_digit[temp-1]);
             }
        if(number>100){
          temp=number/100;
          number=number%100;
          printf(" %s HUNDRED AND ",single_digit[temp-1]);
          }
        if(number>=10 && number<20){
          temp=number/10;
          printf(" %s",two_digit[temp-1]);
          }
        if(number>19 && number<=100){
          temp=number/10;
          number=number%10;
          printf("%s",ten_multiple[temp-1]);
          }
        if(number<10){
          printf(" %s",single_digit[number-1]);
          }
        }
      else
        printf("enter the small number\n");
}


int main(){
     value=malloc(sizeof(int));
     printf("Enter the number");
     scanf("%d",value);          //user input to convert the number into string
     num_to_string(value);       //pass by reference
      return 0;
}
