#include "FortWeap_BuildingTool.h"
#include "Net/UnrealNetwork.h"

void AFortWeap_BuildingTool::OnRep_DefaultMetadata(UBuildingEditModeMetadata* OldMetadata) {
}

void AFortWeap_BuildingTool::OnBlueprintPaperPulseUpdate(float InCurveVal) {
}

void AFortWeap_BuildingTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeap_BuildingTool, DefaultMetadata);
}

AFortWeap_BuildingTool::AFortWeap_BuildingTool() {
    this->BlueprintPaperMaterial = NULL;
    this->BlueprintDiffuseTextures[0] = NULL;
    this->BlueprintDiffuseTextures[1] = NULL;
    this->BlueprintDiffuseTextures[2] = NULL;
    this->BlueprintDiffuseTextures[3] = NULL;
    this->BlueprintEmissiveMaskTextures[0] = NULL;
    this->BlueprintEmissiveMaskTextures[1] = NULL;
    this->BlueprintEmissiveMaskTextures[2] = NULL;
    this->BlueprintEmissiveMaskTextures[3] = NULL;
    this->BlueprintPaperPulseCurve = NULL;
    this->DefaultMetadata = NULL;
    this->BlueprintPaperMID = NULL;
    this->LastResourceType = EFortResourceType::None;
}

