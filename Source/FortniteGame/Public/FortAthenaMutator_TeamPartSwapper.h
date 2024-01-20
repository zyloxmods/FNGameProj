#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "PartSwapData.h"
#include "FortAthenaMutator_TeamPartSwapper.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_TeamPartSwapper : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartSwapData> SwapData;
    
public:
    AFortAthenaMutator_TeamPartSwapper();
};

