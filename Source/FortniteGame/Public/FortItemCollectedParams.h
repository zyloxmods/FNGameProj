#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortItemCollectedParams.generated.h"

class AFortPlayerController;
class UFortItemCollectedParams;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class UFortItemCollectedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* CollectedItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* CollectedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountCollected;
    
    UFortItemCollectedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(const UFortWorldItemDefinition* _CollectedItemDefinition, AFortPlayerController* _CollectedBy, int32 _AmountCollected, UFortItemCollectedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(UFortWorldItemDefinition*& _CollectedItemDefinition, AFortPlayerController*& _CollectedBy, int32& _AmountCollected);
    
};

