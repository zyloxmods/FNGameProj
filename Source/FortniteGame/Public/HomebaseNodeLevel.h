#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "HomebaseSquadSlotId.h"
#include "HomebaseNodeLevel.generated.h"

class UFortAbilityKit;

USTRUCT(BlueprintType)
struct FHomebaseNodeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCommanderLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GameplayEffectRowNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> AbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHomebaseSquadSlotId> UnlockedSquadSlots;
    
    FORTNITEGAME_API FHomebaseNodeLevel();
};

