#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Overlay.h"
#include "CommonVisibilitySwitcher.generated.h"

class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonVisibilitySwitcher : public UOverlay {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWidgetChangedLegacy, UWidget*, ActiveWidget, int32, ActiveWidgetIndex);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChangedLegacy OnActiveWidgetChangedLegacyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ShownVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWidgetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFirstSlotOnAdding;
    
public:
    UCommonVisibilitySwitcher();
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateVisibleSlot();
    
    UFUNCTION(BlueprintCallable)
    void ActivateVisibleSlot();
    
};

