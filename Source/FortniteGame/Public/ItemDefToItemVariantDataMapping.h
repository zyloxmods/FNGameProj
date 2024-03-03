#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ItemDefToItemVariantDataMapping.generated.h"

class UFortItemVariantData;

USTRUCT(BlueprintType)
struct FItemDefToItemVariantDataMapping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemDefinitionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemVariantData* ItemVariantData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemVariantTag;
    
public:
    FORTNITEGAME_API FItemDefToItemVariantDataMapping();
};

