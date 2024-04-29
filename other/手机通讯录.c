/*
手机通讯录包括“姓名”、“移动电话”、“固定电话”、“e-mail”等信息。请定义一个存储手机通讯录的结构体类
并编写函数void binSearch(struct addressNode a[],int n, char name[])，
在具有n个通讯录的结构体数组a中(已按姓名字段升序排序)采用二分查找法查找姓名为name的通信录信息，
查找成功返回其在数组中的位置，查找失败返回-1。
*/
#include <stdio.h>
#include <string.h>

struct addressNode {
    char name[20];
    char mobile[20];
    char fixphone[20];
    char email[50];
};
int binSearch(struct addressNode a[], int n, char name[]) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (strcmp(a[mid].name, name) > 0)
            high = mid - 1;
        else if (strcmp(a[mid].name, name) < 0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    struct addressNode a[] = {{
                                  "Alice",
                                  "13912345678",
                                  "010-12345678",
                                  "alice@qq.com",
                              },
                              {
                                  "Bob",
                                  "13923456789",
                                  "010-23456789",
                                  "bob@163.com",
                              },
                              {
                                  "Charlie",
                                  "13934567890",
                                  "010-34567890",
                                  "charlie@gmail.com",
                              },
                              {
                                  "David",
                                  "13945678901",
                                  "010-45678901",
                                  "david@126.com",
                              },
                              {
                                  "Eve",
                                  "13956789012",
                                  "010-56789012",
                                  "eve@sohu.com",
                              },
                              {
                                  "Frank",
                                  "13967890123",
                                  "010-67890123",
                                  "frank@139.com",
                              },
                              {
                                  "Grace",
                                  "13978901234",
                                  "010-78901234",
                                  "grace@189.com",
                              },
                              {
                                  "Henry",
                                  "13989012345",
                                  "010-89012345",
                                  "henry@139.com",
                              },
                              {
                                  "Isabella",
                                  "13990123456",
                                  "010-90123456",
                                  "isabella@139.com",
                              },
                              {
                                  "Jack",
                                  "13901234567",
                                  "010-01234567",
                                  "jack@139.com",
                              },
                              {
                                  "Kate",
                                  "13912345678",
                                  "010-12345678",
                                  "kate@139.com",
                              },
                              {
                                  "Lucy",
                                  "13923456789",
                                  "010-23456789",
                                  "lucy@139.com",
                              },
                              {
                                  "Mia",
                                  "13934567890",
                                  "010-34567890",
                                  "mia@139.com",
                              },
                              {
                                  "Nancy",
                                  "13945678901",
                                  "010-45678901",
                                  "nancy@139.com",
                              },
                              {
                                  "Olivia",
                                  "13956789012",
                                  "010-56789012",
                                  "olivia@139.com",
                              },
                              {
                                  "Peter",
                                  "13967890123",
                                  "010-67890123",
                                  "peter@139.com",
                              },
                              {
                                  "Quincy",
                                  "13978901234",
                                  "010-78901234",
                                  "quincy@139.com",
                              },
                              {
                                  "Rachel",
                                  "13989012345",
                                  "010-89012345",
                                  "rachel@139.com",
                              },
                              {
                                  "Steve",
                                  "13990123456",
                                  "010-90123456",
                                  "steve@139.com",
                              },
                              {
                                  "Tom",
                                  "13901234567",
                                  "010-01234567",
                                  "tom@139.com",
                              },
                              {
                                  "Ursula",
                                  "13912345678",
                                  "010-12345678",
                                  "ursula@139.com",
                              },
                              {
                                  "Victor",
                                  "13923456789",
                                  "010-23456789",
                                  "victor@139.com",
                              },
                              {
                                  "Wendy",
                                  "13934567890",
                                  "010-34567890",
                                  "wendy@139.com",
                              },
                              {
                                  "Xavier",
                                  "13945678901",
                                  "010-45678901",
                                  "xavier@139.com",
                              },
                              {
                                  "Yvonne",
                                  "13956789012",
                                  "010-56789012",
                                  "yvonne@139.com",
                              },
                              {
                                  "Zachary",
                                  "13967890123",
                                  "010-67890123",
                                  "zachary@139.com",
                              }};
    int n = 26, i;
    i = binSearch(a, n, "Lucy");
    if (i != -1) {
        printf("Name: %s\nMobile: %s\nFixphone: %s\nEmail: %s\n", a[i].name, a[i].mobile, a[i].fixphone, a[i].email);
    } else {
        printf("Name not found.\n");
    }
    printf("i = %d\n", i);
    return 0;
}