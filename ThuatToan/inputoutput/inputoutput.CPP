#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

// Timing functions
clock_t start_time;

void start_timer() {
    start_time = clock();
}

void stop_timer() {
    start_time = clock() - start_time;
}

void print_elapsed() {
    double elapsed = ((double)start_time)/CLOCKS_PER_SEC;
    cout << elapsed << " seconds\n";
}

int main() {
    // 1. C scanf (baseline)
    freopen("input.txt", "r", stdin);
    start_timer();
    {
        int v;
        while (fscanf(stdin, "%d", &v) != EOF) {
            // Process data
        }
    }
    stop_timer();
    cout << "C scanf: ";
    print_elapsed();
    fclose(stdin);

    // 2. C++ Standard (sync with stdio)
    ios_base::sync_with_stdio(true);
    cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    start_timer();
    {
        int v;
        while (cin >> v) {
            // Process data
        }
    }
    stop_timer();
    cout << "C++ Standard: ";
    print_elapsed();
    fclose(stdin);

    // 3. C++ Fast IO (unsync stdio)
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    start_timer();
    {
        int v;
        while (cin >> v) {
            // Process data
        }
    }
    stop_timer();
    cout << "C++ Fast IO: ";
    print_elapsed();

    return 0;
}