#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FriendCodeListBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFriendCodeListBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFriendCodeListBase();
};

