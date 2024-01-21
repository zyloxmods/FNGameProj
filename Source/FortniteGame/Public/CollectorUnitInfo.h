#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayEffectDeliveryInfo.h"
#include "FortItemEntry.h"
#include "CollectorUnitInfo.generated.h"

class UFortWorldItemDefinition;
class UTexture;

USTRUCT(BlueprintType)
struct FCollectorUnitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* InputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* OverrideInputItemTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDefinedOutputItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* OutputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> OutputItemEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideOutputItemLootTierGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectDeliveryInfo OutputGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* OverrideOutputItemTexture;
    
    FORTNITEGAME_API FCollectorUnitInfo();
};

