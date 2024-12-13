//#include <iostream>
//
//const int N = 6;
//int board[N][N];
//
//
//int moveX[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
//int moveY[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//
//bool isValid(int x, int y) {
//    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
//}
//
//void printBoard() {
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N; ++j)
//            std::cout << board[i][j] << " ";
//        std::cout << std::endl;
//    }
//}
//
//bool solveKnightTour(int x, int y, int moveCount) {
//    if (moveCount == N * N) return true;
//
//    for (int i = 0; i < 8; ++i) {
//        int nextX = x + moveX[i];
//        int nextY = y + moveY[i];
//
//        if (isValid(nextX, nextY)) {
//            board[nextX][nextY] = moveCount;
//            if (solveKnightTour(nextX, nextY, moveCount + 1)) return true;
//            board[nextX][nextY] = -1; 
//        }
//    }
//    return false;
//}
//
//int main() {
// 
//    for (int i = 0; i < N; ++i)
//        for (int j = 0; j < N; ++j)
//            board[i][j] = -1;
//
//
//    int startX, startY;
//    std::cout << "vedit kordunaty" << N - 1 << "): ";
//    std::cin >> startX >> startY;
//
//
//    board[startX][startY] = 0;
//
//
//    if (solveKnightTour(startX, startY, 1)) {
//        printBoard();
//    }
//    else {
//        std::cout << "rozvazania ne znaideno" << std::endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    const int SIZE = 5;
//    int source[SIZE] = { 1, 2, 3, 4, 5 };
//    int destination[SIZE];
//
//   
//    int* srcPtr = source;
//    int* destPtr = destination;
//
//  
//    for (int i = 0; i < SIZE; ++i) {
//        *(destPtr + i) = *(srcPtr + i);
//    }
//
// 
//    std::cout << "skopiovanui masuv ";
//    for (int i = 0; i < SIZE; ++i) {
//        std::cout << destination[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}


//
//#include <iostream>
//
//void reverseArray(int* arr, int size) {
//    int* startPtr = arr;          
//    int* endPtr = arr + size - 1; 
//
//    while (startPtr < endPtr) {
//        
//        int temp = *startPtr;
//        *startPtr = *endPtr;
//        *endPtr = temp;
//
//
//        startPtr++;
//        endPtr--;
//    }
//}
//
//int main() {
//    const int SIZE = 5;
//    int arr[SIZE] = { 1, 2, 3, 4, 5 };
//
//    std::cout << "oruginalnui masuv ";
//    for (int i = 0; i < SIZE; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    reverseArray(arr, SIZE);
//
//    std::cout << "perevernytui masuv ";
//    for (int i = 0; i < SIZE; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}



//#include <iostream>
//
//int main() {
//    const int SIZE = 5;
//    int source[SIZE] = { 1, 2, 3, 4, 5 };
//    int destination[SIZE];
//
//   
//    int* srcPtr = source;
//    int* destPtr = destination + SIZE - 1;
//
//   
//    for (int i = 0; i < SIZE; ++i) {
//        *destPtr = *srcPtr;
//        srcPtr++;
//        destPtr--;
//    }
//
//    
//    std::cout << "skopiovano masuv ";
//    for (int i = 0; i < SIZE; ++i) {
//        std::cout << destination[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
