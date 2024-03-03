#pragma once
#include "CoreMinimal.h"
#include "EFortSafeZoneState.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_Storm.generated.h"

class AFortGameModeAthena;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StormDestinationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CacheAthenaGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedBTComp;
    
public:
    UFortAthenaAIBotEvaluator_Storm();
    UFUNCTION(BlueprintCallable)
    void OnSafezoneStateChanged(const EFortSafeZoneState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnSafezonePhaseChanged();
    
};

