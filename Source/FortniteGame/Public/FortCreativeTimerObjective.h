#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "FortTimeWidgetInterface.h"
#include "TimerObjectiveHUDData.h"
#include "FortCreativeTimerObjective.generated.h"

class AFortGameState;
class AFortVolume;

UCLASS(Blueprintable)
class AFortCreativeTimerObjective : public ABuildingProp, public IFortTimeWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerObjectiveHUDData HUDData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolume* Volume;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainInteractionWhileLookingAround;
    
    AFortCreativeTimerObjective();
protected:
    UFUNCTION(BlueprintCallable)
    void SetHUDData(FTimerObjectiveHUDData NewHUDData);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastUpdateToHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BP_GetLabelText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BP_GetDisplayTextStyle() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTimerObjectiveToVolume();
    
    
    // Fix for true pure virtual functions not being implemented
};

