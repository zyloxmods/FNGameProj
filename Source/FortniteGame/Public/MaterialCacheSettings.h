#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Engine/DataTable.h"
#include "MaterialCacheSettings.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCacheSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bDisable;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt PlatformMaxCount;
    
    FORTNITEGAME_API FMaterialCacheSettings();
};

