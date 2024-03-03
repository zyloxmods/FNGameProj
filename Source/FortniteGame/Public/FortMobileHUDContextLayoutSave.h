#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDWidgetSchemaSave.h"
#include "FortMobileHUDContextLayoutSave.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDContextLayoutSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextLayoutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDWidgetSchemaSave> HUDWidgetSchemas;
    
    FORTNITEGAME_API FFortMobileHUDContextLayoutSave();
};

