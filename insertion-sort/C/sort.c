#include <stdio.h>
#include <string.h>
void ins_sort(int arr [], int len) {
    // init a temp
    int tmp;
    // Iterate over the length of the array
    for (int i = 0; i < len; i++) {
      // We create an index which starts as the second element
      // This is the index of the proceeding element
      int j = i + 1;
      // As long as j index is not negative AND
      // the previous element is greater than the current,
      // this keeps iterating over the array while it's not sorted
      // that is if the previous element is larger than the next
      while (j > 0 && arr[j-1] > arr[j]) {
        printf("=========================================\n");
        printf("THE ELEMENTS TO KNOW ABOUT: \n");
        printf("tmp: %d \n", tmp);
        printf("arr j: %d \n", arr[j]);
        printf("arr j-1 : %d \n", arr[j-1]);
        printf("j index: %d \n", j);
        printf("=========================================\n");
        // Set the temp to the current element
        //1st it: tmp = 1
        tmp = arr[j];
        // Set the current to the previous
        //1st it: arr[j] = 5
        arr[j] = arr[j-1];

        // Set the previous to the current
        //1st it: arr[j-1] = 1
        arr[j-1] = tmp;
        // decrement j
        j--;
      }
    }
}

int main() {
  int a[6] = {5, 1, 6, 2, 4, 3};
  ins_sort(a, 6);

  for (int i = 0; i < 6; i++) {
    printf("%d \n", a[i]);
  }
  return 0;
}
