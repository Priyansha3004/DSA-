// Three close friends, Petya, Vasya, and Tonya, have formed a team to participate in programming contests. The contest organizers offer several problems for the participants to solve. Prior to the contest, the friends agreed that they would only implement a problem's solution if at least two of them are confident in solving it. If not, they would not attempt to solve the problem. For each of the n problems offered in the contest, the friends have information about which of them are confident in solving it. We need to help the friends determine how many problems they will solve based on this information.

// Input Format
// The given input has 'n' number of problems (where 1 ≤ n ≤ 1000) in a contest. Each problem is represented on a separate line with three integers, either 0 or 1. The first integer denotes Petya's confidence in the problem's solution. 1 indicates that Petya is sure about the solution, while 0 indicates that Petya is not sure. The second integer represents Vasya's opinion on the solution, where 1 means Vasya is sure about the solution, and 0 means he is not sure. The third integer represents Tonya's opinion on the solution, where 1 means Tonya is sure about the solution, and 0 means she is not sure. All the integers in a line are separated by a space.

// Constraints
// 1 ≤ n ≤ 1000

// Output Format
// Print a single integer — the number of problems that will be solved

// Sample Input
// 10
// 1 0 1
// 1 0 0
// 1 0 0
// 1 0 1
// 0 0 0
// 1 0 1
// 1 1 0
// 0 1 1
// 0 1 0
// 0 1 1
// Sample Output
// 6
// Explanation
// There is only 6 questions on which atleast 2 of the three contestants agree. They are question no 1,4,6,7,8,10

#include <iostream>

using namespace std;

int main() {
    // Read the number of problems
    int n;
    cin >> n;

    // Initialize the count of solved problems
    int solved_problems = 0;

    // Iterate through each problem
    for (int i = 0; i < n; ++i) {
        // Read Petya's, Vasya's, and Tonya's confidence for the problem
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Count how many of them are confident in solving the problem
        int confident_count = petya + vasya + tonya;

        // Check if at least two of them are confident
        if (confident_count >= 2) {
            solved_problems++;
        }
    }

    // Print the number of solved problems
    cout << solved_problems << endl;

    return 0;
}
