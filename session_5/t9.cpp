// solution from blackbox AI not by me <3
#include <iostream>
double calculateAverage(int arr3D[3][3], int rows, int cols) {
    double sum = 0.0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr3D[i][j];
        }
    }
    return sum / (rows * cols);
}

int main() {
    int arr4D[2][2][3][3] = {
        {
            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
            {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}
        },
        {
            {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}},
            {{18, 16, 14}, {12, 10, 8}, {6, 4, 2}}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            double avg = calculateAverage(arr4D[i][j], 3, 3);
            std::cout << "Average of 3D sub-array [" << i << "][" << j << "] = " << avg << std::endl;
        }
    }

    return 0;
}
