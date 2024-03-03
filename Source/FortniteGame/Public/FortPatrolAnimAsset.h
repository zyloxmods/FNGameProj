#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_PatrolAnimSet.h"
#include "FortPatrolAnimAsset.generated.h"

UCLASS(Blueprintable)
class UFortPatrolAnimAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PatrolAnimSet AnimSet;
    
    UFortPatrolAnimAsset();
};

