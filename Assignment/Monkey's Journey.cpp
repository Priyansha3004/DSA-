// A monkey decided to visit his friend. It turned out that the monkey’s house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the monkey can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

// Input Format
// The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

// Constraints
// 1 ≤ x ≤ 1 000 000

// Output Format
// Print the minimum number of steps that monkey needs to make to get from point 0 to point x.

// Sample Input
// 9
// Sample Output
// 2
// Explanation
// The monkey moves by 5 position in the first step and then moves by 4 positions in the second step.



#include <iostream>
#include <limits>

using namespace std;

int minSteps(int x) {
  // Initialize steps to 0.
  int steps = 0;

  // While the monkey hasn't reached his friend's house.
  while (x > 0) {
    // Choose the largest possible step that doesn't exceed the remaining distance.
    int step = min(x, 5);
    x -= step;  // Reduce the remaining distance.
    steps++;    // Increment the number of steps taken.
  }

  return steps;
}

int main() {
  // Get the coordinate of the friend's house from the user.
  int x;
  cin >> x;

  // Validate input (optional)
  if (x < 1 || x > 1000000) {
    return 1; // Indicate error
  }

  // Calculate the minimum number of steps.
  int minStepsRequired = minSteps(x);

  // Print the result.
  cout << minStepsRequired << endl;

  return 0;
}