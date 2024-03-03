#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_LinkAcrossPanelTitle.generated.h"

class UCommonTextBlock;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_LinkAcrossPanelTitle : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdvancedActionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Action;
    
public:
    UHUDLayoutToolV2_LinkAcrossPanelTitle();
};

