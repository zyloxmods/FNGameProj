#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RespawnAndSpectateSelectButtonWidgetBase.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UFortLazyImage;
class UImage;
class URespawnAndSpectateSelectButtonWidgetBase;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class URespawnAndSpectateSelectButtonWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRespawnAndSpectateSelectButtonSelected, URespawnAndSpectateSelectButtonWidgetBase*, Widget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRespawnAndSpectateSelectButtonHovered, URespawnAndSpectateSelectButtonWidgetBase*, Widget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnAndSpectateSelectButtonSelected OnButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnAndSpectateSelectButtonHovered OnButtonHovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* TargetImageSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DefaultButtonImageSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* TargetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* TargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DefaultButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TargetNameTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectable;
    
public:
    URespawnAndSpectateSelectButtonWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectionVisualsVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNavigationFocusOnButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoverHighlightVisibility(bool bNewVisibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonVisibility_BP(bool bNewVisbility);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSelectionMade();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionHovered();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsEnabledUpdated_BP(bool bNewIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsSelectableUpdated_BP();
    
};

