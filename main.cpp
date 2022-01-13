#include <iostream>
#include <cstring>
using namespace std;

#define row 6
#define col 6

void search(int arr[row][col], int rw, int cl){
    int target;
    
    cout << "Enter target: ";
    cin >> target;
    
    for (int i = 0; i < rw; i++) {
        for (int j = 0; j < cl; j++) {
            if (arr[i][j] == target) {
                cout << "Target " << target << " found at row " << i + 1 << ", col " << j + 1 << "!" << endl;
                
                return;
            }
        }
    }
    cout << "Target " << target << " not found" << endl;
}

// Main
int main(){
    
    int arr[row][col] = { { 1, 3, 5, 7, 9, 11},
        { 13, 15, 17, 19, 21, 23 },
        { 25, 27, 29, 31, 33, 35 },
        { 37, 39, 41, 43, 45, 47 },
        { 49, 51, 53, 55, 57, 59},
        { 61, 63, 65, 67, 69, 71}
    };
    
    search(arr, 6, 6);
    system("pause");
    return 0;
}
