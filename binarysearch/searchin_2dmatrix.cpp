#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int l = mat.size();
        if (l == 0) return false;
        int r = mat[0].size();
        int s = 0;
        int e = l * r - 1;

        while (s <= e) {
            int mid = (s + e) / 2;
            int row = mid / r;
            int col = mid % r;
            if (mat[row][col] == x) {
                return true;
            } else if (mat[row][col] < x) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return false;
    }
};

int main() {
    int rows, cols, target;
    cout << "Enter the number of rows and columns in the matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix in row-major order: \n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    Solution solution;
    bool result = solution.searchMatrix(matrix, target);

    if (result) {
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}
