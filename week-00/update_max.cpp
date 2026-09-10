/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-08-26 16:14:26
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-08-26 16:17:28
 * @FilePath: /ad-training/week-00/update_max.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

void update_max(int& current_max, int candidate) {
    // 这里只写：candidate 更大时，更新 current_max

if (candidate > current_max) {
        current_max = candidate;
    }

}

int main() {
    int max_latency = 80;

    update_max(max_latency, 120);
    std::cout << "Max latency: " << max_latency << std::endl;

    update_max(max_latency, 60);
    std::cout << "Max latency: " << max_latency << std::endl;

    update_max(max_latency, 250);
    std::cout << "Max latency: " << max_latency << std::endl;

    return 0;
}