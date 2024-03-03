#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EmergencyNoticeBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEmergencyNoticeBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UEmergencyNoticeBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNotice(const FText& Title, const FText& Body);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideNotice();
    
};

