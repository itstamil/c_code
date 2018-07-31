#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 20
int number;
short int index, *no_of_value, index_one ,index_two, temp;

void print_array(void){

        printf("The no_of_values arranged in ascending order are given below \n");

        for (index = 0; index < number; ++index)

            printf("%d\n", no_of_value[index]);
     }
 
int arrange_in_order(short int *array){

      
     for (index_one = 0; index_one < number; ++index_one) 
      {
    for (index_two = index_one + 1; index_two < number ; ++index_two)
       {

           if (array[index_one] > array[index_two]) 
            {
                    temp =  array[index_one];

                    array[index_one] = array[index_two];

                    array[index_two] = temp;
            }
        }
       }
        print_array();
    }


 int main()
  {
     
     no_of_value = (short int *) malloc(MAX_LEN * sizeof(int));
     printf("Enter the Number of values to be in an array : ");
     scanf("%d", &number);
     printf("Enter the no_of_values \n");
      for (index = 0; index < number; ++index){
          scanf("%d", &no_of_value[index]);
     }
        arrange_in_order(no_of_value);

        return 0;
 }
    
