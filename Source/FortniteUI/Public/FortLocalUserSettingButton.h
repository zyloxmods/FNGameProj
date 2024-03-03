#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortLocalUserSettingButton.generated.h"

class UCommonRichTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalUserSettingButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_CurrentSelectedArrow;
    
public:
    UFortLocalUserSettingButton();
};

