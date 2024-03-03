#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "EBarrierFoodTeam.h"
#include "GameplayMutatorObjectDataArray.h"
#include "BarrierObjectState.h"
#include "FortHUDElementWidget.h"
#include "BarrierWidgetBase.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UBarrierWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierObjectState FriendlyTeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierObjectState EnemyTeamState;
    
public:
    UBarrierWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(bool bFriendlyTeam, float HealthPercent, EBarrierFoodTeam FoodTeam, bool bFlashBar);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorObjectUpdated(const FGameplayMutatorObjectDataArray& MutatorArray);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

