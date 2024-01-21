#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "EInputPriority.h"
#include "FortActivatablePanel.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortActivatablePanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPushedOnToContentPanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlreadyOnContentPanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputPriority InputPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosableByPlayerInput;
    
    UFortActivatablePanel();
    UFUNCTION(BlueprintCallable)
    void RestoreScrollWidget(UWidget* FallbackWidget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCenterWidget(UWidget* FallbackWidget);
    
};

