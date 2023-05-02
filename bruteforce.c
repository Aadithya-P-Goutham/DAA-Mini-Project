#include <stdio.h>

int findNum (int num, int arr[], int n) {
  
  int min1, min2;
  
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      min1 = i;
      break;
      }
    }
  
  for (int i = min1; i < n; i++) {
    if (arr[i] == num) {
      min2 = i;
    }
  }

  printf("%d is the first occurrence \n", min1);
  printf("%d is the second occurrence \n", min2);
}

int main() {

  int num = 5;
  int arr[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
  int n = 10;

  findNum(num, arr, n);
  return 0;
}
