#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop{
    int start_time;
    int duration;
    int end_time;

    Workshop(int st, int du) : start_time(st), duration(du), end_time(st+du){}
};

struct Available_Workshops{
    int n;
    vector<Workshop> arrayy;
};
//Implement the functions initialize and CalculateMaxWorkshops

Available_Workshops* initialize (int start_time[], int duration[], int n){
    Available_Workshops *ans = new Available_Workshops;
    for (int i = 0; i < n; ++i)
    {
        ans->arrayy.push_back(Workshop(start_time[i], duration[i]));
    }
    return ans;
}
bool CompareWs(Workshop A, Workshop B){
    return A.end_time < B.end_time;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    sort(ptr->arrayy.begin(), ptr->arrayy.end(), CompareWs);
    int n=0; 
    int last = 0;
    for(auto &x : ptr->arrayy){
        if (x.start_time>= last){
            n++;
            last=x.end_time;
        }
    }
    return n;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
