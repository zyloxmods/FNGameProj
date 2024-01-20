#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTooltipMapEntry.h"
#include "FortTooltipMap.generated.h"

UCLASS(Blueprintable)
class UFortTooltipMap : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTooltipMapEntry> Mapping;
    
public:
    UFortTooltipMap();
};

