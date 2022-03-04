#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int x,y,S,vtri;
    while(1==1)
    {
        char dapan,luachon;
        srand(time(NULL));
        x = rand()%100;
        y = rand()%100;
        S = x+y;
        int fake1,fake2,fake3;
        do
        {
            fake1 = 50+rand()%150;
        } while (fake1==S);
        do
        {
            fake2 = 50+rand()%150;
        } while (fake2==fake1||fake2== S);
        do
        {
            fake3 = 50+rand()%150;
        } while (fake3==fake2 || fake3 == fake1 || fake3 == S); 
        vtri = 1+rand()%4;
        printf("\n%d + %d = ?\n",x,y);
        switch (vtri)
        {
        case 1 : 
            {
                dapan = 'a';
                printf("A.%d\tB.%d\tC.%d\tD.%d\t",S,fake1,fake2,fake3);   
                break;
            }
        case 2 : 
                dapan = 'b';
                printf("A.%d\tB.%d\tC.%d\tD.%d\t",fake1,S,fake2,fake3);   
                break;
        case 3 :
                dapan = 'c';   
                printf("A.%d\tB.%d\tC.%d\tD.%d\t",fake1,fake2,S,fake3);   
                break;
        case 4 : 
                dapan = 'd';   
                printf("A.%d\tB.%d\tC.%d\tD.%d\t",fake1,fake2,fake3,S);   
                break;
        default:
        break;
        }
        fflush(stdin);
        scanf("%c",&luachon);
        if(luachon!=dapan)
        {
            printf("Ban da chon sai!!\n");
            system("pause");
            break;
        }
        
    }
    return 0;
}