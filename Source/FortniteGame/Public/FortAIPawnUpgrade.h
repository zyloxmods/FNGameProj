#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAIPawnUpgradeData.h"
#include "FortAIPawnUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FFortAIPawnUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIPawnUpgradeData> PawnUpgradeDataPerPlayerCount;
    
    FORTNITEGAME_API FFortAIPawnUpgrade();
};

