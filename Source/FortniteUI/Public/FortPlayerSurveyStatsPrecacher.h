#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAthenaGamePhase.h"
#include "FortPlayerSurveyStatsPrecacher.generated.h"

class AFortGameStateAthena;
class UGameInstance;

UCLASS(Blueprintable)
class UFortPlayerSurveyStatsPrecacher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* GameStateAthena;
    
public:
    UFortPlayerSurveyStatsPrecacher();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

