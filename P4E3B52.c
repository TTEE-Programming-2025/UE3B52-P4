//�ݨϥ�Big5�s�X�榡�}���ɮסA���קK�����ܦ��ýX
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
    printf("\n�{���]�p�@�~�|\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("�H�¦t\n");
    system("pause");
    system("cls");  //�M���e���W�Ҧ���r/����
    printf("�п�J�|��ƱK�X:\n");
    int pw = 2025, input;       //�K�X�w�]2025
    scanf("%d", &input);
    if (input != pw) {
        printf("�K�X��J���~\n");
        printf("%c", '\a');
        return 1;
    }
    system("cls");    // �M���e��  
    #define MAX_STUDENTS 10
    int studentCount = 0;
    char names[MAX_STUDENTS][30];
    int ids[MAX_STUDENTS];
    int mathScores[MAX_STUDENTS];
    int physicsScores[MAX_STUDENTS];
    int englishScores[MAX_STUDENTS];
    int found = 0;
    while (1) { 
        system("cls");
        printf("-----------[Grade System]-----------\n");
        printf("| a. Enter student grades      |\n");
        printf("| b. Display student grades    |\n");
        printf("| c. Search for student grades |\n");
        printf("| d. Grade ranking             |\n");
        printf("| e. Exit system               |\n");
        printf("-----------------------------------\n");
        char choice;      // �s��ϥΪ̿ﶵ
        printf("�п�ܥ\�� (a-e)�G");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a': {
                system("cls");
                int n;
                do {
                    printf("�п�J�ǥ͵��� (5~10)�G");
                    scanf("%d", &n);
                    if (n < 5 || n > 10) {
                        printf("���~�G���ƥ������� 5 �� 10 �����C\n");
                    }
                } while (n < 5 || n > 10);

                studentCount = n;
                for (int i = 0; i < studentCount; i++) {
                    printf("\n�i�� %d ��ǥ͡j\n", i + 1);
                    printf("  �m�W�G");
                    scanf("%s", names[i]);
                    do {
                        printf("  �Ǹ� (6 ����)�G");
                        scanf("%d", &ids[i]);
                        if (ids[i] < 100000 || ids[i] > 999999) {
                            printf("  ���~�G�п�J 100000��999999�C\n");
                        }
                    } while (ids[i] < 100000 || ids[i] > 999999);
                    do {
                        printf("  �ƾǦ��Z (0~100)�G");
                        scanf("%d", &mathScores[i]);
                        if (mathScores[i] < 0 || mathScores[i] > 100) {
                            printf("  ���~�G�п�J 0��100 �����C\n");
                        }
                    } while (mathScores[i] < 0 || mathScores[i] > 100);
                    do {
                        printf("  ���z���Z (0~100)�G");
                        scanf("%d", &physicsScores[i]);
                        if (physicsScores[i] < 0 || physicsScores[i] > 100) {
                            printf("  ���~�G�п�J 0��100 �����C\n");
                        }
                    } while (physicsScores[i] < 0 || physicsScores[i] > 100);
                    do {
                        printf("  �^�妨�Z (0~100)�G");
                        scanf("%d", &englishScores[i]);
                        if (englishScores[i] < 0 || englishScores[i] > 100) {
                            printf("  ���~�G�п�J 0��100 �����C\n");
                        }
                    } while (englishScores[i] < 0 || englishScores[i] > 100);
                }
                printf("\n�Ҧ���Ƥw��J�����A�����N���^�D���...");
                system("pause");
                break;
            }

            case 'b':
                system("cls");  // �M���e��
                printf("----- �Ҧ��ǥͦ��Z -----\n\n");
                for (int i = 0; i < studentCount; i++) {
                float avg = (mathScores[i] + physicsScores[i] + englishScores[i]) / 3.0f;
                printf("�ǥ� %d�G\n", i + 1);
                printf("  �m�W�G%s\n", names[i]);
                printf("  �Ǹ��G%d\n", ids[i]);
                printf("  �ƾǡG%d\n", mathScores[i]);
                printf("  ���z�G%d\n", physicsScores[i]);
                printf("  �^��G%d\n", englishScores[i]);
                printf("  �����G%.1f\n", avg);
                printf("------------------------\n");
                }
                printf("�����N���^�D���...");
                system("pause");
                break;
            case 'c':{
                char searchName[30];
                system("cls");
                printf("�п�J�n�j�M���m�W�G");
                scanf("%s", searchName);
                for (int i = 0; i < studentCount; i++) {
                    if (strcmp(names[i], searchName) == 0) {
                        float avg = (mathScores[i] + physicsScores[i] + englishScores[i]) / 3.0f;
                        printf("\n>>> ���ǥ͡G%s <<<\n", names[i]);
                        printf("  �Ǹ��G%d\n", ids[i]);
                        printf("  �ƾǡG%d\n", mathScores[i]);
                        printf("  ���z�G%d\n", physicsScores[i]);
                        printf("  �^��G%d\n", englishScores[i]);
                        printf("  �����G%.1f\n", avg);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\n���~�G�d�L���H [%s] ����ơC\n", searchName);
                }
                printf("\n�����N���^�D���...");
                system("pause");
                break;
            }
            case 'd':
                break;
            case 'e':
                break;
            default:
                printf("�L�Ī��ﶵ�A�Э��s��ܡC\n");
                system("pause");
                break;
        }
    }
    system("pause");
    return 0;
}