#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortMOTDWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMOTDWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
public:
    UFortMOTDWidget();
};

