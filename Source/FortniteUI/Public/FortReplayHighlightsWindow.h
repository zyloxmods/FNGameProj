#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortReplayHighlightsWindow.generated.h"

class AFortReplaySpectator;
class UFortReplayHighlightItemBase;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayHighlightsWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortReplayHighlightItemBase> HighlightItemClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_ItemContainer;
    
public:
    UFortReplayHighlightsWindow();
private:
    UFUNCTION(BlueprintCallable)
    void HandleReplayHighlightsAvailable(AFortReplaySpectator* Sender, bool bIsAvailable);
    
    UFUNCTION(BlueprintCallable)
    void HandleHighlightItemPlayEvent(UFortReplayHighlightItemBase* Sender);
    
};

