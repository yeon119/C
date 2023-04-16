#include <stdio.h>
int main(void) {
  int x = 10, y = 10;

  printf("x=%d\n", x);
  printf("++x의 값 =%d\n", ++x);
  printf("x=%d\n\n", x);

  printf("y=%d\n", y);
  printf("y++의 값=%d\n", y++);
  printf("y=%d\n", y);
  return 0;
}

#include <stdio.h>

int main(void) {
  int number;

  printf("정수를 입력 하시오");
  scanf("%d", &number);

  if(number>0)
  {
    printf("양수입니다\n");
  }
  printf("입력된 값은 %d 입니다", number);
  return 0;
}



#include <stdio.h>

int main(void) {
  char ch;
  printf("문자를 입력 하시오: ");

  ch = getchar();
  if(ch >=65 && ch <= 90)
    printf("%c 는 대문자 입니다. \n",ch);
  else if(ch >= 'a'&& ch <= 'z')
    printf("%c 는 소문자 입니다. \n",ch);
  else if(ch >= '0'&& ch <= '9')
    printf("%c 는 숫자 입니다. \n",ch);

  else
    printf("%c 는 기타 문자 입니다 \n", ch);
  
 
  return 0;
}

#include <stdio.h>

int main(void) {
  int A, B;
  printf("두 정수를 입력해 주세요:");
  scanf("%d, %d", &A, &B);

  if(A>B)
  {
    printf(">");
  }
  else if(A<B)
  {
    printf("<");
  }

  else if(A == B)
  {
    printf("==");
  }

  else 
    printf(" 숫자를 잘못 입력 하였습니다.");
  return 0;
}

계산기4/6

#include <stdio.h>

int main(void) {
  char op;
  int x, y, result;
  printf("수식을 입력하시오(예 2+5)>>");
  scanf("%d %c %d", &x, &op, &y);
  if (op == '+') {
    result = x + y;
  }

  else if (op == '-') {
    result = x - y;
  } else if (op == '*') {
    result = x * y;
  } else if (op == '/') {
    result = x / y;
  } else if (op == '%') {
    result = x % y;
  } else {
    printf("지원하지 않는 연산자입니다");
  }

  printf("%d %c %d = %d\n", x, op, y, result);
  return 0;
}

#include <stdio.h>

int main(void) {
  int n, sum=0, i=1;
  
  printf("정수를 입력하십시오:\n");
  scanf("%d", &n);

  while (i <=n) {
    sum+=i;
    i++;
  }
printf("1부터 %d 까지의 합은 %d 입니다",n,sum);
  return 0;
}

#include <stdio.h>

int main(void) {
  int n, sum=0, i=1;
  
  printf("정수를 입력하십시오:\n");
  scanf("%d", &n);

  while (i <=n) {
    if(i%2==0)
    {
    
    sum+=i;}
    i++;
  }
printf("1부터 %d 까지의 짝수의 합은 %d 입니다",n,sum);
  return 0;
}

#include <stdio.h>

int main(void) {
  int n,i=0,sum=0;
  while(i<5)
    {
    printf("값을 입력하시오:");
    scanf("%d" ,&n);
      sum += n;
      i ++;
      
    }
  printf("합계는 %d입니다",sum);
  return 0;
}

#include <stdio.h>

int main(void) {
  int i = 1, x, y, n;
  scanf("%d", &n);
  while (i <= n) {

    scanf("%d %d", &x, &y);

    printf(" %d \n", x + y);
    i++;
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int i = 0;
  do 
    {
        printf("1---새로 파일만들기\n");
        printf("2---새로 파일 열기\n");
        printf("3---파일 닫기\n");
        printf("하나를 선택하시오\n");
      scanf("%d", &i);
      
      
  } while(i<1||i>3 );

  printf("선택된 메뉴 = %d\n",i);
  return 0;
}


#include <stdio.h>

int main(void) {
  int n,i;
  printf("원하는 단을 입력해 주세요:");
  scanf("%d", &n);
  for(i=1; i<10; i++)
    printf("%d x %d= %d\n",n,i, n*i);
  
  
  return 0;
}
