#include <iostream>

using namespace std;

bool canAttendMeetings(int intervals[][2], int n) {
    int starts[n];
    int ends[n];

    for (int i = 0; i < n; ++i) {
        starts[i] = intervals[i][0];
        ends[i] = intervals[i][1];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (starts[j] < starts[i]) {
                
                int tempStart = starts[i];
                starts[i] = starts[j];
                starts[j] = tempStart;

                int tempEnd = ends[i];
                ends[i] = ends[j];
                ends[j] = tempEnd;
            }
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        if (ends[i] > starts[i + 1]) {
            return false; 
        }
    }

    return true;
}

int main() {
    int n;
    cout<<"Enter number of meetings: ";
    cin>>n;
    int intervals[n][2];
    cout<<"Enter starting and ending time of meetings: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>intervals[i][j];
        }
    }

    bool canAttend = canAttendMeetings(intervals, n);

    cout << "Can attend all meetings: " << (canAttend ? "true" : "false") <<endl;

    return 0;
}
