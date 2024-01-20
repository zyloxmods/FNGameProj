#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PanelWidget.h"
#include "FortActorCanvas.generated.h"

class UFortActorCanvasSlot;
class UFortActorIndicatorWidget;

UCLASS(Blueprintable)
class UFortActorCanvas : public UPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultHUDElementTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawElementsInOrder;
    
public:
    UFortActorCanvas();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags);
    
public:
    UFUNCTION(BlueprintCallable)
    UFortActorCanvasSlot* AddActorIndicator(UFortActorIndicatorWidget* Indicator);
    
};

