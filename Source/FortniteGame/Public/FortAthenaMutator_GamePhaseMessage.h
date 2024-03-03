#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GamePhaseMessageData.h"
#include "FortAthenaMutator_GamePhaseMessage.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GamePhaseMessage : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaGamePhase, FFortAthenaMutator_GamePhaseMessageData> GamePhaseMessageData;
    
public:
    AFortAthenaMutator_GamePhaseMessage();
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

