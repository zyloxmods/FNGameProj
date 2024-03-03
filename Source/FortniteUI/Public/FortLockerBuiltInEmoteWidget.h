#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortLockerBuiltInEmoteWidget.generated.h"

class UFortCosmeticItemCard;
class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortLockerBuiltInEmoteWidget : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* Card_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* EmoteDefinition;
    
public:
    UFortLockerBuiltInEmoteWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLocked(bool bLocked);
    
};

