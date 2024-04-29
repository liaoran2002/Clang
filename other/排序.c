#include <stdio.h>

// 交换
void swap(int a[], int i, int j) {
    int temp = a[i]; // i=minindex j=i
    a[i] = a[j];
    a[j] = temp;
}

// 冒泡排序
/*
基本思想
比较相邻的元素，如果第一个比第二个大，就交换他们两个；
对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的；
重复这个过程，直到排序完成。

操作步骤
1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。
3. 重复步骤1~2，直到排序完成。

时间复杂度：O(n^2)
空间复杂度：O(1)
*/
void BubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j + 1] > a[j])
                swap(a, j + 1, j);
        }
}

// 选择排序
/*
基本思想
每次从待排序的数据元素中选出最小（或最大）的一个元素，
放在序列的起始位置，然后再从剩余未排序元素中继续寻找最小（大）元素，
然后放到已排序序列的末尾。以此类推，直到全部待排序的数据元素排完。

操作步骤
1. 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置。
2. 再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
3. 重复第二步，直到所有元素均排序完毕。

时间复杂度：O(n^2)
空间复杂度：O(1)
*/
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
/*
基本思想
将一个无序数列看成两个子序列，第一个子序列是排好序的，第二个子序列是待排序的。
从第二个子序列中取出第一个元素，插入到第一个子序列的适当位置，使得第一个子序列仍然是排好序的。
重复第二步，直到第二个子序列为空，第一个子序列即为整个序列的排序结果。

操作步骤
1. 从第一个元素开始，该元素可以认为已经被排序。
2. 取出下一个元素，在已经排序的元素序列中找到该元素的插入位置。
3. 将该元素插入到该位置后，使得元素序列仍然有序。
4. 重复步骤2~3，直到排序完成。

时间复杂度：O(n^2)
空间复杂度：O(1)
*/
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
/*
基本思想
选择一个基准元素，将数组分成两个子序列，左边的子序列都比基准元素小，右边的子序列都比基准元素大。
对左右子序列重复第一步，直到子序列的长度为1，即为基准元素。

操作步骤
1. 选择一个基准元素，通常选择第一个元素或者最后一个元素。
2. 从数组的第二个元素开始，将比基准元素小的元素放到左边，大的元素放到右边。
3. 重复步骤2，直到数组的末尾。
4. 基准元素归位，左边的子序列都比基准元素小，右边的子序列都比基准元素大。
5. 重复步骤1~4，直到整个数组排序完成。


时间复杂度：O(nlogn)
空间复杂度：O(logn)
*/
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
/*
基本思想
堆是一个近似完全二叉树的结构，具有以下性质：
1. 堆中每个节点的值都大于或等于其子节点的值。
2. 堆总是一棵完全二叉树。

堆排序的基本思想是：
1. 将待排序的序列构造成一个堆。
2. 取出堆顶元素，将它与序列的最后一个元素交换，然后将剩余的元素重新构造成一个堆。
3. 重复步骤2，直到堆的大小为1，此时整个序列就有序了。

操作步骤
1. 构造一个堆。
2. 取出堆顶元素，将它与序列的最后一个元素交换，然后将剩余的元素重新构造成一个堆。
3. 重复步骤2，直到堆的大小为1。

时间复杂度：O(nlogn)
空间复杂度：O(1)
*/
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
/*
基本思想
先将整个待排序的序列分割成为若干子序列，
分别对子序列进行插入排序，
待整个序列中的元素基本有序时，
再对全体元素进行依次直接插入排序。

操作步骤
1. 选择一个增量序列t1，t2，……，tk，其中ti>tj，tk=1；
2. 按增量序列个数k，对序列进行k趟排序；
3. 第i趟排序，对序列进行一次直接插入排序，具体算法为：
    a. 选取一个元素，将其与序列中的元素进行比较，将其插入到合适的位置；
    b. 重复步骤a，直到排序完成。


时间复杂度：O(n^2)
空间复杂度：O(1)
*/
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
