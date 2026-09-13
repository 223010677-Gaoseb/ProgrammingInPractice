#include <stdio.h>

int main () {

    char NameA[50], NameB[50];
    float PriceA, PriceB;
    float Budget;
    int RegStatusA, DocCompleteA, QualifiedA = 0, QualifiedB = 0;
    int RegStatusB, DocCompleteB;

    printf("Enter Budget: ");
    scanf("%f", &Budget);

    printf("Supplier A:\n");

    printf("-------------------\n");
    
    printf("Enter Supplier Name: \n");
    scanf("%s", &NameA);
    printf("Enter Supplier Price: \n");
    scanf("%f", &PriceA);
    printf("Is the registration complete?(1=Yes, 0=No): \n");
    scanf("%d", &RegStatusA);
    printf("Are all documents complete?(1=Yes, 0=No): \n");
    scanf("%d", &DocCompleteA);

    printf("Supplier B:\n");
    printf("-------------------\n");
    printf("Enter Supplier Name: \n");
    scanf("%s", &NameB);
    printf("Enter Supplier Price: \n");
    scanf("%f", &PriceB);
    printf("Is the registration complete?(1=Yes, 0=No): \n");
    scanf("%d", &RegStatusB);
    printf("Are all documents complete?(1=Yes, 0=No): \n");
    scanf("%d", &DocCompleteB);

    if (PriceA <= Budget && RegStatusA == 1 && DocCompleteA == 1){
        QualifiedA = 1;
    }
    else {
        QualifiedA = 0;
    }

    if (PriceB <= Budget && RegStatusB == 1 && DocCompleteB == 1){
        QualifiedA = 1;
    }
    else {
        QualifiedA = 0;
    }

    if (QualifiedA = 1 && PriceA < PriceB){
        printf("Supplier:\n%s is preferred supplier.", NameA);
    }
    else {
        printf("Supplier:\n%s is preferred supplier.", NameB);
    }
   

    return 0;

}