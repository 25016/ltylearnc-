#include <iostream>
#include <string>

std::string classify(int latency_ms, int packets_lost) {
    if (latency_ms < 0 || packets_lost < 0) {
        return "INVALID";
    }
    if (latency_ms > 200 || packets_lost > 5) {
        return "FAULT";
    }
    if (latency_ms > 100 || packets_lost > 1) {
        return "WARNING";
    }
    return "OK";
}

int main() {
    int latency_ms = 0;
    int packets_lost = 0;
    int average_latency = 0;
    int ok_count = 0;
    int warning_count = 0;
    int fault_count = 0;
    int invalid_count = 0;
    int total_latency = 0;
    int valid_count = 0;

    while (true) {
        if (!(std::cin >> latency_ms >> packets_lost)) {
            std::cout << "INVALID INPUT" << std::endl;
            return 1;
        }

        if (latency_ms == -1 && packets_lost == -1) {
            break;
        }

        std::string status = classify(latency_ms, packets_lost);
        std::cout << status << std::endl;

        if (status == "OK") {
            ok_count++;
            total_latency += latency_ms;
            valid_count++;
        } else if (status == "WARNING") {
            warning_count++;
            total_latency += latency_ms;
            valid_count++;
        } else if (status == "FAULT") {
            fault_count++;
            total_latency += latency_ms;
            valid_count++;
        } else {
            invalid_count++;
        }
    }

    std::cout << "OK: " << ok_count << std::endl;
    std::cout << "WARNING: " << warning_count << std::endl;
    std::cout << "FAULT: " << fault_count << std::endl;
    std::cout << "INVALID: " << invalid_count << std::endl;

    if (valid_count == 0) {
        std::cout << "Average latency: N/A" << std::endl;
        return 0;
    }

    average_latency = total_latency / valid_count;
    std::cout << "Average latency: " << average_latency << std::endl;
    return 0;
}
