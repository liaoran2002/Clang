# Clang
### 湖北专升本C语言学习心得

## 1. 基础语法

### 1.1 变量类型

C语言中变量类型分为以下几种：

- 整型：char、short、int、long
- 浮点型：float、double
- 字符型：char


### 1.2 常量

常量是固定值，在程序运行过程中不能被修改的变量。常量可以是整型、浮点型、字符型、字符串型。

常量的定义格式：

```c
#define 常量名 值
```

例如：

```c
#define PI 3.1415926
```


### 1.3 运算符

C语言中有以下几种运算符：

- 算术运算符：+、-、*、/、%、++、--
- 关系运算符：==、!=、>、<、>=、<=
- 逻辑运算符：&&、||、!
- 赋值运算符：=、+=、-=、*=、/=、%=
- 位运算符：&、|、^、~、<<、>>
- 条件运算符：?:
- 其他运算符：sizeof、.、->、,、( )、[ ]、{ }、;、#、##、? :

运算符的优先级：

- 1. 后缀运算符：++、--、( )、[ ]、.、->
- 2. 一元运算符：+、-、!、~、sizeof、&、*、++、--
- 3. 乘除运算符：*、/、%
- 4. 加减运算符：+、-
- 5. 移位运算符：<<、>>
- 6. 关系运算符：==、!=、>、<、>=、<=
- 7. 相等运算符：==、!=
- 8. 位运算符：&、|、^
- 9. 逻辑运算符：&&、||
- 10. 条件运算符：? :
- 11. 赋值运算符：=、+=、-=、*=、/=、%=、<<=、>>=、&=、|=、^=
- 12. 逗号运算符：,

运算符的注意事项：

- 运算符的优先级和结合性决定了表达式的运算顺序。
- 运算符的优先级和结合性可以由程序员自行决定。
- 运算符的优先级和结合性可以由编译器决定。
- 运算符的优先级和结合性可以由操作系统决定。
- 运算符的优先级和结合性可以由硬件决定。

### 1.4 控制语句

C语言中有以下几种控制语句：

- if-else语句
- switch-case语句
- while语句
- do-while语句
- for语句
- goto语句
- break语句
- continue语句
- return语句

if-else语句的定义格式：

```c
if (条件表达式) {
    语句;
} else {
    语句;
}
```

switch-case语句的定义格式：

```c
switch (表达式) {
    case 常量1:
        语句;
        break;
    case 常量2:
        语句;
        break;
    ...
    default:
        语句;
}
```

例如：

```c
switch (color) {
    case RED:
        printf("红色\n");
        break;
    case GREEN:
        printf("绿色\n");
        break;
    case BLUE:
        printf("蓝色\n");
        break;
    default:
        printf("未知颜色\n");
}
```

while语句的定义格式：

```c
while (条件表达式) {
    语句;
}
```

例如：

```c
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

do-while语句的定义格式：

```c
do {
    语句;
} while (条件表达式);
```

例如：

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
```

for语句的定义格式：

```c
for (初始化表达式; 条件表达式; 迭代表达式) {
    语句;
}
```

例如：

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

goto语句的定义格式：

```c
goto 标签名;
```

例如：

```c
int i = 0;
while (i < 10) {
    if (i == 5) {
        goto end;
    }
    printf("%d\n", i);
    i++;
}
end:
    printf("结束\n");
```


break语句的定义格式：

```c
break;
```

continue语句的定义格式：

```c
continue;
```

return语句的定义格式：

```c
return 表达式;
```

