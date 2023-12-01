#include <stdio.h>

void merge(int a[], int l, int m, int h) {
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = h - m;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++) L[i] = a[l + i];
  for (j = 0; j < n2; j++) R[j] = a[m + 1 + j];

  i = 0;
  j = 0;
  k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    a[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    a[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int a[], int l, int h) {
  if (l < h) {
    int m = l + (h - l) / 2;

    merge_sort(a, l, m);
    merge_sort(a, m + 1, h);

    merge(a, l, m, h);
  }
}

int main() {
  int a[] = {5,90,82,12,45,36,77};
  int n = sizeof(a) / sizeof(a[0]);

  printf("Before sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  merge_sort(a, 0, n - 1);

  printf("\nAfter sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}

