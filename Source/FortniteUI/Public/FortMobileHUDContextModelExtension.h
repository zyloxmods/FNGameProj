#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDContextModelExtension.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEUI_API FFortMobileHUDContextModelExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextLayoutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UseableHUDWidgetTags;
    
    FFortMobileHUDContextModelExtension();
};

