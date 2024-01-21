#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "LTMWidgetBase.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class ULTMWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    ULTMWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetViewingTeam() const;
    
};

