#include <stdio.h>
#include <stdbool.h>

int main(){

    /*
    The operator && (AND) checks if two conditions are true
    */

   float temp = 25;
   bool sunny = true;

   if(temp >= 0 && temp <= 30 && sunny == true){    // or simply `sunny`
    printf("The weather is good!\n");
   }else{
    printf("The weather is bad!\n");
   }

   /*
   The operator || (OR) checks if at least one condition is true.
   */

   if(temp <= 0 || temp >= 30){    
    printf("The weather is good!\n");
   }else{
    printf("The weather is bad!\n");
   }

    /*
    The operator =! (NOT) reverses the state of a condition.
    */
   if(!sunny){    // precede a boolean to reverse it
    printf("The weather is good!\n");
   }else{
    printf("The weather is bad!\n");
   }
}