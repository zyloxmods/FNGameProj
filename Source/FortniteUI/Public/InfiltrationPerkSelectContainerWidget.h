#pragma once
#include "CoreMinimal.h"
#include "PerkMutatorData.h"
#include "LTMWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "InfiltrationPerkSelectContainerWidget.generated.h"

class UCommonActivatablePanel;
class UInfiltrationPerkSelectionPanel;

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationPerkSelectContainerWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInfiltrationPerkSelectionPanel> PerkPanelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkMutatorData MutatorData;
    
public:
    UInfiltrationPerkSelectContainerWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PerkSelectionEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPanelDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
    UFUNCTION(BlueprintCallable)
    void OnPanelActivated(UCommonActivatablePanel* ActivatedPanel);
    
};

