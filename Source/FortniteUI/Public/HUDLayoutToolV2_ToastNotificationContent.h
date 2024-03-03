#pragma once
#include "CoreMinimal.h"
#include "EHUDLayoutToolToasterType.h"
#include "HUDLayoutToolV2_ToastNotificationContent.generated.h"

USTRUCT(BlueprintType)
struct FHUDLayoutToolV2_ToastNotificationContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDLayoutToolToasterType ToasterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    FORTNITEUI_API FHUDLayoutToolV2_ToastNotificationContent();
};

