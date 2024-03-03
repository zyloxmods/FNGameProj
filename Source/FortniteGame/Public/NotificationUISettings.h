#pragma once
#include "CoreMinimal.h"
#include "NotificationUISettings.generated.h"

USTRUCT(BlueprintType)
struct FNotificationUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideVisibilitySettings;
    
    FORTNITEGAME_API FNotificationUISettings();
};

