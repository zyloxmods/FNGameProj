#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ArsenicCoreWidgetBase.h"
#include "ArsenicCoreHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARSENICCOREUI_API UArsenicCoreHUD : public UArsenicCoreWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AthenaHUDElementsToHideForGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AthenaHUDElementsToHideForGhostMessagingAnimation;
    
public:
    UArsenicCoreHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSpectatingGhost_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePlayerHasBecomeAGhost_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNoSurvivorsFoundInScream_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGhostVisibilityChange_BP(const bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void GhostMessagingFinished();
    
};

