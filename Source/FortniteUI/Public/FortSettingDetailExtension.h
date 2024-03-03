#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSettingDetailExtension.generated.h"

class UFortSetting;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingDetailExtension : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSetting* Setting;
    
public:
    UFortSettingDetailExtension();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingValueChanged(UFortSetting* InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAssigned(UFortSetting* InSetting);
    
};

