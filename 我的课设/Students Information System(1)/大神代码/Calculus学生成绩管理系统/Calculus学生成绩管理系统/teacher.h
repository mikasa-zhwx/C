/**
  ******************************************************************************
    * @File:		teacher.h
    * @Author:	    陈火旺
	* @Date:		2017-05-22
	* @Brief:		教师用户管理头文件
  ******************************************************************************
  */
#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

/* Includes ------------------------------------------------------------------*/

/* 宏定义 --------------------------------------------------------------------*/

/* 变量及类型定义 -------------------------------------------------------------*/

/* 函数声明 -------------------------------------------------------------------*/
int input_mark_csv(char *id);
int view_mark_of_student(void);
int output_student_csv(char *id);
int search_for_task_with_state(char *id,int state);
int input_mark_csv(char *id);

#endif // TEACHER_H_INCLUDED

/**********************************END OF FILE***********************************/
