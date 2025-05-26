//需使用Big5編碼格式開啟檔案，比避免中文變成亂碼
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf(
        "                _______\n"
        "                |  |  |   \n"
        "                |  |  |   \n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "            [___|__|__|___]\n"
        "                 | | |\n"
        "                 | | | \n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | | \n"
        "                 | | |\n"
        "                 \\ | /\n"
        "                  \\|/     \n"
    );
    printf("\n程式設計作業四\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("沈威宇\n");
    system("pause");
    system("cls");  //清除畫面上所有文字/元素
    printf("請輸入四位數密碼:\n");
    int pw = 2025, input;       //密碼預設2025
    scanf("%d", &input);
    if (input != pw) {
        printf("密碼輸入錯誤\n");
        printf("%c", '\a');
        return 1;
    }
    system("cls");    // 清除畫面  
    char choice;      // 存放使用者選項
    // 印出選單框
    printf("-----------[Grade System]-----------\n");
    printf("| a. Enter student grades      |\n");
    printf("| b. Display student grades    |\n");
    printf("| c. Search for student grades |\n");
    printf("| d. Grade ranking             |\n");
    printf("| e. Exit system               |\n");
    printf("-----------------------------------\n");
    system("pause");
    return 0;
    }