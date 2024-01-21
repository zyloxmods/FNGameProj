#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_RespawnTime.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_RespawnTime : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
public:
    AFortAthenaMutator_RespawnTime();
};

