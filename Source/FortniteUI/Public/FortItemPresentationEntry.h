#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortItemPresentationEntry.generated.h"

class UCommonTextBlock;
class UFortCosmeticItemCard;
class UFortItem;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemPresentationEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* FortItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> RewardTexture;
    
public:
    UFortItemPresentationEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsPaidBattlePassRewardSet(bool bIsPaidBattlePassReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialIconAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

