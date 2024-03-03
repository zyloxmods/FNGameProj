#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDefToItemVariantDataMapping.h"
#include "FortItemDefToItemVariantDataMapping.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemDefToItemVariantDataMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDefToItemVariantDataMapping> ItemDefToItemVariantDataMappings;
    
public:
    UFortItemDefToItemVariantDataMapping();
};

