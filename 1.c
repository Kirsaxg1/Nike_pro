//#include <stdio.h>
//#define SIZE 5
//
//int main() {
//
//	int arr[ SIZE ];
//	int n = sizeof( arr ) / sizeof( arr[ 0 ] );
//	int i, j, k;
//
//	printf( "Enter a arr ( 5 elements ): \n" );
//	for ( int i = 0; i < n; i++ ) {
//		scanf( "%d", &arr[ i ] );
//	}
//
//	printf( "unsorted array: \n" );
//
//	for ( i = 0; i < SIZE; i++) {
//		printf( "% d", arr[ i ] );
//	}
//
//	for ( i = 0; i < n - 1; i++ ) {
//		for ( j = 0; j < n - i - 1; j++ ) {
//			if ( arr[ j ] > arr[ j + 1 ] ) {
//
//				k = arr[ j ];
//				arr[ j ] = arr[ j + 1 ];
//				arr[ j + 1 ] = k;
// 						}
//			
//		}
//	}
//	
//	printf( "\nsorted array: \n" );
//	for ( i = 0; i < n; i++ ) {
// printf( "% d", arr[ i ] );
//
//	}
//
//	return 0;
//
//}