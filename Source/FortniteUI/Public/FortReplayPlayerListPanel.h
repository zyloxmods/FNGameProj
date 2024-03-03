#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortReplayPlayerListPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayPlayerListPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortReplayPlayerListPanel();
};

