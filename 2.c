//#include <stdio.h>
//
//int main() {
//    int number;
//    char str[20]; // Достаточно места для результата
//    char* ptr = str; // Указатель на начало строки
//
//
//    printf("Enter number: \n");
//    scanf("%d", &number);
//
//    if (number == 0) {
//        *ptr++ = '0'; //  Для нуля добавляем '0' 
//    }
//    else {
//        while (number != 0) {
//            *ptr++ = '0' + (number % 10); // Добавляем последнюю цифру 
//            number /= 10; // Делим на 10 для перехода к следующей цифре
//        }
//    }
//    *ptr = '\0'; //  Добавляем нулевой символ в конце
//
//    printf("The final number: %s\n", str);
//    return 0;
//}
//
