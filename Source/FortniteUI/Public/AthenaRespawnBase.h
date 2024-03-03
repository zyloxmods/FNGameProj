#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "ERespawnUIState.h"
#include "FortHUDElementWidget.h"
#include "AthenaRespawnBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaRespawnBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERespawnUIState RespawnState;
    
public:
    UAthenaRespawnBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRespawnState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLives(int32 Lives);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

