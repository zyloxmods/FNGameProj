#include "FortCurieMaterialDefinition.h"

FFortCurieMaterialDefinition::FFortCurieMaterialDefinition() {
    bCanBeElectrocuted = false;
    bConductsElectricity = false;
    bFireConsumesFuel = false;
    bAllowInactiveDataReset = false;
    bUsesFirePropManager = false;
    bTrackGridFireStatus = false;
    bShouldIgniteLandscapeGrass = false;
    bHandlesOverlapsDirectly = false;
    DefaultWaterContent = 1;
    MinWaterContent = 1;
    MaxWaterContent = 1;
    DefaultFuelContent = 1;
    MinFuelContent = 1;
    MaxFuelContent = 1;
    ElectricityIntensityDecayMultiplier = 1;
    FireIntensityDecayMultiplier = 1;
    InactiveDataResetInterval = 1;
    FirePropagationCost = 1;
    ElectricityPropagationLimitIncrease = 0;
}

