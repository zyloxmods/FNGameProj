#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AthenaVariantFilterSet.h"
#include "AthenaVariantPickerConfig.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UAthenaVariantPickerConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAthenaVariantFilterSet> FilterSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture2D>> NamedSpecialIcons;
    
public:
    UAthenaVariantPickerConfig();
};

