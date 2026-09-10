/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-08-25 15:48:23
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-08-25 17:22:58
 * @FilePath: /ad-training/week-00/max_latency.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

int larger_of(int a,int b) {
    return (a > b) ? a : b;
}

int main() {
    
int number_of_inputs = 5, i, max_latency_ms = 0;

int latency_ms;

for(i=0; i<number_of_inputs;  i++ ) 
{

    std::cin >> latency_ms;

    std::cout << "Frame " << i << ": " << latency_ms << std::endl;


        max_latency_ms = larger_of(max_latency_ms, latency_ms);
    
    
} 

    
        std::cout << "Max latency: " << max_latency_ms << std::endl;


return 0;

}
