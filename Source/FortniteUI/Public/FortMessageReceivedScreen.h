#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortMessageReceivedScreen.generated.h"

class UCommonLazyImage;
class UFortGiftBoxItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMessageReceivedScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinalGiftingComplete);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalGiftingComplete OnMessageClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* GiftBoxImage;
    
public:
    UFortMessageReceivedScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGiftBoxSet();
    
    UFUNCTION(BlueprintCallable)
    FText GetHeaderAssetString(const FString& Param);
    
    UFUNCTION(BlueprintCallable)
    FText GetBodyAssetString(const FString& Param);
    
};

