//
//  head.h
//  fly
//
//  Created by wxh on 17/5/15.
//  Copyright  2017年 wxh. All rights reserved.
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

//GUI游戏界面相关的参数
#define GUI_WALL_SQUARE_WIDTH 10 //外围围墙小方格的宽度(单位：像素)
#define GUI_xWALL_SQUARE_NUM  30 //横向(x轴方向)围墙小方格的数量(必须是偶数)
#define GUI_yWALL_SQUARE_NUM  46 //纵向(y轴方向)围墙小方格的数量(必须是偶数)
#define GUI_WALL_WIDTH_PIX    (GUI_WALL_SQUARE_WIDTH*GUI_xWALL_SQUARE_NUM)
#define GUI_WALL_HIGH_PIX     (GUI_WALL_SQUARE_WIDTH*GUI_yWALL_SQUARE_NUM)
#define WINDOW_WIDTH  480     //窗口的宽度
#define WINDOW_HIGH   GUI_WALL_HIGH_PIX //窗口高度
//俄罗斯方块相关的参数
//移动的方向
#define DIRECT_UP    3
#define DIRECT_DOWN  2
#define DIRECT_LEFT  -1
#define DIRECT_RIGHT 1
//每一个小方块的大小(是围墙小方格宽度的2倍)
#define ROCK_SQUARE_WIDTH  (2*GUI_WALL_SQUARE_WIDTH)
//横向能容纳小方格的数量
define X_ROCK_SQUARE_NUM  ((GUI_xWALL_SQUARE_NUM-2)/2)
//纵向能容纳小方格的数量
#define Y_ROCK_SQUARE_NUM  ((GUI_yWALL_SQUARE_NUM-2)/2)
/* Exported types ------------------------------------------------------------*/
typedef int BOOL ;     //布尔值类型
/*数据结构-线性表(结构体数组)*/
typedef struct ROCK
{
      //用来表示方块的形状(每一个字节是8位，用每4位表示方块中的一行)
   unsigned int rockShapeBits ;
        int          nextRockIndex ;  //下一个方块，在数组中的下标
} RockType ;
//方块在图形窗口中的位置(即定位4*4大块的左上角坐标)
typedef struct LOCATE
{  int left ;
      int top ;
} RockLocation_t ;

/* Function prototypes -------------------------------------------------------*/
//源文件play.c中
void PlayGame(void) ;
//源文件init.c中
int InitProcParameters(void) ;
//源文件GUI.c中
void DrawRock(int, const struct LOCATE *, BOOL) ;
void DrawGameGUI(void) ;
void UpdataScore(void) ;
void UpdataGrade(int) ;
#endif /* head_h */


