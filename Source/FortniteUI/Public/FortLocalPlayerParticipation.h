#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLocalPlayerParticipation.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalPlayerParticipation : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortLocalPlayerParticipation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerParticipationChanged(bool bIsParticipating);
    
};

