#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NavWidgetSettings.h"
#include "NavWidgetSettingContainer.generated.h"

USTRUCT(BlueprintType)
struct FNavWidgetSettingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavWidgetSettings WidgetSettings;
    
    FORTNITEGAME_API FNavWidgetSettingContainer();
};

