#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotRunTimeCustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaAIBotRunTimeCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PredefinedCosmeticSetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasCustomSquadId: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CustomSquadId;
    
    FORTNITEGAME_API FFortAthenaAIBotRunTimeCustomizationData();
};

