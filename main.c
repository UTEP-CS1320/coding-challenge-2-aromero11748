/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(s < 120) {
    if(d < 80) {
      printf("Normal\n"); // code that came in the main c Checks for normal pressure
    }
  }

  if (s < d){
    printf("ERROR"); // if the S < D then there will be a error message
  }
else if ((d < 80) && ((s >= 120) && (s <=129))){ // checks for the Elevated values
printf("Elevated");
}
else if ((d >= 80) && (d <= 89) || (s >= 130) && (s <= 139)){ // checks for the Stage 1 
  printf("Stage 1 Hypertension")
}
else if ((d > 90) || (s >= 140)) { // checks Stage 2 Hypertension
  printf("Stage 2 Hypertension")
}
else if ((d > 120) && (s > 180) || (d > 120) || (s > 180)){ // checks for the Hypertensive
  printf("Hypertensive Crysis")
}





}
