#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,y,S,diem=0;
    system("cls");
    printf("************Chao mung ban den voi bai tap trac nghiem!***********\n");
    while(1==1)
    {
        srand(time(NULL));
        x = rand()%100;
        y = rand()%100;
        S = x + y;
        printf("%d + %d = \n",x,y);
        int fake1,fake2,fake3;
        do
        {
            fake1 = 50 + rand()%150;
        }while (fake1==S);
        do
        {
            fake2 = 50 + rand()%150;
        }while (fake2==S || fake2 == fake1);
        do
        {
            fake3 = 50 + rand()%150;
        }while (fake3==fake1 || fake3 == fake2 || fake3==S);
        int vtri;
        char dapan;
        vtri = 1 + rand()%4;
        switch (vtri)
        {
        case 1:
            {
                dapan = 'a';
                printf("A.%d\tB.%d\tC.%d\tD.%d\n",S,fake1,fake2,fake3);
                break;
            }
        case 2:
            {
                dapan = 'b';
                printf("A.%d\tB.%d\tC.%d\tD.%d\n",fake1,S,fake2,fake3);
                break;
            }
        case 3: 
            {
                dapan = 'c';
                printf("A.%d\tB.%d\tC.%d\tD.%d\n",fake1,fake2,S,fake3);
                break;
            }
        case 4:
                {
                dapan = 'd';
                printf("A.%d\tB.%d\tC.%d\tD.%d\n",fake1,fake2,fake3,S);
                break;
                }
        default:
            break;
        }
        fflush(stdin);
        char luachon;
        int luachon2;
        scanf("%c",&luachon);
        if(luachon!=dapan)
        {
            printf("Ban da tra loi sai!!\n");
            printf("Ban co muon thu suc lai khong??\n");
            printf("1.Co\n2.Khong\n");
            do
            {
                scanf("%d",&luachon2);
                if(luachon2!= 1 && luachon2 != 2)
                {
                    printf("Moi ban chon 1 hoac 2!!\n");
                }
                else break;
            } while (luachon2!= 1 && luachon2!=2 );
            if (luachon2==1)
                {
                    system("cls");
                    printf("************Chao mung ban den voi bai tap trac nghiem!***********\n");
                    diem = 0;
                }
            else if(luachon2 == 2)
                {
                    break;
                }
        }
        else
        {
            diem+=1;
            printf("diem +1\n");
        }
    }
    printf("DIEM CUA BAN: %d\n",diem);
    system("pause");
    return 0;
}