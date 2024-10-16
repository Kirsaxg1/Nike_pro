////#include <stdio.h>
////
//int main() {
//
//	int number, found = 0, hight = 20, low = 0, arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//
//	printf("Enter number to search: \n");
//	scanf("%d", &number);
//
//	while (low <= hight) {
//		int mid = ((low + hight) / 2);
//
//		if (arr[mid] == number) {
//			found = 1;
//			return 1;
//		}
//		else if (arr[mid] < number) {
//			low = mid + 1;
//		}
//		else if (arr[mid] > number) {
//			hight = mid - 1;
//		}
//	}
//	if (found)[
//		printf(" Найдено \n");
//	else {
//		printf("Число не найдено\n");
//	}
//	return 0;
//}