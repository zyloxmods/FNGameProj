#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "PostGamePlacementOverlay.generated.h"

class AFortGameplayMutator;

UCLASS(Blueprintable, EditInlineNew)
class UPostGamePlacementOverlay : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
public:
    UPostGamePlacementOverlay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWinningPlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTiePlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLosingPlacement();
    
    UFUNCTION(BlueprintCallable)
    void LocalPlacementChanged();
    
};

