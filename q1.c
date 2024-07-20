#include<stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter score:- ");
    scanf("%d",&score); 

    grade=(score >= 80) ? 'A' :
           (score >= 70) ? 'B' :
           (score >= 60) ? 'C' :
           (score >= 50) ? 'D' : 'F';

    printf("%c",grade);

    switch(grade){
        case 'A':
            printf("\n Excelent Work");
            break;

        case 'B':
            printf("\n Well done");
            break;
        
        case 'C':
            printf("\n Good job");
            break;

        case 'D':
            printf("\n You passed, but you could do better");
            break;

        case 'F':
            printf("\n Sorry you failed");
            break;
    }

    if(grade=='F')
    {
        printf("\n Please try again next time");
    }
    else
    {
        printf("\n Congratulations! You are eligible for the next level");
    }

    return 0;
}