例如：

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);
    return 0;
}
```

控制语句的注意事项：

- 控制语句必须配合括号使用。
- 控制语句的执行顺序是从上到下，从左到右。
- 控制语句的嵌套可以实现复杂的逻辑。
- 控制语句的条件可以是表达式、变量、常量、函数的返回值。
- 控制语句的条件可以是关系运算符、逻辑运算符、位运算符、赋值运算符。
- 控制语句的条件可以是单个变量、数组、指针、结构体、联合体。
- 控制语句的条件可以是单个条件、多个条件的组合。
- 控制语句的条件可以是if-else语句、switch-case语句。
- 控制语句的循环可以是while语句、do-while语句、for语句。
- 控制语句的循环可以是无限循环、有限循环。
- 控制语句的循环可以是嵌套循环。
- 控制语句的循环可以是break语句、continue语句、return语句。

### 1.5 函数

函数是用来实现特定功能的代码块，它可以重复使用，提高代码的可读性和可维护性。

函数的定义格式：

```c
返回值类型 函数名(参数类型 参数名, ...) {
    函数体;
}
```

例如：

```c
int add(int a, int b) {
    return a + b;
}
```

函数的调用格式：

```c
函数名(参数值, 参数值, ...);
```

例如：

```c
int result = add(10, 20);
```


## 2. 指针

指针是一种特殊的变量，它可以指向另一块内存空间，可以读写这块内存空间中的数据。

指针的定义格式：

```c
数据类型 * 指针变量名;
```

例如：

```c
int *p;
```

指针的赋值格式：

```c
指针变量名 = &变量名;
```

例如：

```c
int a = 10;
int *p = &a;
```

指针的运算符：

- * ：取指针指向的内存空间的值
- & ：取指针变量的地址
- [] ：通过指针访问数组元素
- -> ：通过指针访问结构体成员

指针的注意事项：

- 指针必须初始化，否则会出现未定义行为。
- 指针的赋值必须是对指针变量的地址进行赋值，不能是对指针指向的内存空间进行赋值。
- 指针的运算必须遵循指针的定义和赋值。
- 指针的类型必须与指针指向的类型一致。


## 3. 数组

数组是一系列相同类型的数据的集合，它可以存储多个数据项。

数组的定义格式：

```c
数据类型 数组名[数组长度];
```

例如：

```c
int arr[5];
```

数组的初始化格式：

```c
数据类型 数组名[数组长度] = {元素1, 元素2, ..., 元素n};
```

例如：

```c
int arr[5] = {1, 2, 3, 4, 5};
```

数组的访问格式：

```c
数组名[下标]
```

例如：

```c
arr[0] = 10;
```

数组的注意事项：

- 数组的下标从0开始，最大值为数组长度-1。
- 数组的长度必须是常量，不能是变量。
- 数组的元素可以是不同的数据类型。
- 数组的初始化可以省略数组长度，系统会根据初始化的元素个数自动计算数组长度。
- 数组的元素可以是常量、变量、表达式。
- 数组的元素可以是结构体、联合体。
- 数组的元素可以是函数的返回值。


## 4. 字符串

字符串是以空字符'\0'结尾的一系列字符。

字符串的定义格式：

```c
char 字符串名[] = "字符串内容";
```

例如：

```c
char str[] = "Hello, world!";
```

字符串的访问格式：

```c
字符串名[下标]
```

例如：

```c
char str[] = "Hello, world!";
str[0] = 'H';
```

字符串的注意事项：

- 字符串的长度是以'\0'结尾的字符个数。
- 字符串的元素可以是常量、变量、表达式。
- 字符串的元素可以是结构体、联合体。
- 字符串的元素可以是函数的返回值。


## 5. 结构体

结构体是由多个数据项组成的数据类型，它可以包含不同的数据类型。

结构体的定义格式：

```c
struct 结构体名 {
    数据类型 成员名;
    数据类型 成员名;
    ...
};
```

例如：

```c
struct Person {
    char name[20];
    int age;
    char gender;
};
```

结构体的初始化格式：

```c
结构体名 变量名 = {成员1值, 成员2值, ..., 成员n值};
```

例如：

```c
struct Person p1 = {"Tom", 20, 'M'};
```

结构体的访问格式：

```c
变量名.成员名
```

例如：

```c
p1.name = "Jerry";
```

结构体的注意事项：

- 结构体的成员可以是不同的数据类型。
- 结构体的成员可以是常量、变量、表达式。
- 结构体的成员可以是结构体、联合体。
- 结构体的成员可以是函数的返回值。
### 5.1 结构体指针

结构体指针是一种特殊的指针，它可以指向结构体变量。

结构体指针的定义格式：

```c
struct 结构体名 * 指针变量名;
```
结构体指针取值：

```c
结构体指针变量名->成员名
```

## 6. 联合体

联合体是由不同的数据类型组成的数据类型，它可以包含不同的数据类型。

联合体的定义格式：

```c
union 联合体名 {
    数据类型 成员名;
    数据类型 成员名;
    ...
};
```


## 7. 枚举

枚举是一组整型常量的集合，它可以使代码更易读、更易理解。

枚举的定义格式：

```c
enum 枚举名 {
    常量名 = 值,
    常量名 = 值,
    ...
};
```

例如：

```c
enum Color {
    RED,
    GREEN,
    BLUE
};
```

枚举的访问格式：

```c
枚举名 变量名 = 常量名;
```

例如：

```c
enum Color color = RED;
```

枚举的注意事项：

- 枚举的常量可以是整型、浮点型、字符型。
- 枚举的常量可以是常量、变量、表达式。
- 枚举的常量可以是结构体、联合体。
- 枚举的常量可以是函数的返回值。

## 8. 预处理器

预处理器是一种在编译前进行文本处理的技术，它可以完成诸如头文件包含、条件编译等功能。

预处理器的指令格式：

```c
#指令 指令参数
```

例如：

```c
#include <stdio.h>
```

预处理器的指令：

- #include ：包含头文件。
- #define ：定义宏。
- #undef ：取消宏定义。
- #if ：条件编译。
- #ifdef ：条件编译，如果宏已定义。
- #ifndef ：条件编译，如果宏未定义。
- #else ：条件编译，当条件不满足时。
- #elif ：条件编译，当其他条件不满足时。
- #endif ：条件编译结束。
- #error ：输出错误信息。
- #pragma ：编译器指令。

预处理器的注意事项：

- 预处理器指令必须在程序的开始部分，不能在函数体中定义。
- 预处理器指令的执行顺序是从上到下，从左到右。

## 9. 递归函数

递归函数是一种函数，它可以调用自身。

递归函数的定义格式：

```c
返回值类型 函数名(参数类型 参数名, ...) {
    if (递归终止条件) {
        return 终止值;
    }
    函数体;
    return 函数名(参数值, 参数值, ...);
}
```
递归函数的注意事项：

- 递归函数必须有明确的递归终止条件。
- 递归函数必须有明确的终止值。

## 10. 动态内存分配

动态内存分配是一种程序运行过程中内存的分配和释放技术，它可以动态地分配和释放内存。

动态内存分配的调用格式：

```c
void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);
```
动态内存分配的注意事项：

- malloc函数：分配指定大小的内存块，返回指向该内存块的指针。
- calloc函数：分配指定大小的内存块，并初始化为0。
- realloc函数：重新分配指定大小的内存块，返回指向该内存块的指针。
- free函数：释放内存块。
- 内存分配和释放的大小必须是以字节为单位。
- 内存分配和释放的指针必须是有效的。

## 11.练习题

[C语言编程练习题.md](program\C语言编程练习题.md) 