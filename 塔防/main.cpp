//
//  main.c
//  fly
//
//  Created by wxh on 17/5/15.
//  Copyright  2017�� wxh. All rights reserved.
//

#include "head.h"
#include <windows.h>
#include <dos.h>
/* Typedef -------------------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
//ȫ�ֱ���-��Ϸ���״̬����(����ʾ��ǰ������Щλ���з���)
//0��ʾû�У�1��ʾ��(��������к����У��γ�һ��Χǽ�������жϷ����Ƿ��ܹ��ƶ�)
char g_gameBoard[Y_ROCK_SQUARE_NUM+2][X_ROCK_SQUARE_NUM+2] = {0} ;
//ͳ�Ʒ���
int  g_score = 0 ;
//�ȼ�
int  g_grade = 0 ;
int  g_rockTypeNum = 0 ; //���ж����ֶ���˹����
RockType rockArray[50] = {(0,0)} ;
/*******************************************************************************
    35.* Function Name  : main
    36.* Description    : Main program
    37.* Input          : None
    38.* Output         : None
    39.* Return         : None
    40.*******************************************************************************/
int
main(void)
{
       //������Ϸ����
    initgraph(WINDOW_WIDTH, WINDOW_HIGH) ; //��ʼ��ͼ�δ���
       cleardevice() ;
       DrawGameGUI() ;
    
        //ʹ�� API �����޸Ĵ�������
       HWND hWnd = GetHWnd();
    SetWindowText(hWnd, "����˹����");
    
      //��ʼ������
       InitProcParameters() ;

       //��Ϸ����
        PlayGame()    ;
    
    closegraph()    ;
        return 0 ;
}

