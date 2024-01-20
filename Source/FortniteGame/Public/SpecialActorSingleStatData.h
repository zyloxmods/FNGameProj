#pragma once
#include "CoreMinimal.h"
#include "ESpecialActorStatType.h"
#include "SpecialActorSingleStatData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialActorSingleStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialActorStatType StatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatLogicValue;
    
    FORTNITEGAME_API FSpecialActorSingleStatData();
};

