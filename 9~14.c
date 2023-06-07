#include <stdio.h>

int main(void) {
float radius;
float area;

printf("반지름을 입력하시요:");
scanf("%d", &radius);

  area = 3.14*radius*radius;

  printf("원의 면적 : %d", area);

  
  return 0;
}

#include <stdio.h>

int main(void) {

  double rate, usd;
  int krw;

  printf("환율을 입력하십시오:");
  scanf("%lf" ,&rate );
  printf("원화 금액을 입력 하십시오");
  scanf("%d", &krw);

  usd = krw / rate;
  printf("원화 %d원은 %lf달러입니다", krw,usd);
  
  return 0;
}

#include <stdio.h>

int main(void) {
 double n1,n2,n3;
double sum, avg;
  printf("3개의 수를 입력 하십시오:");
  scanf("%lf,%lf,%lf", &n1,&n2,&n3);
  sum = n1+n2+n3;
  avg = sum/3;
  printf("합계: %.2lf\n", sum);
  printf("평균: %.2lf",avg);
 
  return 0;
} 
#include <stdio.h>

int main(void) {
  int i = 0,sum=0,n;
  while(i < 5)
    {
      printf("값을 입력하세요:");
      scanf("%d",&n);

      sum = n + sum;
      i ++;
    }
    printf("합계는 %d 입니다",sum);
  return 0;
}


------

#include <stdio.h>

int get_integer(void)

{
  int value;
  printf(" 정수를 입력 하시오");
  scanf("%d",value);
return value;
  
}
int add(int x,int y)
{
  return x+y;
}
int main(void) 
{
 int x = get_integer();
 int y = get_integer();

  int sum = add(x,y);
  printf("두 수의 합은 %d 입니다",sum);
  return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int price, char* grade) {
  int answer = 0;
  if (grade == "s")
  {
    answer = price * 0.95;
  }
  else if ( grade == "g")
  {
    answer = price * 0.9;
  }
  else if (grade == "v")
  {
    answer = price * 0.85;
  }
  return answer;
}

int main(void) {
 int price1 = 2500;
  char* grade1 = "v";
  int ret1 = solution(price1, grade1);

  printf("solution return value of the function is %d\n", ret1 );

  int price2 = 96900;
  char* grade2 = "s";
  int ret2 = solution(price2, grade2);

  printf("solution return value of the function is %d\n", ret2);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
int main(void) {
  int i;
 srand((unsigned)time(NULL));
  for(i = 0; i<6; i++)
    {
      printf("%d ",1+rand()%MAX);
    }
  return 0;
}
5.18
#include <stdio.h>

int main(void) {
  int s, e, sum;
  while (1) {
    printf("구간의 처음과 끝을 입력해주세요");
    scanf("%d %d", &s, &e);
    sum = s + e;
    if (2 <= s && s <= 9 && 2 <= e && e <= 9) {
      if (s < e) {
        for (int i = 1; i <= 9; i++) {
          for (int j = s; j <= e; j++) {
            printf("%d x %d = %d\t", j, i, i * j);
          }
          printf("\n");
        }
      } else if (s > e) {
        for (int i = 1; i <= 9; i++) {
          for (int j = s; j >= e; j--) {
            printf("%d x %d = %d\t", j, i, i * j);
          }
          printf("\n");
        }
      }

      break;
    } else
      printf("Input Error!\n");
    printf("다시");
  }
  return 0;
}
5.25
#include <stdio.h>

int main(void) {

  int a = 150, b = 266, c = 427, sum =0,count = 0;
  //scanf("%d %d %d", &a, &b &c);
  sum = a*b*c;
  char t [10] = {0, };
  
  while(1)
    {
       t[count] = sum % 10;
      sum = sum/10;
        count ++;
      if(sum == 0)
      {
       break;
      }
    
    }

  for(int i = 0; i<=9 ; i ++)
    {
      printf("%d\n",t[i]);
    }
  return 0;
}

#include <stdio.h>

int main(void) {
  int i = 10;
  char c  = 69;
  float f = 12.3;

  printf("i의 주소 : %p\n", &i);
    printf("c의 주소 : %p\n", &c);
    printf("f의 주소 : %p\n", &f);
  
  return 0;
}

int i = 10;
  double f = 12.3;
  int*pi = NULL;

  double*pf = NULL;
  pi = &i;
  pf = &f;

  printf("%p %p\n",pi,&i);
  printf("%p %p\n", pf, &f);
  
  return 0;

#include <stdio.h>

int main(void) {

  int i = 3000;
  int *p = NULL;

  p = &i;
  printf("p = %p\n", p);
  printf("&i = %p\n\n", &i);
  printf("i = %d\n", i);
  printf("*p = %d\n", *p);
  return 0;
}

6/1

#include <stdio.h>
#include <string.h>

int main(void) {
 char arr[100001];
  int i,KOI = 0,IOI = 0;
  scanf("%s" ,arr);
  for(int i = 0;i <= strlen(arr)-2; i++)
    {
      if(arr[i] =='K' && arr[i+1] == 'O' && arr[i+2] == 'I')
        KOI++;
      else if (arr[i] =='I' && arr[i+1] == 'O' && arr[i+2] == 'I')
        IOI++;
        
    }
  printf("%d\n%d",KOI,IOI);
  return 0;
}


#include <stdio.h>


int main(void) {
  
 printf("AND : %08X\n",0x9 & 0xA);
  printf("OR : %08X\n",0x9 | 0xA);
  printf("XOR : %08X\n",0x9 ^ 0xA);
  printf("NOT : %08X\n",~0x9 );
  printf("<< : %08X\n",0x4 <<1);
  printf(">> : %08X\n",0x4 >>1);
 
  return 0;
}
