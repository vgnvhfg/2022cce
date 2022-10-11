# 2022cce
# 第一個程式碼為畫星星把i倒過來印出來
```cpp
#include <stdio.h>
int main()
{
        for(int i=5;i>0;i--){
            for(int j=0;j<i;j++){
            printf("*");
        }
        printf("i:%d¬P¬P\n",i);
    }
}

```
# 第二個程式為畫星星改用 for(int k=0; k<space; k++) 的迴圈, 來畫出空格, 利用 for(int k=0; k<star; k++) 的迴圈
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i,star=2*i-1;
        for(int k=0; k<space;k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");

    }
}

```
# 第三個程式碼用暴力解法去找出最大公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數，要約分: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans;
    for(int i=1; i<=a; i++)
    {
        if( a%i==0 && b%i==0)
        {
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}

```
# 第四個程式碼為「輾轉相除法」可以找最大公因數
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d",b);
}

```
