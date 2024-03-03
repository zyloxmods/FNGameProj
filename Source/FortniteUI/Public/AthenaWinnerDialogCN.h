#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaWinnerDialogCN.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaWinnerDialogCN : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaWinnerDialogCN();
    UFUNCTION(BlueprintCallable)
    void OnWinnerLeavingGame();
    
    UFUNCTION(BlueprintCallable)
    void OnWinConditionWasMet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenMessage();
    
};

