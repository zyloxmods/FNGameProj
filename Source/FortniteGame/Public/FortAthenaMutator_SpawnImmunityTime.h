#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_SpawnImmunityTime.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawnImmunityTime : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnImmunityTime;
    
public:
    AFortAthenaMutator_SpawnImmunityTime();
};

