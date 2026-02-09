
  
/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#ifndef  USE_NO_ASSERT
  
/**
  * 描述: 当程序发生错误时，进入一个死循环
  * 参数: file: 指向源文件名的指针
  *       line: 发生错误的行号
  * 返回: 无
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
    /* 死循环 */
    while (1)
    {
    }
}
#endif

    
/******************* (C) COPYRIGHT 2010 STMicroelectronics ***************************/
