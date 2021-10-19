#include <string>

class Area {
private:
    std::string identifier;
    int population;
    int dVotes;
    int rVotes;

public:
    Area(std::string id, int pop, int dem, int rep) {
        identifier = id;
    }
    /**
     * @brief Get the population of the area.
     * 
     * @return int The population of the area.
     */
    int getPopulation() {
        return population;
    }
};