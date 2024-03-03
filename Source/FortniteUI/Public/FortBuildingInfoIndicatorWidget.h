#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingInteraction.h"
#include "FortActorIndicatorWidget.h"
#include "FortBuildingInfoIndicatorWidget.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortBuildingInfoIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
    UFortBuildingInfoIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetKeyBindWidgetBoundAction(UFortKeybindWidget* FortKeybindWidget, const FName ActionName, const EFortBuildingInteraction InteractionType);
    
};

