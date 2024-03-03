#pragma once
#include "CoreMinimal.h"
#include "EHUDLayoutToolTextInputPopupType.h"
#include "HUDLayoutToolV2_TextInputPopupContent.generated.h"

USTRUCT(BlueprintType)
struct FHUDLayoutToolV2_TextInputPopupContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDLayoutToolTextInputPopupType PopupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonConfirmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonCancelText;
    
    FORTNITEUI_API FHUDLayoutToolV2_TextInputPopupContent();
};

