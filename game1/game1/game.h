//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL],int row,int col);
//�������
void playerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL],int row, int col);

//�ж���Ϸ�Ƿ�����Ӯ
char Iswin(char board[ROW][COL], int row, int col);