#include <stdio.h>

// 交换
void swap(int a[], int i, int j) {
    int temp = a[i]; // i=minindex j=i
    a[i] = a[j];
    a[j] = temp;
}

// 冒泡排序
void BubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j + 1] > a[j])
                swap(a, j + 1, j);
        }
}

// 选择排序
void SelectSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int minIndex = i;
        for (j = i; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        swap(a, minIndex, i);
    }
}

// 插入排序
void InsertSort(int a[], int n) {
    int current, i;
    for (i = 0; i < n - 1; i++) {
        current = a[i + 1];
        int pre = i;
        while (pre >= 0 && current < a[pre]) {
            a[pre + 1] = a[pre];
            pre--;
        }
        a[pre + 1] = current;
    }
}

// 快速排序，冒泡的升级版
void QuickSort(int a[], int left, int right) {
    if (left < right) {
        int i = left, j = right;
        int base = a[left]; // 基准
        while (i < j) {
            while (i < j && a[j] >= base) // 从右往左找小于base的元素
                j--;
            if (i < j)
                a[i++] = a[j];
            while (i < j && a[i] < base) // 从左往右找大于base的值
                i++;
            if (i < j)
                a[j--] = a[i];
        }
        a[i] = base;               // 将基准base填入最后的坑中
        QuickSort(a, left, i - 1); // 递归调用，分治
        QuickSort(a, i + 1, right);
    }
}

// 堆排序，选择的升级版
// 构造大顶堆
void heap_down(int *arr, int i, int N) {
    int child;
    int temp;
    for (temp = arr[i]; 2 * i + 1 < N; i = child) {          // temp是当前结点的值
        child = 2 * i + 1;                                   // 当前结点i的左孩子的位置（在数组中的下标）
        if (child != N - 1 && arr[child + 1] > arr[child]) { // child+1是当前结点的右孩子的位置，判断右孩子是否大于左孩子
            child++;
        }
        if (temp < arr[child]) { // 判断根结点是否小于它的左右两个跟结点，如果小于，则交换大的为根结点
            arr[i] = arr[child];
            arr[child] = temp;
        } else {
            break;
        }
    }
}

// 堆排序
void heap_Sort(int *arr, int length) {
    int i;
    // 从length/2到0依次遍历，最终得到的数组是一个大顶堆
    // 最后叶子结点2×i+2=length,i=length/2-1是最后一个父节点
    for (i = length / 2; i >= 0; i--) {
        heap_down(arr, i, length);
    }
    for (i = length - 1; i > 0; i--) {
        swap(arr, 0, i);      // 交换最大值a[0]到队列末尾
        heap_down(arr, 0, i); // 执行去掉最大值的[0~n-1]个元素的大顶堆，
    }
}

// 希尔排序，插入的升级版
void shellSort1(int a[], int n) {
    int i, j, gap, temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i += gap) {
            temp = a[i];
            for (j = i - gap; j >= 0 && a[j] > temp; j -= gap) {
                a[j + gap] = a[j];
            }
            a[j + gap] = temp;
        }
    }
}

void main() {
    int i;
    int a[10] = {1, 4, 3, 7, 9, 6, 5, 8, 2, 10};
    printf("排序前：");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n排序后：");
    BubbleSort(a, 10); // QuickSort(a,0,9);
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}
