#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortReceivedItemLootInfo.h"
#include "FortItemNotification.generated.h"

class UCommonButton;
class UFortItemInfoPresentationWidget;
class UFortItemPresentationEntry;
class UFortItemReceivedHeaderBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemNotification : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortReceivedItemLootInfo> ItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyTextWrapWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemReceivedHeaderBase* ItemPresentationGenericRewardHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemPresentationEntry* ItemPresentationEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemInfoPresentationWidget* ItemInfoPresentationWidget;
    
public:
    UFortItemNotification();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateScreenInformation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetButtonText(bool bCanCloseWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextItemDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseScreen();
    
    UFUNCTION(BlueprintCallable)
    void CloseScreen();
    
};

