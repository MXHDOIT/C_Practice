#pragma once
#ifndef  _GAME_H_
#define _GAME_H_
#include<stdio.h>
#include<stdlib.h>
#define ROW 3


void InitBoard(char board[][ROW], int col, int row, char set);//��ʼ������

void ShowBoard(char board[][ROW], int row, int col); //��ӡ����

void PlayerMove(char board[][ROW], int row, int col);//����ƶ�

char IsWin(char board[][ROW], int row, int col);//�ж��Ƿ�ʤ��

void ComputerMove(char board[][ROW], int row, int col); //�����ƶ�
#endif // ! _GAME_H_

