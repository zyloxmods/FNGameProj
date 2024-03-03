#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeOptionLocalizableString.h"
#include "RuntimeOptionScheduledNotification.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionScheduledNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FireDateTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LocalTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeOptionLocalizableString Title;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeOptionLocalizableString Body;
    
    FORTNITEGAME_API FRuntimeOptionScheduledNotification();
};

