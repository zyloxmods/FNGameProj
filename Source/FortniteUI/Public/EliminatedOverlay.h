#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EliminatedOverlay.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEliminatedOverlay : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UEliminatedOverlay();
    UFUNCTION(BlueprintCallable)
    void GetDisplayNameForKillerPlayerState(const AFortPlayerStateAthena* InPlayerState, FString& OutDisplayName);
    
};

