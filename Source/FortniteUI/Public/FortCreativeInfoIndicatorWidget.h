#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingInteraction.h"
#include "FortActorIndicatorWidget.h"
#include "FortCreativeInfoIndicatorWidget.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeInfoIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
    UFortCreativeInfoIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetKeyBindWidgetBoundAction(UFortKeybindWidget* FortKeybindWidget, const FName ActionName, const EFortBuildingInteraction InteractionType);
    
};

