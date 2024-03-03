#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "PerkAvailableAlertBaseWidget.generated.h"

class AFortAthenaMutator_PerkSystemMutator;

UCLASS(Blueprintable, EditInlineNew)
class UPerkAvailableAlertBaseWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_PerkSystemMutator> CachedMutator;
    
public:
    UPerkAvailableAlertBaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkAvailibilityChanged(int32 TagCount);
    
};

