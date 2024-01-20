#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemReceivedHeaderBase.generated.h"

class UFortGiftBoxItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemReceivedHeaderBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FromUsername;
    
public:
    UItemReceivedHeaderBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitFromGiftBoxItem();
    
};

