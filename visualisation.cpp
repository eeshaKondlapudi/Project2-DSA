#include "visualisation.h"
#include "bridges-cxx-master/src/Bridges.h"
#include "bridges-cxx-master/src/data_src/ElevationData.h"
#include <ColorGrid.h>
#include <iostream>
#include <vector>
#include <string>

using namespace bridges;
using namespace std;

void visualiseElevation(const dataset::ElevationData& elevation_data, const vector<int>& oneDimData) {
    int rows = elevation_data.getRows();
    int cols = elevation_data.getCols();

    ColorGrid grid(rows, cols);
    int minVal = oneDimData.front();
    int maxVal = oneDimData.back();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = elevation_data.getVal(i, j);
            double t = double(val - minVal) / (maxVal - minVal);
            string color;
            if (t < .25) color = "0000FF";
            else if (t < .50) color = "9BA84F";
            else if (t < .75) color = "C4AD8A";
            else color = "F8F7F7";
            grid.set(i, j, color);
        }
    }
    Bridges bridges(2, "jedwardhicks", "250295652292");
    bridges.setDataStructure(&grid);
    bridges.visualize();
}
