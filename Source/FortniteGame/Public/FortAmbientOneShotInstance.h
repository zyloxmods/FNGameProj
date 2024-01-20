#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "FortPOIAmbientAudioOneShot.h"
#include "FortAmbientOneShotInstance.generated.h"

class UFortAmbientAudioController;

UCLASS(Blueprintable)
class UFortAmbientOneShotInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAmbientAudioController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPOIAmbientAudioOneShot Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RetriggerTimer;
    
    UFortAmbientOneShotInstance();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void OnTrigger();
    
};

