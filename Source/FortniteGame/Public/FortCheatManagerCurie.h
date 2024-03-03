#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManagerCurie.generated.h"

UCLASS(Blueprintable)
class UFortCheatManagerCurie : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManagerCurie();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VislogElementSubgridCollision();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VisLogAllElementSubGridNodes();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VisLogAllElectricGrids();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ValidateAllElectricGrids();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void UseBuildingConnectivityPointsForFireSpread(bool bInput);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleElectricGridVisLogEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetOverlapFireApplicationMaxMagnitude(float NewMaxMagnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetOverlapFireApplicationMagnitude(float NewMagnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetFirePropagationManagerTickInterval(float NewTickInterval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetFirePropagationHalfAngleForUpwardMobilityCalculation(float NewHalfAngle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetFirePropagationApplicationMagnitudeRandomizationRange(float min, float max);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetFirePropagationApplicationMagnitude(float NewMagnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetFireBoundsExpansionValue(float X, float Y, float Z);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetDefaultFirePropagationFuel(int32 NewPropagationFuel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetDefaultConnectivityPointsForFirePropagation(int32 NewDefaultConnectivityPoints);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetBaseFirePropagationRate(float NewRate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintFirePropagationDebugUnderCursor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCurieVFXManagerDebug(bool bVerbose);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieSpatialManagerDebug();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieGrassGridDebug();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieElementSpatialGridDebug();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieDebugUnderCursor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieDebugForSelf();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintCurieBuildingGridDebug(int32 MinOccupiedGridCellsWarning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ApplyCurieElementToSelf(const FString& ElementTag, float Magnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ApplyCurieElementToCursor(const FString& ElementTag, float Magnitude);
    
};

