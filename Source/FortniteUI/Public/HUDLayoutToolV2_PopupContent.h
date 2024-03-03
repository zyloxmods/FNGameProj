#pragma once
#include "CoreMinimal.h"
#include "EHUDLayoutToolPopupType.h"
#include "HUDLayoutToolV2_PopupContent.generated.h"

USTRUCT(BlueprintType)
struct FHUDLayoutToolV2_PopupContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDLayoutToolPopupType PopupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonConfirmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonCancelText;
    
    FORTNITEUI_API FHUDLayoutToolV2_PopupContent();
};

