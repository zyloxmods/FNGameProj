#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "PostGameSpectatedPlayerName.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UPostGameSpectatedPlayerName : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPostGameSpectatedPlayerName();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget(const FString& PlayerName, const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
};

