#pragma once
#include "CoreMinimal.h"
#include "SocialActionMenu.h"
#include "SocialInteractionMenu.generated.h"

class UCommonButton;
class UCommonWidgetSwitcher;
class UDynamicEntryBox;
class USpacer;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialInteractionMenu : public USocialActionMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PositiveInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_NegativeInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_InteractionSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Confirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ConfirmationLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Decline;
    
public:
    USocialInteractionMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleConfirmation(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstEntryToCenter() const;
    
};

