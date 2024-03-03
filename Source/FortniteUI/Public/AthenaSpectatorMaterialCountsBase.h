#pragma once
#include "CoreMinimal.h"
#include "EFortResourceType.h"
#include "FortHUDElementWidget.h"
#include "AthenaSpectatorMaterialCountsBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorMaterialCountsBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInBuildMode;
    
public:
    UAthenaSpectatorMaterialCountsBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeToDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayScrubComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildingMaterialChanged(EFortResourceType BuildingMaterial);
    
};

