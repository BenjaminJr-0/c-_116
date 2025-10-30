class Timer
{
public:
    Timer(int startTime, int finishTime);

    void tick();
    void preset();
    int getCurrentTime;

private:
    int currentTime;
    int endTime;
};
