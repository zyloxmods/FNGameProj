#pragma once
#include "CoreMinimal.h"
#include "EFortCraftFailCause.h"
#include "FortHUDElementWidget.h"
#include "FortCraftingBarWidget.generated.h"

class UCommonTextBlock;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UFortCraftingBarWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CraftingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* CraftingProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletedRemainVisibleTime;
    
public:
    UFortCraftingBarWidget();
    UFUNCTION(BlueprintCallable)
    void SetHideCraftingBar(bool bInHideCraftBar);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompletedSetHidden();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStoppedCrafting(bool bSuccess, EFortCraftFailCause CraftFailureCause);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStartedCrafting();
    
};

