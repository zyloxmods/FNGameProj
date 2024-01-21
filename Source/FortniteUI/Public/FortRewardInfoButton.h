#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "CommonPoolableWidgetInterface.h"
#include "FortItemInstanceQuantityPair.h"
#include "EFortItemCardSize.h"
#include "FortRewardInfoButton.generated.h"

class UFortItem;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRewardInfoButton : public UCommonButton, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ItemCardPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAsRewardCard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* ItemInstance;
    
public:
    UFortRewardInfoButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowDescriptionBP(bool bInShowDescription);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShowDescription(bool bInShowDescription);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInstanceQuantityPair(const FFortItemInstanceQuantityPair& ItemQuantityPair);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemOrQuantitySetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantity() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInstance() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

