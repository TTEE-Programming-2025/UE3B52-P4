//�ݨϥ�Big5�s�X�榡�}���ɮסA���קK�����ܦ��ýX
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
    char choice;      // �s��ϥΪ̿ﶵ
    // �L�X����
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