#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "MassiveGadgetEquippedWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMassiveGadgetEquippedWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UMassiveGadgetEquippedWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMassiveTagChanged(const FGameplayTag Tag, int32 Count);
    
};

