#pragma once
#include "CoreMinimal.h"
#include "FortHUDTagPromptData.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "OnOpenOrClosedDelegate.h"
#include "FortHUDTagPromptContainerWidget.generated.h"

class UFortHUDTagPromptTagMapping;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UFortHUDTagPromptContainerWidget : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHUDTagPromptTagMapping* TagMappingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenOrClosed OnOpenedOrClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TagToTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHUDTagPromptData PromptDataToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UFortHUDTagPromptContainerWidget();
    UFUNCTION(BlueprintCallable)
    void RequestPromptDataActivation(const FFortHUDTagPromptData& PromptData, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(const FFortHUDTagPromptData& PrompData);
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetBaseOpenedOrClosed(bool bNewlyOpened);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

