#ifndef VISUALISATION_H
#define VISUALISATION_H
#include "bridges-cxx-master/src/data_src/ElevationData.h"
#include <vector>

void visualiseElevation(const bridges::dataset::ElevationData& elev_data,
                        const std::vector<int>& sorted_values);

#endif //VISUALISATION_H
