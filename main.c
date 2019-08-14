
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aranzman{

    char imeAgencije[10];
    char imeHotela[10];
    char mesto[10];
    int brojNocenja;
    int cenaAranzmana;

}Aranzmani;

int * niz(){
    //definicija nizova
    int *c;
    int A[100] = {0};
    int B[100] = {0};




    //brojaci
    int i = 0;
    int j = 0;
    int k = 0;


    int m = 0;
    int n = 0;
    int z = 0;
    printf("Unesi broj elemenata za nizove: \n");
    printf("Za niz A: \n");
    scanf("%d",&m);
    printf("Za niz B: \n");
    scanf("%d",&n);

    printf("Unesi elemente u niz A: \n");
    for(i=0 ; i<m ; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&A[i]);
    }

    printf("Unesi element u niz B: \n");
    for(i=0 ; i<n ; i++)
    {
        printf("B[%d] : ",i);
        scanf("%d",&B[i]);
    }


    z = m + n;

    c = (int*)calloc(z, sizeof(int));

    if( c == NULL){

        printf("Nije moguce alocirati memoriju: ");
        exit(-1);

    }

    for(i; i < m; i++){
        if(A[i] < 0){
            c[k] = A[i];
            k++;
        }
    }

    for(j; j < n; j++){
        if(A[j] < 0){
            c[k] = A[j];
            k++;
        }
    }
    if(k == 0){
        printf("Niz C nema elemente! \n");

    }else{
    printf(" Niz C ima elemente:\n ");


    for(i=0;i<m; i++){

        printf("%d \n", c[i]);
    }

    }

    return &c;
}

int main()
{

    int i = 0;
    int maks;
    int lokacija = 1;
    Aranzmani aranzmani[10];


    strcpy(aranzmani[0].imeAgencije, "Agencija 1");
    strcpy(aranzmani[0].imeHotela, "Hotel 1");
    strcpy(aranzmani[0].mesto, "Lefkada");
    aranzmani[0].brojNocenja = 4;
    aranzmani[0].cenaAranzmana = 30;

    strcpy(aranzmani[1].imeAgencije, "Agencija 2");
    strcpy(aranzmani[1].imeHotela, "Hotel 2");
    strcpy(aranzmani[1].mesto, "Berlin");
    aranzmani[1].brojNocenja = 5;
    aranzmani[1].cenaAranzmana = 50;

    strcpy(aranzmani[2].imeAgencije, "Agencija 3");
    strcpy(aranzmani[2].imeHotela, "Hotel 3");
    strcpy(aranzmani[2].mesto, "Lefkada");
    aranzmani[2].brojNocenja = 10;
    aranzmani[2].cenaAranzmana = 150;

    strcpy(aranzmani[3].imeAgencije, "Agencija 4");
    strcpy(aranzmani[3].imeHotela, "Hotel 4");
    strcpy(aranzmani[3].mesto, "London");
    aranzmani[3].brojNocenja = 20;
    aranzmani[3].cenaAranzmana = 600;


    maks = aranzmani[0].cenaAranzmana;

    int velicina = sizeof(aranzmani)/sizeof(aranzmani[0]);

    for(i; i < velicina; i++){

        if(!strcmp(aranzmani[i].mesto, "Lefkada") &&  aranzmani[i].cenaAranzmana > maks){

            maks = aranzmani[i].cenaAranzmana;
            lokacija = i + 1;
            printf("Mesto je: %s, a cena je: %d \n", aranzmani[i].mesto, aranzmani[i].cenaAranzmana);

        }

    }


    int *a = niz();

    return 0;
}


