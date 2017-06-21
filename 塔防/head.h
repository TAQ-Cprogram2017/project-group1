//
//  head.h
//  fly
//
//  Created by wxh on 17/5/15.
//  Copyright  2017�� wxh. All rights reserved.
//

#ifndef head_h
#define head_h

//#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/* Macro ---------------------------------------------------------------------*/
#define TRUE  1
#define FALSE 0

//GUI��Ϸ������صĲ���
#define GUI_WALL_SQUARE_WIDTH 10 //��ΧΧǽС����Ŀ��(��λ������)
#define GUI_xWALL_SQUARE_NUM  30 //����(x�᷽��)ΧǽС���������(������ż��)
#define GUI_yWALL_SQUARE_NUM  46 //����(y�᷽��)ΧǽС���������(������ż��)
#define GUI_WALL_WIDTH_PIX    (GUI_WALL_SQUARE_WIDTH*GUI_xWALL_SQUARE_NUM)
#define GUI_WALL_HIGH_PIX     (GUI_WALL_SQUARE_WIDTH*GUI_yWALL_SQUARE_NUM)
#define WINDOW_WIDTH  480     //���ڵĿ��
#define WINDOW_HIGH   GUI_WALL_HIGH_PIX //���ڸ߶�
//����˹������صĲ���
//�ƶ��ķ���
#define DIRECT_UP    3
#define DIRECT_DOWN  2
#define DIRECT_LEFT  -1
#define DIRECT_RIGHT 1
//ÿһ��С����Ĵ�С(��ΧǽС�����ȵ�2��)
#define ROCK_SQUARE_WIDTH  (2*GUI_WALL_SQUARE_WIDTH)
//����������С���������
define X_ROCK_SQUARE_NUM  ((GUI_xWALL_SQUARE_NUM-2)/2)
//����������С���������
#define Y_ROCK_SQUARE_NUM  ((GUI_yWALL_SQUARE_NUM-2)/2)
/* Exported types ------------------------------------------------------------*/
typedef int BOOL ;     //����ֵ����
/*���ݽṹ-���Ա�(�ṹ������)*/
typedef struct ROCK
{
      //������ʾ�������״(ÿһ���ֽ���8λ����ÿ4λ��ʾ�����е�һ��)
   unsigned int rockShapeBits ;
        int          nextRockIndex ;  //��һ�����飬�������е��±�
} RockType ;
//������ͼ�δ����е�λ��(����λ4*4�������Ͻ�����)
typedef struct LOCATE
{  int left ;
      int top ;
} RockLocation_t ;

/* Function prototypes -------------------------------------------------------*/
//Դ�ļ�play.c��
void PlayGame(void) ;
//Դ�ļ�init.c��
int InitProcParameters(void) ;
//Դ�ļ�GUI.c��
void DrawRock(int, const struct LOCATE *, BOOL) ;
void DrawGameGUI(void) ;
void UpdataScore(void) ;
void UpdataGrade(int) ;
#endif /* head_h */


