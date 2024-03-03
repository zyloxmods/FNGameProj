#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIDirectorEventData.h"
#include "EFortAIDirectorFactor.h"
#include "FortAIDirectorEvent.h"
#include "FortAIDirectorFactorData.h"
#include "FortAIDirectorDataManager.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class AFortAIDirectorDataManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDirectorEventData> EventsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIDirectorFactorData> FactorsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EFortAIDirectorFactor> FactorsBeingTracked;
    
public:
    AFortAIDirectorDataManager();
    UFUNCTION(BlueprintCallable)
    void TriggerEvent(const FFortAIDirectorEvent& TriggeredEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor) const;
    
};

