#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "AthenaChallengeSetBaseDetails.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetBaseDetails : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
    UAthenaChallengeSetBaseDetails();
};

