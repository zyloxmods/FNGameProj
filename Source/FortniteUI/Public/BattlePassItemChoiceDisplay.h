#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassItemChoiceDisplay.generated.h"

class UAthenaCosmeticItemDefinition;
class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassItemChoiceDisplay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SelectAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SelectEgo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SelectBase;
    
public:
    UBattlePassItemChoiceDisplay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCosmeticItemChanged(const UAthenaCosmeticItemDefinition* CosmeticItem);
    
};

