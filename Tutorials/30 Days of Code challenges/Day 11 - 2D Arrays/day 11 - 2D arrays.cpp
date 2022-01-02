/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-2d-arrays/problem
 * Original video explanation: https://www.youtube.com/watch?v=u0ZvK2BVwP4
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * This solution only includes the hourglassSum() and main() functions' code.
 */

 // Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>>& arr) {
    int max_hourglass = -63; // See problem constraints
    for (size_t i = 0; i < arr.size() - 2; i++) {
        for (int j = 2; j < arr[0].size(); j++) {
            int k = j - 2, hourglass = 0;
            while (k <= j) {
                hourglass += arr[i][k] + arr[i + 2][k];
                ++k;
            }
            hourglass += arr[i + 1][j - 1]; // Middle value
            max_hourglass = max(hourglass, max_hourglass);
        }
    }
    return max_hourglass;
}

int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    cout << hourglassSum(arr) << endl;

    return 0;
}

