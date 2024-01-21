#pragma once
#include "CoreMinimal.h"
#include "EFortSafeZoneState.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Storm.generated.h"

class AFortGameModeAthena;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SafezoneStateName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SafezonePhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* AthenaGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedBTComp;
    
public:
    UFortAthenaAIBotEvaluator_Storm();
    UFUNCTION(BlueprintCallable)
    void OnSafezoneStateChanged(const EFortSafeZoneState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnSafezonePhaseChanged();
    
};

