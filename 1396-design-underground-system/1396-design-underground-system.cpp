class UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    map<int, pair<string, int>> in;
    map<pair<string, string>, pair<double, int>> dist;
    void checkIn(int id, string stationName, int t) {
            in[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        if(dist[{in[id].first,  stationName}].first == 0){
            dist[{in[id].first,  stationName}].first = t - in[id].second;
            dist[{in[id].first,  stationName}].second=1;
        }
        else{
            dist[{in[id].first,  stationName}].first += (t - in[id].second);
            dist[{in[id].first,  stationName}].second+=1;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return dist[{startStation, endStation}].first/(dist[{startStation, endStation}].second);
    }
};