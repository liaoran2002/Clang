/*
链表
链表是一种线性表数据结构，其中的元素不仅仅是数据，还包含一个指向下一个元素的指针。链表的优点是可以灵活地插入和删除元素，缺点是访问元素效率低。

链表的结构：
```c
struct stu {
    int sno;
    double score;
    struct stu *next;
};
```

其中，`sno`是学生编号，`score`是学生的成绩，`next`是指向下一个节点的指针。

链表的操作：
- 创建链表：`create()`

- 插入节点：`insert()`
- 删除节点：`delete()`

下面是实现的代码：
- 创建链表：`create()`
```c
struct stu *create() // 创建链表
{
    struct stu *head, *p1, *p2;                         // 定义头指针和二个普通指针
    n = 0;                                              // 计数器，记录当前链表个数
    p1 = p2 = (struct stu *)malloc(sizeof(struct stu)); // 申请节点
    scanf("%d,%lf", &p1->sno, &p1->score);              // 输入值
    head = NULL;                                        // 初始化head节点
    while (p1->sno != 0) {
        n = n + 1;
        if (n == 1)
            head = p1; // 若刚好n=1说明没有链表，那么p1申请的空间为头指针指向
        else
            p2->next = p1; // 若n!=1，那就说明有头指针，则将p2的下个节点指向第一次p1申请的节点
        p2 = p1;           // 然后p2指向p1
        p1 = (struct stu *)malloc(sizeof(struct stu));
        scanf("%d,%lf", &p1->sno, &p1->score);
    }
    p2->next = NULL; // 尾节点
    return head;     // 返回头节点
}
```
- 打印链表：`print()`
```c
void print(struct stu *head) {
    struct stu *p;
    p = head;
    if (head == NULL)
        printf(" link is null ");
    else {
        do {
            printf("sno=%d,score=%lf\n", p->sno, p->score);
            p = p->next;
        } while (p != NULL); // 如果p不是尾节点，则依次往下循环直至尾节点为止
    }
}
```
- 插入节点：`insert()`
```c
struct stu *insert(struct stu *head, struct stu *stud) { // 插入一个节点
    struct stu *p, *p1, *p2;
    p = stud;
    p1 = head;
    if (head == NULL) { // 插入结点为第一个结点
        head = p;
        p->next = NULL; // 没有链表，所以传入的值的地址为第一个结点也为尾节点
    } else {
        while (p->sno > p1->sno && p1->next != NULL) { // 让p1指向sno大于p的结点，p2始终指向p1的前一个结点
            p2 = p1;
            p1 = p1->next;
        } // 直至找到p所指向的sno小于p1所指向的sno
        if (p->sno <= p1->sno) { // 若找到p所指向的sno小于p1所指向的sno
            if (head == p1)      // 如果第一个数的sno就大于p所指的sno,则插入到第一
                head = p;
            else // 如果不是，则插入到p2和p1之间
                p2->next = p;
            p->next = p1;
        } else { // 若到最后都没有找打p1所指的sno大于p所指的sno则插入到最后
            p1->next = p;
            p->next = NULL;
        }
    }
    n = n + 1;
    return head;
}
```
- 删除节点：`delete()`
```c
struct stu *delete(struct stu *head, int sno) {
    struct stu *p1, *p2;
    if (head == 0) {
        printf("link is null!");
    } else {
        p1 = head;
        while (sno != p1->sno && p1->next != NULL) { // 让p1指向sno相等的结点，p2始终指向p1的前一个结点
            p2 = p1;
            p1 = p1->next;
        }
        if (sno == p1->sno) { // 如果找到了此sno
            if (p1 == head)   // 删除第一个结点
                head = p1->next;
            else // 删除其他位置
                p2->next = p1->next;
            printf("delete sno is:%d\n", sno);
            n = n - 1;
        } else
            printf("not fount this sno:%d\n", sno);
    }
    return head;
}
```
- main函数：
```c
void main() {
    struct stu *h, stu;
    int sno;
    h = create(); // 创建节点
    print(h);     // 输出节点
    printf("input the insert sno,score:");
    scanf("%d,%lf", &stu.sno, &stu.score);
    h = insert(h, &stu);
    print(h);
    printf("input the delete sno:");
    scanf("%d", &sno);
    h = delete (h, sno);
    print(h);
}
```

测试：

```c
1,80
2,90
3,70
4,60
5,85
0,0
input the insert sno,score:
3,80
sno=1,score=80.000000
sno=2,score=90.000000
sno=3,score=80.000000
sno=4,score=60.000000
sno=5,score=85.000000
input the delete sno:
3
delete sno is:3
sno=1,score=80.000000
sno=2,score=90.000000
sno=4,score=60.000000
sno=5,score=85.000000
```
*/
#include <stdio.h>
#include <stdlib.h>
struct stu {
    int sno;
    double score;
    struct stu *next;
};
int n;
struct stu *create() // 创建链表
{
    struct stu *head, *p1, *p2;                         // 定义头指针和二个普通指针
    n = 0;                                              // 计数器，记录当前链表个数
    p1 = p2 = (struct stu *)malloc(sizeof(struct stu)); // 申请节点
    scanf("%d,%lf", &p1->sno, &p1->score);              // 输入值
    head = NULL;                                        // 初始化head节点
    while (p1->sno != 0) {
        n = n + 1;
        if (n == 1)
            head = p1; // 若刚好n=1说明没有链表，那么p1申请的空间为头指针指向
        else
            p2->next = p1; // 若n!=1，那就说明有头指针，则将p2的下个节点指向第一次p1申请的节点
        p2 = p1;           // 然后p2指向p1
        p1 = (struct stu *)malloc(sizeof(struct stu));
        scanf("%d,%lf", &p1->sno, &p1->score);
    }
    p2->next = NULL; // 尾节点
    return head;     // 返回头节点
}
void print(struct stu *head) {
    struct stu *p;
    p = head;
    if (head == NULL)
        printf(" link is null ");
    else {
        do {
            printf("sno=%d,score=%lf\n", p->sno, p->score);
            p = p->next;
        } while (p != NULL); // 如果p不是尾节点，则依次往下循环直至尾节点为止
    }
}
struct stu *insert(struct stu *head, struct stu *stud) { // 插入一个节点
    struct stu *p, *p1, *p2;
    p = stud;
    p1 = head;
    if (head == NULL) { // 插入结点为第一个结点
        head = p;
        p->next = NULL; // 没有链表，所以传入的值的地址为第一个结点也为尾节点
    } else {
        while (p->sno > p1->sno && p1->next != NULL) { // 让p1指向sno大于p的结点，p2始终指向p1的前一个结点
            p2 = p1;
            p1 = p1->next;
        } // 直至找到p所指向的sno小于p1所指向的sno
        if (p->sno <= p1->sno) { // 若找到p所指向的sno小于p1所指向的sno
            if (head == p1)      // 如果第一个数的sno就大于p所指的sno,则插入到第一
                head = p;
            else // 如果不是，则插入到p2和p1之间
                p2->next = p;
            p->next = p1;
        } else { // 若到最后都没有找打p1所指的sno大于p所指的sno则插入到最后
            p1->next = p;
            p->next = NULL;
        }
    }
    n = n + 1;
    return head;
}
struct stu *delete(struct stu *head, int sno) {
    struct stu *p1, *p2;
    if (head == 0) {
        printf("link is null!");
    } else {
        p1 = head;
        while (sno != p1->sno && p1->next != NULL) { // 让p1指向sno相等的结点，p2始终指向p1的前一个结点
            p2 = p1;
            p1 = p1->next;
        }
        if (sno == p1->sno) { // 如果找到了此sno
            if (p1 == head)   // 删除第一个结点
                head = p1->next;
            else // 删除其他位置
                p2->next = p1->next;
            printf("delete sno is:%d\n", sno);
            n = n - 1;
        } else
            printf("not fount this sno:%d\n", sno);
    }
    return head;
}

void main() {
    struct stu *h, stu;
    int sno;
    h = create(); // 创建节点
    print(h);     // 输出节点
    printf("input the insert sno,score:");
    scanf("%d,%lf", &stu.sno, &stu.score);
    h = insert(h, &stu);
    print(h);
    printf("input the delete sno:");
    scanf("%d", &sno);
    h = delete (h, sno);
    print(h);
}
