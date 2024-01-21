#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemManagementMode.h"
#include "FortItemManagementModeDetailsPanel.generated.h"

class UCommonWidgetSwitcher;
class UFortItemDetailsActivatablePanel;
class UFortItemManagementScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* ModeWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsActivatablePanel* DetailsModeItemDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsActivatablePanel* ComparisonModeItemDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsActivatablePanel* MulchModeItemDetailsPanel;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
public:
    UFortItemManagementModeDetailsPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHostSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemManagementModeSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemManagementMode GetItemManagementMode() const;
    
};

