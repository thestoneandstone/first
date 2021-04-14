#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int add(int num1, int num2)//加法
{
      return num1 + num2;
}
int subtraction(int num1, int num2)//减法
{
      return num1 - num2;
}
int mul(int num1, int num2)//乘法
{
      return num1*num2;
}
double divis(int num1, int num2)//除法
{
      return ((int)(((float)num1 / num2) * 100 + 0.5)) / 100.0;
}

int main()
{
      int type = -1;
      int data = -1;
      int choice, num1, num2, results;
      float div_result;
      int right = 0;
      int wrong = 0;
      char ch;
      printf("欢迎进入小学四则运算题！\n");
      srand((unsigned int)time(NULL));
      while (1)
      {
            printf("请选择运算类型：1.加法 2.减法 3.乘法 4.除法(保留两位小数)\n");
            scanf("%d", &choice);
            printf("请选择位数：1.一位数 2.两位数\n");
            scanf("%d", &data);
            switch (choice)
            {
                  case 1:
                        if (data == 1)
                        {
                              num1 = rand() % 10;
                              num2 = rand() % 10;
                              printf("%d + %d=__?__\n", num1, num2);
                              scanf("%d", &results);
                              if (results == add(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                              }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                              }
                        else if (data == 2)
                        {
                              num1 = rand() % 100;
                              num2 = rand() % 100;
                              printf("%d + %d=__?__\n", num1, num2);
                              scanf("%d", &results);
                              if (results == add(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                              }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                        }
                        break;
                  case 2:
                        if (data == 1)
                        {
                              num1 = rand() % 10;
                              num2 = rand() % 10;
                              printf("%d - %d=__?__\n", num1, num2);
                              scanf("%d", &results);
                              if (results == subtraction(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                              }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                      }
                        else if (data == 2)
                        {
                              num1 = rand() % 100;
                              num2 = rand() % 100;
                              printf("%d - %d=__?__\n", num1, num2);
                              scanf("%d", &results);
                              if (results == subtraction(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                              }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                              }
                        break;
                  case 3:
                        if (data == 1)
                        {
                              num1 = rand() % 10;
                              num2 = rand() % 10;
                              printf("%d * %d=__?__\n", num1, num2);
                              scanf("%d", &results);
                              if (results == mul(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                              }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                              }
                              else if (data == 2)
                              {
                                    num1 = rand() % 100;
                                    num2 = rand() % 100;
                                    printf("%d * %d=__?__\n", num1, num2);
                                    scanf("%d", &results);
                                    if (results == mul(num1, num2))
                                    {
                                          printf("回答正确！\n");
                                          right++;
                                    }
                                    else
                                    {
                                          printf("回答错误！\n");
                                          wrong++;
                                    }
                                    printf("是否继续？y/n\n");
                                    getchar();
                                    scanf("%c", &ch);
                                    if (ch == 'y')
                                    break;
                                    else if (ch == 'n')
                                    goto end;
                                    }
                              break;
                  case 4:
                        if (data == 1)
                        {
                              num1 = rand() % 10;
                              num2 = rand() % 10 + 1;
                              printf("%d / %d=__?__\n", num1, num2);
                              scanf("%f", &div_result);
                              if (div_result == divis(num1, num2))
                              {
                                    printf("回答正确！\n");
                                    right++;
                               }
                              else
                              {
                                    printf("回答错误！\n");
                                    wrong++;
                              }
                              printf("是否继续？y/n\n");
                              getchar();
                              scanf("%c", &ch);
                              if (ch == 'y')
                              break;
                              else if (ch == 'n')
                              goto end;
                              }
                              else if (data == 2)
                              {
                                    num1 = rand() % 100;
                                    num2 = rand() % 100 + 1;
                                    printf("%d / %d=__?__\n", num1, num2);
                                    scanf("%f", &div_result);
                                    if (div_result == divis(num1, num2))
                                    {
                                          printf("回答正确！\n");
                                          right++;
                                    }
                                    else
                                    {
                                          printf("回答错误！\n");
                                          wrong++;
                                    }
                                    printf("是否继续？y/n\n");
                                    getchar();
                                    scanf("%c", &ch);
                                    if (ch == 'y')
                                    break;
                                    else if (ch == 'n')
                                    goto end;
                             }
                        break;
                        default:
                  printf("输入错误！\n");
                        break;
            }
}
end:
printf("回答正确%d题，回答错误%d题\n", right, wrong);
printf("\n===================感谢使用=====================！\n");
system("pause");


}