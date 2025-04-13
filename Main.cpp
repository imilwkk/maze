#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 21;
char maze[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

int n;

int dx[] = {-2, 0, 2, 0};
int dy[] = {0, 2, 0, -2};

int main() {
    // Get maze size from user with validation
    void getMazeSize() {
        do {
            cout << "Type the size of the maze (within 10 to 20, odd only): ";
            cin >> n;
        } while (n < 10 || n > 20 || n % 2 == 0);
    }

    return 0;
}