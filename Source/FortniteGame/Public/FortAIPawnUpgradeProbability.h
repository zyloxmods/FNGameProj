#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "FortAIPawnUpgradeProbability.generated.h"

USTRUCT(BlueprintType)
struct FFortAIPawnUpgradeProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle UpgradeProbability;
    
    FORTNITEGAME_API FFortAIPawnUpgradeProbability();
};

