class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        vector<int> days = {31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31};

        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;

        int m = stoi(arriveAlice.substr(0, 2));
        int d = stoi(arriveAlice.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            d += days[i];
        a1 = d;

        m = stoi(leaveAlice.substr(0, 2));
        d = stoi(leaveAlice.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            d += days[i];
        a2 = d;

        m = stoi(arriveBob.substr(0, 2));
        d = stoi(arriveBob.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            d += days[i];
        b1 = d;

        m = stoi(leaveBob.substr(0, 2));
        d = stoi(leaveBob.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            d += days[i];
        b2 = d;

        int start = max(a1, b1);
        int end = min(a2, b2);

        if (start > end)
            return 0;

        return end - start + 1;
    }
};