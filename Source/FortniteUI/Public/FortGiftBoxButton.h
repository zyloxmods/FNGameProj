#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortGiftBoxButton.generated.h"

class UCommonLazyImage;
class UFortGiftBoxItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftBoxButton : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItemDefinition* GiftBoxDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Gift;
    
public:
    UFortGiftBoxButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGiftSelectedAnimation(bool bIsSelected);
    
    
    // Fix for true pure virtual functions not being implemented
};

