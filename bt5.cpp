#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE], size, temp;

    printf("Nh?p kích thý?c m?ng: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Giá tr? ph?n t? %d: ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
    printf("Mang sau khi sap xepp: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    int target;
    printf("Nhap so can tim: ");
    scanf("%d", &target);

    int left = 0, right = size - 1, pos = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) { pos = mid; break; }
        if (array[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    if (pos != -1) printf("Vi tri cua %d: %d\n", target, pos);
    else printf("Khong tim thay %d.\n", target);
    return 0;
}
