#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortItemDroppedParams.generated.h"

class AFortPlayerController;
class UFortItemDroppedParams;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class UFortItemDroppedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* DroppedItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* DroppedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountDropped;
    
    UFortItemDroppedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(const UFortWorldItemDefinition* _DroppedItemDefinition, AFortPlayerController* _DroppedBy, int32 _AmountCollected, UFortItemDroppedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(UFortWorldItemDefinition*& _DroppedItemDefinition, AFortPlayerController*& _DroppedBy, int32& _AmountCollected);
    
};

