#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EAthenaGamePhaseStep.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_StormForming.generated.h"

class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class UFortContextualTutorial_StormForming : public UFortContextualTutorial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviousMapOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateMapHandle;
    
public:
    UFortContextualTutorial_StormForming();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};

