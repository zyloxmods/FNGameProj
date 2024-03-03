#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortEulaWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortRichTextBlockLegacy;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEulaWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRichTextBlockLegacy* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_License;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Decline;
    
public:
    UFortEulaWidget();
};

