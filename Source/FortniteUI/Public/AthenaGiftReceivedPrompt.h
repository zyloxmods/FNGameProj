#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaGiftReceivedPrompt.generated.h"

class UCommonButton;
class UCommonLazyImage;
class UFortGiftBoxItem;
class UFortItemPresentationScreen;
class UFortItemReceivedHeaderBase;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGiftReceivedPrompt : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemPresentationScreen> ItemPresentationScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> GiftMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemReceivedHeaderBase* Widget_HeaderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_GiftBox;
    
public:
    UAthenaGiftReceivedPrompt();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGiftInfoPopulated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleMessageTextFiltered(bool bSuccess, const FString& SanitizedMessage);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftingComplete();
    
    UFUNCTION(BlueprintCallable)
    void DismissPrompt();
    
};

