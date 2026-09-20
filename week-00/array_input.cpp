/*
 * @Author: 25016 799197262@qq.com
 * @Date: 2026-08-26 17:22:03
 * @LastEditors: 25016 799197262@qq.com
 * @LastEditTime: 2026-09-20 09:26:40
 * @FilePath: /ad-training/week-00/array_input.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

int find_max_latency_index(const int latencies[], int size)
{
    int max_latency_index = 0;

    for (int i = 1; i < size; i++) {
        if (latencies[i] > latencies[max_latency_index]) {
            max_latency_index = i;
        }
    }

    return max_latency_index;
}

int find_min_latency_index(const int latencies[], int size)
{
    int min_latency_index = 0;

    for (int i = 1; i < size; i++) {
        if (latencies[i] < latencies[min_latency_index]) {
            min_latency_index = i;
        }
    }

    return min_latency_index;
}

void sort_latencies(int latencies[], int size)
{
    bool swapped = false;
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (latencies[i] > latencies[i + 1]) {
                int temp = latencies[i];
                latencies[i] = latencies[i + 1];
                latencies[i + 1] = temp;
            
            
            }
        }
    if (!swapped) {
        break;
    }
    }
}



int main()
{
    const int size = 3;
    int latencies[size];
    int total = 0;
    int above_average_count = 0;

    for (int i = 0; i < size; i++) {
        std::cin >> latencies[i];
        total += latencies[i];
    }

    int max_latency_index = find_max_latency_index(latencies, size);
    int min_latency_index = find_min_latency_index(latencies, size);
    int max_latency = latencies[max_latency_index];
    int min_latency = latencies[min_latency_index];

   

    double average_latency = static_cast<double>(total) / size;

    for (int i = 0; i < size; i++) {
        if (latencies[i] > average_latency) {
            above_average_count++;
        }
    }

    sort_latencies(latencies, size);

    std::cout << "Max latency: " << max_latency << std::endl;
    std::cout << "Min latency: " << min_latency << std::endl;
    std::cout << "Average latency: " << average_latency << std::endl;
    std::cout << "Above average count: " << above_average_count << std::endl;
    std::cout << "Max latency index: " << max_latency_index << std::endl;
    std::cout << "Min latency index: " << min_latency_index << std::endl;
    std::cout << "Sorted input: ";
    for (int i = 0; i < size; i++) {
        std::cout << latencies[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}