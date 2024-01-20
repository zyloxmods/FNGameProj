#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FriendCodeEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFriendCodeEntryBase : public UCommonButton {
    GENERATED_BODY()
public:
    UFriendCodeEntryBase();
};

