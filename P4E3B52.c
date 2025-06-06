//需使用Big5編碼格式開啟檔案，比避免中文變成亂碼
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    #define MAX_STUDENTS 10
    int studentCount = 0;
    char names[MAX_STUDENTS][30];
    int ids[MAX_STUDENTS];
    int mathScores[MAX_STUDENTS];
    int physicsScores[MAX_STUDENTS];
    int englishScores[MAX_STUDENTS];
    int found = 0;
    char confirm;
    while (1) { 
        system("cls");
        printf("-----------[Grade System]-----------\n");
        printf("| a. Enter student grades      |\n");
        printf("| b. Display student grades    |\n");
        printf("| c. Search for student grades |\n");
        printf("| d. Grade ranking             |\n");
        printf("| e. Exit system               |\n");
        printf("-----------------------------------\n");
        char choice;      // 存放使用者選項
        printf("請選擇功能 (a-e)：");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a': {
                system("cls");
                int n;
                do {
                    printf("請輸入學生筆數 (5~10)：");
                    scanf("%d", &n);
                    if (n < 5 || n > 10) {
                        printf("錯誤：筆數必須介於 5 到 10 之間。\n");
                    }
                } while (n < 5 || n > 10);

                studentCount = n;
                for (int i = 0; i < studentCount; i++) {
                    printf("\n【第 %d 位學生】\n", i + 1);
                    printf("  姓名：");
                    scanf("%s", names[i]);
                    do {
                        printf("  學號 (6 位整數)：");
                        scanf("%d", &ids[i]);
                        if (ids[i] < 100000 || ids[i] > 999999) {
                            printf("  錯誤：請輸入 100000∼999999。\n");
                        }
                    } while (ids[i] < 100000 || ids[i] > 999999);
                    do {
                        printf("  數學成績 (0~100)：");
                        scanf("%d", &mathScores[i]);
                        if (mathScores[i] < 0 || mathScores[i] > 100) {
                            printf("  錯誤：請輸入 0∼100 之間。\n");
                        }
                    } while (mathScores[i] < 0 || mathScores[i] > 100);
                    do {
                        printf("  物理成績 (0~100)：");
                        scanf("%d", &physicsScores[i]);
                        if (physicsScores[i] < 0 || physicsScores[i] > 100) {
                            printf("  錯誤：請輸入 0∼100 之間。\n");
                        }
                    } while (physicsScores[i] < 0 || physicsScores[i] > 100);
                    do {
                        printf("  英文成績 (0~100)：");
                        scanf("%d", &englishScores[i]);
                        if (englishScores[i] < 0 || englishScores[i] > 100) {
                            printf("  錯誤：請輸入 0∼100 之間。\n");
                        }
                    } while (englishScores[i] < 0 || englishScores[i] > 100);
                }
                printf("\n所有資料已輸入完畢，按任意鍵返回主選單...");
                system("pause");
                break;
            }

            case 'b':
                system("cls");  // 清除畫面
                printf("----- 所有學生成績 -----\n\n");
                for (int i = 0; i < studentCount; i++) {
                float avg = (mathScores[i] + physicsScores[i] + englishScores[i]) / 3.0f;
                printf("學生 %d：\n", i + 1);
                printf("  姓名：%s\n", names[i]);
                printf("  學號：%d\n", ids[i]);
                printf("  數學：%d\n", mathScores[i]);
                printf("  物理：%d\n", physicsScores[i]);
                printf("  英文：%d\n", englishScores[i]);
                printf("  平均：%.1f\n", avg);
                printf("------------------------\n");
                }
                printf("按任意鍵返回主選單...");
                system("pause");
                break;
            case 'c':{
                char searchName[30];
                system("cls");
                printf("請輸入要搜尋的姓名：");
                scanf("%s", searchName);
                for (int i = 0; i < studentCount; i++) {
                    if (strcmp(names[i], searchName) == 0) {
                        float avg = (mathScores[i] + physicsScores[i] + englishScores[i]) / 3.0f;
                        printf("\n>>> 找到學生：%s <<<\n", names[i]);
                        printf("  學號：%d\n", ids[i]);
                        printf("  數學：%d\n", mathScores[i]);
                        printf("  物理：%d\n", physicsScores[i]);
                        printf("  英文：%d\n", englishScores[i]);
                        printf("  平均：%.1f\n", avg);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\n錯誤：查無此人 [%s] 的資料。\n", searchName);
                }
                printf("\n按任意鍵返回主選單...");
                system("pause");
                break;
            }
            case 'd':
                system("cls");  // 清除畫面
                int idx[MAX_STUDENTS];
                for (int i = 0; i < studentCount; i++) {
                    idx[i] = i;
                }
                for (int i = 0; i < studentCount - 1; i++) {
                    for (int j = i + 1; j < studentCount; j++) {
                        float avg_i = (mathScores[idx[i]] + physicsScores[idx[i]] + englishScores[idx[i]]) / 3.0f;
                        float avg_j = (mathScores[idx[j]] + physicsScores[idx[j]] + englishScores[idx[j]]) / 3.0f;
                        if (avg_j > avg_i) {
                            int tmp = idx[i];
                            idx[i] = idx[j];
                            idx[j] = tmp;
                        }
                    }
                }
                printf("----- 成績排名 (高→低) -----\n\n");
                for (int rank = 0; rank < studentCount; rank++) {
                    int i = idx[rank];
                    float avg = (mathScores[i] + physicsScores[i] + englishScores[i]) / 3.0f;
                    printf("%2d. %-10s  學號:%6d  平均:%.1f\n",
                        rank + 1,
                        names[i],
                        ids[i],
                        avg);
                }
                printf("\n按任意鍵返回主選單...");
                system("pause");
                break;
            case 'e':
                while (1) {
                system("cls");  // 清螢幕
                printf("確定離開？(y/n)：");
                scanf(" %c", &confirm);
                    if (confirm == 'y'){ 
                        printf("謝謝使用，再見！\n");
                        return 0; 
                    }
                    else if (confirm == 'n') {
                        break;    
                    }
                }
                system("pause");
                break;
            default:
                printf("無效的選項，請重新選擇。\n");
                system("pause");
                break;
        }
    }
    system("pause");
    return 0;
}
//這次的程式作業比較繁瑣，有很多選項需要注意
//這次在使用switch時，在case內宣告變數會導致無法編譯
//查詢過才得知無法在switch執行宣告或初始化，後續case會報錯
//還有索引找尋資料與排序等也是之前不常使用的程式
//這次程式雖然感覺沒有上次困難，但有點複雜
