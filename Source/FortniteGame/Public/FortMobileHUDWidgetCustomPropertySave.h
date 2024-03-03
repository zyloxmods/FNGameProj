#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDWidgetCustomPropertySave.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDWidgetCustomPropertySave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyValue;
    
    FORTNITEGAME_API FFortMobileHUDWidgetCustomPropertySave();
};

