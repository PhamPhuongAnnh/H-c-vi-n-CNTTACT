#include <stdio.h>
#include <conio.h>
#include <windows.h>

void TextColor (int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void hidecursor()//Xoa con tro
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

#define ColorCode_Back			0
#define ColorCode_DarkBlue		1
#define ColorCode_DarkGreen		2
#define ColorCode_DarkCyan		3
#define ColorCode_DarkRed		4
#define ColorCode_DarkPink		5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite		7
#define ColorCode_Grey			8
#define ColorCode_Blue			9
#define ColorCode_Green			10
#define ColorCode_Cyan			11
#define ColorCode_Red			12
#define ColorCode_Pink			13
#define ColorCode_Yellow		14
#define ColorCode_White			15


int main()
{
    hidecursor();
    int i,j;
    for(i=1; i<=100; i++)
    {
        SetConsoleOutputCP(65001);
        system("cls");
        TextColor(15);
        printf("\n\n\t\t\tHELLO");
        printf("\n\n\t\t\t\t Loading...%d %c", i, '%');
        printf("\n\n\t\t-----------------------------------------------\n\n");
        if(i==10)
        {
            for(j=1; j<=10; j++)
            {
                TextColor(5);
                if(j==1)
                {
                    char a[100]="\t\t\t\tDữ dội và dịu êm\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==2)
                {
                    char a[100]="\t\t\t\tỒn ào và lặng lẽ\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==3)
                {
                    char a[100]="\t\t\t\tSông không hiểu nổi mình\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==4)
                {
                    char a[100]="\t\t\t\tSóng tìm ra tận bể\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
            }
            Sleep(100);
        }
        if(i==20)
        {
            TextColor(13);
            for(j=1; j<=10; j++)
            {
                if(j==1)
                {
                    char a[100]="\t\t\t\tÔi con sóng ngày xưa\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==2)
                {
                    char a[100]="\t\t\t\tVà ngày sau vẫn thế\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==3)
                {
                    char a[100]="\t\t\t\tNỗi khát vọng tình yêu\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==4)
                {
                    char a[100]="\t\t\t\tBồi hồi trong ngực trẻ\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
            }
            Sleep(1000);
        }
        if(i==30)
        {

            TextColor(2);
            for(j=1; j<=10; j++)
            {
                if(j==1)
                {
                    char a[100]="\t\t\t\tTrước muôn trùng sóng bể\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==2)
                {
                    char a[100]="\t\t\t\tEm nghĩ về anh, em\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==3)
                {
                    char a[100]="\t\t\t\tEm nghĩ về biển lớn\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==4)
                {
                    char a[100]="\t\t\t\tTừ nơi nào sóng lên?\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
            }
            Sleep(1000);
        }
        if(i==40)
        {
            TextColor(3);


            for(j=1; j<=10; j++)
            {
                if(j==1)
                {
                    char a[100]="\t\t\t\tSóng bắt đầu từ gió\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==2)
                {
                    char a[100]="\t\t\t\tGió bắt đầu từ đâu?\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==3)
                {
                    char a[100]="\t\t\t\tEm cũng không biết nữa\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==4)
                {
                    char a[100]="\t\t\t\tKhi nào ta yêu nhau\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
            }
            Sleep(1000);
        }
        if(i==50)
        {
            TextColor(4);
            for(j=1; j<=10; j++)
            {
                if(j==1)
                {
                    char a[100]="\t\t\t\t Con sóng dưới lòng sâu\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);

                }
                if(j==2)
                {
                    char a[100]="\t\t\t\tCon sóng trên mặt nước\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);


                }
                if(j==3)
                {
                    char a[100]="\t\t\t\tÔi con sóng nhớ bờ\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);


                }
                if(j==4)
                {
                    char a[100]="\t\t\t\tNgày đêm không ngủ được\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);



                }
                if(j==5)
                {
                    char a[100]="\t\t\t\tLòng em nhớ đến anh\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                if(j==6)
                {
                    char a[100]="\t\t\t\tCả trong mơ còn thức\n";
                    for(int i =0; i<strlen(a); i++)
                    {
                        printf("%c",a[i]);
                        Sleep(50 + rand()%50);
                    }
                    Sleep(500);
                }
                Sleep(1000);
            }
            if(i==60)
            {
                TextColor(5);
                for(j=1; j<=10; j++)
                {
                    if(j==1)
                    {
                        char a[100]="\t\t\t\tDẫu xuôi về phương bắc\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);
                    }
                    if(j==2)
                    {
                        char a[100]="\t\t\t\tDẫu ngược về phương nam\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                    if(j==3)
                    {
                        char a[100]="\t\t\t\tNơi nào em cũng nghĩ\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                    if(j==4)
                    {
                        char a[100]="\t\t\t\tHướng về anh - một phương\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                }
                Sleep(1000);
            }
            if(i==70)
            {
                TextColor(6);
                for(j=1; j<=10; j++)
                {
                    if(j==1)
                    {
                        char a[100]="\t\t\t\tỞ ngoài kia đại dương\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);


                    }
                    if(j==2)
                    {
                        char a[100]="\t\t\t\tTrăm nghìn con sóng đó\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);
                    }
                    if(j==3)
                    {
                        char a[100]="\t\t\t\tCon nào chẳng tới bờ\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);
                    }
                    if(j==4)
                    {
                        char a[100]="\t\t\t\tDù muôn vời cách trở\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);
                    }
                }
                Sleep(1000);
            }
            if(i==80)
            {
                TextColor(7);
                for(j=1; j<=10; j++)
                {
                    if(j==1)
                    {
                        char a[100]="\t\t\t\tCuộc đời tuy dài thế\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                    if(j==2)
                    {
                        char a[100]="\t\t\t\tNăm tháng vẫn đi qua\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);


                    }
                    if(j==3)
                    {
                        char a[100]="\t\t\t\tNhư biển kia dẫu rộng\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);
                    }
                    if(j==4)
                    {
                        char a[100]="\t\t\t\tMây vẫn bay về xa\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                }
                Sleep(1000);
            }
            if(i==90)
            {
                TextColor(8);
                for(j=1; j<=10; j++)
                {
                    if(j==1)
                    {
                        char a[100]="\t\t\t\tLàm sao được tan ra\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                    if(j==2)
                    {
                        char a[100]="\t\t\t\tThành trăm con sóng nhỏ\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(5);
                        }
                        Sleep(500);

                    }
                    if(j==3)
                    {
                        char a[100]="\t\t\t\tGiữa biển lớn tình yêu\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                    if(j==4)
                    {
                        char a[100]="\t\t\t\tĐể ngàn năm còn vỗ\n";
                        for(int i =0; i<strlen(a); i++)
                        {
                            printf("%c",a[i]);
                            Sleep(50 + rand()%50);
                        }
                        Sleep(500);

                    }
                }
                Sleep(1000);
            }
//            if(i==99)
//            {
//                for(j=1; j<=23; j++)
//                {
//                    system("cls");
//                    if(j==1)
//                    {
//                        printf("\n\n\n\n\t\t\t\tCac ban co con nho bai tho nay ten la gi khong???\n");
//                        Sleep(2000);
//                    }
//                    if(j==10)
//                    {
//                        printf("\t\t\t\tHay doan xem truoc khi xem het video nay <3");
//                        Sleep(2000);
//                    }
//                    if(j==23)
//                    {
//                        printf("Song - Xuan Quynh");
//                        Sleep(2000);
//                    }
//                }
//                Sleep(1000);
//            }
        }
    }
}

