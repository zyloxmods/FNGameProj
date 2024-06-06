#include "MegaStormCircle.h"

FMegaStormCircle::FMegaStormCircle() {
    NumCellsFromCenter = 0;
    CurrentQuadrant = 0;
    RadiusInGridCells = 0;
    XAdvanceAccumulation = 0;
    YAdvanceAccumulation = 0;
    GridRadiusSquaredX4 = 0;
    NumPlots = 0;
    WorldRadius = 1;
    MegaStormState = EMegaStormState::GatheringActorList;
}

