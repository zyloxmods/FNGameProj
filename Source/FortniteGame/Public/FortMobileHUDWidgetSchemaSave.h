#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDWidgetLayoutSave.h"
#include "FortMobileHUDWidgetSchemaSave.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDWidgetSchemaSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDWidgetClassTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BehaviorClassTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDWidgetLayoutSave HUDWidgetLayout;
    
    FORTNITEGAME_API FFortMobileHUDWidgetSchemaSave();
};

