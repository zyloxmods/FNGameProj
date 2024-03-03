#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileSchemaModificationContainer.h"
#include "FortMobileHUDPresetHotfix.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDPresetHotfix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDPresetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileSchemaModificationContainer Modifications;
    
    FORTNITEGAME_API FFortMobileHUDPresetHotfix();
};

