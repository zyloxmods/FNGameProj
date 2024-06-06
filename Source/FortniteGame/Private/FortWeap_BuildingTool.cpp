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
    BlueprintPaperMaterial = NULL;
    BlueprintDiffuseTextures[0] = NULL;
    BlueprintDiffuseTextures[1] = NULL;
    BlueprintDiffuseTextures[2] = NULL;
    BlueprintDiffuseTextures[3] = NULL;
    BlueprintDiffuseTextures[4] = NULL;
    BlueprintEmissiveMaskTextures[0] = NULL;
    BlueprintEmissiveMaskTextures[1] = NULL;
    BlueprintEmissiveMaskTextures[2] = NULL;
    BlueprintEmissiveMaskTextures[3] = NULL;
    BlueprintEmissiveMaskTextures[4] = NULL;
    BlueprintPaperPulseCurve = NULL;
    DefaultMetadata = NULL;
    BlueprintPaperMID = NULL;
    LastResourceType = EFortResourceType::None;
}

