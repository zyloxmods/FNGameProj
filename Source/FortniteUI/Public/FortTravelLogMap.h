#pragma once
#include "CoreMinimal.h"
#include "AthenaTravelRecord.h"
#include "Blueprint/UserWidget.h"
#include "FortTravelLogMap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortTravelLogMap : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceToCoalescePositions;
    
    UFortTravelLogMap();
    UFUNCTION(BlueprintCallable)
    void InitializeFromTravelRecord(const FAthenaTravelRecord& Record);
    
};

