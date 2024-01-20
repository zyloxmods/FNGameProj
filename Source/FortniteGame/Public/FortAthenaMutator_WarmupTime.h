#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_WarmupTime.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_WarmupTime : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupTime;
    
public:
    AFortAthenaMutator_WarmupTime();
};

