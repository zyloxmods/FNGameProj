#pragma once
#include "CoreMinimal.h"
#include "NavDataSetVariantSettings.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FNavDataSetVariantSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OceanFloodLevel;
    
    FORTNITEGAME_API FNavDataSetVariantSettings();
};

