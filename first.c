#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int add(int num1, int num2)//�ӷ�
{
      return num1 + num2;
}
int subtraction(int num1, int num2)//����
{
      return num1 - num2;
}
int mul(int num1, int num2)//�˷�
{
      return num1*num2;
}
double divis(int num1, int num2)//����
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
      printf("��ӭ����Сѧ���������⣡\n");
      srand((unsigned int)time(NULL));
      while (1)
      {
            printf("��ѡ���������ͣ�1.�ӷ� 2.���� 3.�˷� 4.����(������λС��)\n");
            scanf("%d", &choice);
            printf("��ѡ��λ����1.һλ�� 2.��λ��\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                              }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                              }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                              }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                              }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                              }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                          printf("�ش���ȷ��\n");
                                          right++;
                                    }
                                    else
                                    {
                                          printf("�ش����\n");
                                          wrong++;
                                    }
                                    printf("�Ƿ������y/n\n");
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
                                    printf("�ش���ȷ��\n");
                                    right++;
                               }
                              else
                              {
                                    printf("�ش����\n");
                                    wrong++;
                              }
                              printf("�Ƿ������y/n\n");
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
                                          printf("�ش���ȷ��\n");
                                          right++;
                                    }
                                    else
                                    {
                                          printf("�ش����\n");
                                          wrong++;
                                    }
                                    printf("�Ƿ������y/n\n");
                                    getchar();
                                    scanf("%c", &ch);
                                    if (ch == 'y')
                                    break;
                                    else if (ch == 'n')
                                    goto end;
                             }
                        break;
                        default:
                  printf("�������\n");
                        break;
            }
}
end:
printf("�ش���ȷ%d�⣬�ش����%d��\n", right, wrong);
printf("\n===================��лʹ��=====================��\n");
system("pause");


}