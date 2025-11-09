#include <iostream>
#include <vector>
#include "heap_sort.h"
#include "merge_sort.h"
#include "visualisation.h"
#include "Bridges.h"
#include "DataSource.h"
using namespace std;
using namespace bridges;

int main() {
      Bridges bridges(2, "jedwardhicks", "250295652292");
      DataSource ds;
      dataset::ElevationData elevation_data;

      try {
          elevation_data = ds.getElevationData(41.03, -98.03, 42.50, -96.94);
      } catch(...) {
          cerr << "Elevation data could not be read" << endl;
          return 1;
      }

      vector<int> oneDimData;
      for (int i = 0; i < elevation_data.getRows(); i++) {
          for (int j = 0; j < elevation_data.getCols(); j++) {
              oneDimData.push_back(elevation_data.getVal(i, j));
          }
      }
      merge_sort(oneDimData, 0, oneDimData.size() - 1); // should be a choice

      visualiseElevation(elevation_data, oneDimData); //sends the sorted elevation and coords to visualise

      return 0;
  }