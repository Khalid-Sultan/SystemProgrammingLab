//Arrays2.c
#include <stdio.h>
#define ARRAYSIZE 10

int E_1() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    int maxage = -10000 , person;
    for(person=1; person<ARRAYSIZE; ++person){
        if (age[person-1] > maxage ) maxage=age[person-1];
    }
    printf("\nThe maximum age is = %d ", maxage);
    return 0;
}
int E_2() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    int maxage = age[0], person;
    for(person=1; person<ARRAYSIZE; ++person){
        if (age[person-1] > maxage ) maxage=age[person-1];
    }
    printf("\nThe maximum age is = %d ", maxage);
    return 0;
}
int E_3() {
    int i = 0;
    int age[ARRAYSIZE];
    for(i=0;i<ARRAYSIZE;i++){
        printf("Element %d : ",i);
        scanf("%d",&(age[i]));
    }
    int maxage = age[0], person;
    for(person=0; person<ARRAYSIZE; person++){
        if (age[person] > maxage ) maxage=age[person];
    }
    printf("\nThe maximum age is = %d ", maxage);
    return 0;
}
int E_4() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    int maxage = age[0], person;
    for(person=ARRAYSIZE-1;person>=0; person--){
        if (age[person] > maxage ) maxage=age[person];
    }
    printf("\nThe maximum age is = %d ", maxage);
    return 0;
}



int E_5() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    double sum = 0;
    int person;
    for(person=0; person<ARRAYSIZE; person++){
            sum += age[person];
    }
    double average = sum/ARRAYSIZE;
    printf("\nThe average age is = %.2f ", average);
    return 0;
}
int E_6() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    double sum = 0;
    int person = 0;
    while(person<ARRAYSIZE){
            sum += age[person];
            person++;
    }
    double average = sum/ARRAYSIZE;
    printf("\nThe average age is = %.2f ", average);
    return 0;
}
int E_7(){
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    int firstIndex, secondIndex;
    printf("Original Array : ");
    int i;
    for(i = 0; i<ARRAYSIZE;i++){
            printf("%d  ",age[i]);
    }
    printf("\nWhat is the index of the person you want to change position : ");
    scanf("%d",&firstIndex);
    printf("\nWhere do you want to change it to : ");
    scanf("%d",&secondIndex);
    int temp = age[firstIndex];
    age[firstIndex] = age[secondIndex];
    age[secondIndex] = temp;
    printf("\nSwapping Done");
    printf("\nFinal Array : ");
    for(i = 0; i<ARRAYSIZE;i++){
            printf("%d  ",age[i]);
    }
    return 0;

}
void main(){
    E_1();
    E_2();
    E_3();
    E_4();
    E_5();
    E_6();
    E_7();
}
