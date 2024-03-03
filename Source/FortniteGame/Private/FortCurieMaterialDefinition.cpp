#include "FortCurieMaterialDefinition.h"

FFortCurieMaterialDefinition::FFortCurieMaterialDefinition() {
    this->bCanBeElectrocuted = false;
    this->bConductsElectricity = false;
    this->bFireConsumesFuel = false;
    this->bAllowInactiveDataReset = false;
    this->bUsesFirePropManager = false;
    this->bTrackGridFireStatus = false;
    this->bShouldIgniteLandscapeGrass = false;
    this->bHandlesOverlapsDirectly = false;
    this->DefaultWaterContent = 1;
    this->MinWaterContent = 1;
    this->MaxWaterContent = 1;
    this->DefaultFuelContent = 1;
    this->MinFuelContent = 1;
    this->MaxFuelContent = 1;
    this->ElectricityIntensityDecayMultiplier = 1;
    this->FireIntensityDecayMultiplier = 1;
    this->InactiveDataResetInterval = 1;
    this->FirePropagationCost = 1;
    this->ElectricityPropagationLimitIncrease = 0;
}

