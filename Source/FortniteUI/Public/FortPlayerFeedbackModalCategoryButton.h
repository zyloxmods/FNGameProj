#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortPlayerFeedbackModalCategoryButton.generated.h"

class UCommonTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalCategoryButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DropdownWidget;
    
public:
    UFortPlayerFeedbackModalCategoryButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropdownMenuStatusUpdated(bool bIsExpanded);
    
};

