//#include <stdio.h>
//
//int main() {
//    int number;
//    char str[20]; // ���������� ����� ��� ����������
//    char* ptr = str; // ��������� �� ������ ������
//
//
//    printf("Enter number: \n");
//    scanf("%d", &number);
//
//    if (number == 0) {
//        *ptr++ = '0'; //  ��� ���� ��������� '0' 
//    }
//    else {
//        while (number != 0) {
//            *ptr++ = '0' + (number % 10); // ��������� ��������� ����� 
//            number /= 10; // ����� �� 10 ��� �������� � ��������� �����
//        }
//    }
//    *ptr = '\0'; //  ��������� ������� ������ � �����
//
//    printf("The final number: %s\n", str);
//    return 0;
//}
//
