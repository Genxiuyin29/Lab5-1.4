#include <stdio.h>

int main(void) {
  int score;
  float grade;
  printf("Enter score : ");
  scanf("%d",&score);

  grade = score/10.0;
  
  if(score >= 0 && score <= 100){
    switch(score/10){
      case 10: case 9: case 8: 
      printf("Grade : A");
      break;
      case 7 : 
            if(grade >= 7.5){
              printf("Grade : B+ \n");
            } 
            else { 
            printf("Grade : B \n");
            }
            break;
      case 6 : 
            if(grade >= 6.5){
              printf("Grade : C+ \n");
            } 
            else { 
            printf("Grade : C \n");
            }
            break;
      case 5 : 
            if(grade >= 5.5){
              printf("Grade : D+ \n");
            } 
            else { 
            printf("Grade : D \n");
            }
            break;  
      default: printf("Grade : F \n");
      }
    
  }
  

  return 0; 
}