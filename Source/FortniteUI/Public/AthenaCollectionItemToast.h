#pragma once
#include "CoreMinimal.h"
#include "EFortCollectedState.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaCollectionItemToast.generated.h"

class UButton;
class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionItemToast : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToShowToast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenCollectionScreenInputHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_MobileClickCatcher;
    
public:
    UAthenaCollectionItemToast();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMobileClick();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPCallableIsDesignTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToastUpdated(EFortCollectedState CollectedState, int32 NumCollected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToastReset();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

