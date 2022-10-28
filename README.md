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


# week08程式1（印出質數）
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int  bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數",n);
    else printf("%d 不好,不是質數",n);
}
```

# week08程式2(程式1的程式碼的核心, 來判斷 n 是不是質數。)
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2;n<=a;n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ",n);

	}
}
```

# week08程式3（輸入5個數字, 把它們加起來。）
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入5個人數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &n);
        sum+=n;
    }
    printf("總合是:%d",sum);
}
```

# week08程式4（印出直角三角形）
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++) printf(" ");
        for(int k=1;k<=i;k++)   printf("*");
        printf("\n");
    }
}
```

# week08程式5（用2個for印出直角三角形形）
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k<=n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```

# week08程式6（用while印出直角三角形）
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n)
        {
            if(k<=n-i)
                printf(" ");
            else
                printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
