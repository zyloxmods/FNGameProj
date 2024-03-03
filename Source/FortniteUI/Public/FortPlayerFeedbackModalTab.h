#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortPlayerFeedbackModalTab.generated.h"

class UCommonTextBlock;
class UFortPlayerFeedbackModalSubscreenBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalTab : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerFeedbackModalSubscreenBase* AssociatedSubscreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TabLabel;
    
public:
    UFortPlayerFeedbackModalTab();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedIsCurrentTab(bool bIsCurrent);
    
};

