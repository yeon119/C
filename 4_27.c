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

#include <stdio.h>

int main(void) {
  int n,i;
  printf("원하는 단을 입력해 주세요:");
  scanf("%d", &n);
  for(i=1; i<10; i++)
    printf("%d x %d= %d\n",n,i, n*i);
  
  
  return 0;
}
