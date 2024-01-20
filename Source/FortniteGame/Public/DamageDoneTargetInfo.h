#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageDoneSourceInfo.h"
#include "DamageDoneTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageDoneTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackedTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageDoneSourceInfo> TrackedSourceData;
    
    FORTNITEGAME_API FDamageDoneTargetInfo();
};

