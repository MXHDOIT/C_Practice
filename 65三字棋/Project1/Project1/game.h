#pragma once
#ifndef  _GAME_H_
#define _GAME_H_
#include<stdio.h>
#include<stdlib.h>
#define ROW 3


void InitBoard(char board[][ROW], int col, int row, char set);//初始化棋盘

void ShowBoard(char board[][ROW], int row, int col); //打印棋盘

void PlayerMove(char board[][ROW], int row, int col);//玩家移动

char IsWin(char board[][ROW], int row, int col);//判断是否胜利

void ComputerMove(char board[][ROW], int row, int col); //电脑移动
#endif // ! _GAME_H_

