#include <iostream>
#include <cstdio>
#include <fstream>
#include <ctime>

using namespace std;

clock_t start_time;

void time_start() {
    start_time = clock();
}

void time_end() {
    start_time = clock() - start_time;
}

void time_elapsed() {
    double time_taken = ((double)start_time) / CLOCKS_PER_SEC;
    cout << time_taken << " seconds";
}

int ReadInt() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    // 1. Fast I/O with freopen
    freopen("input.txt", "r", stdin);
    time_start();
    {
        int v;
        for (int i = 0; i < 10000000; i++) {
            v = ReadInt();
        }
    }
    time_end();
    cout << "Fast I/O with freopen: ";
    time_elapsed();
    cout << endl;
    fclose(stdin);

    // 2. C scanf with freopen
    freopen("input.txt", "r", stdin);
    time_start();
    {
        int v;
        while (scanf("%d", &v) != EOF) {
            // Read data
        }
    }
    time_end();
    cout << "C scanf: ";
    time_elapsed();
    cout << endl;
    fclose(stdin);

    // 3. C++ input stream with freopen
    freopen("input.txt", "r", stdin);
    time_start();
    {
        int v;
        while (cin >> v) {
            // Read data
        }
    }
    time_end();
    cout << "C++ input stream: ";
    time_elapsed();
    cout << endl;

    return 0;
}