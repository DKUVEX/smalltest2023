/**
 * ****************************(C) COPYRIGHT 2023 Blue Bear****************************
 * @file       auto_task.hpp
 * @brief      
 * 
 * @note       
 * @history:
 *   Version   Date            Author          Modification    Email
 *   V1.0.0    Mar-03-2023     Tianyi Zhang    1. start        tz137@duke.edu/shadow_rogue@qq.com
 * 
 * @verbatim
 * ==============================================================================
 * 
 * ==============================================================================
 * @endverbatim
 * ****************************(C) COPYRIGHT 2023 Blue Bear****************************
 */
#ifndef AUTO_TASK_H
#define AUTO_TASK_H

#include "api.h"

//in the beginning of task ,wait a time
//任务开始空闲一段时间
#define AUTO_TASK_INIT_TIME       300
//auto task control time  2ms
//自动任务控制间隔 2ms
#define AUTO_TASK_TIME_MS          2

typedef struct {
    std::int32_t *chassis_voltage;
}auto_control_t;


/**
  * @brief          finctional task, osDelay AUTO_TASK_TIME_MS (2ms) 
  * @param[in]      param: null
  * @retval         none
  */
/**
  * @brief          竞技任务，间隔 AUTO_TASK_TIME_MS 2ms
  * @param[in]      param: 空
  * @retval         none
  */
void auto_task_fn(void* param);
#endif