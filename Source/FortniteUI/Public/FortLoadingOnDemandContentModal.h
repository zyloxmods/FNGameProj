#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortLoadingOnDemandContentModal.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoadingOnDemandContentModal : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
public:
    UFortLoadingOnDemandContentModal();
protected:
    UFUNCTION(BlueprintCallable)
    void StartProgressUpdateTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCancelButtonText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedProgress(float Percent);
    
};

