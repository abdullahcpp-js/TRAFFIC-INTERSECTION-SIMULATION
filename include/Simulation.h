class Simulation {
    int clock; SignalMode mode; Graph graph;
    MinHeap eventQueue; PriorityQueue emergencyQueue;
    HashTable vehicleTable; MaxHeap congestionHeap;
    Vehicle* vehicles; int vehicleCount;
public:
    bool loadInput(const char* netFile, const char* vehFile);
    void runFixed(Report& r);
    void runAdaptive(Report& r);
    Vehicle* findVehicle(const char* plate);
    void processNextEvent();
    void processArrival(const Event& e);
    void processSignalChange(const Event& e);
    void processVehicleDeparture(const Event& e);
    void handleEmergency();
    void recordCongestion();
    void reset();
};