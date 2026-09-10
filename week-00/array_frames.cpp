/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-08-26 16:24:27
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-08-26 16:47:10
 * @FilePath: /ad-training/week-00/array_frames.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

int main() {
    int latencies[5] = {80, 120, 95, 250, 110};

    int max_frame=0, max_latency=latencies[0];




    for (int i = 0; i < 5; i++)
    {
      
    if (latencies[i] >max_latency)
    {
        max_latency = latencies[i];
        max_frame = i;
    
        }
    }

        
    std::cout<< "Max latency: " << max_latency<< std::endl;
    std::cout<< "Max frame: " << max_frame<< std::endl;
    

    return 0;
}