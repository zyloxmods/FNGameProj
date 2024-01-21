#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/EngineTypes.h"
#include "FortRewardInfo.h"
#include "EFortItemCardSize.h"
#include "FortCollectionBookRewardCardWidget.generated.h"

class UFortItem;
class UFortMultiSizeItemCard;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayedItemChangedEvent, UFortItem*, DisplayedItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayedItemChangedEvent OnDisplayedItemChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MultiItemRewardOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ChoiceRewardOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CheckmarkImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateCardInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAsRewardCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortRewardInfo RepresentedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> DummyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateCardTimer;
    
public:
    UFortCollectionBookRewardCardWidget();
    UFUNCTION(BlueprintCallable)
    void SetRewards(const FFortRewardInfo& Rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRewards() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRewards();
    
};

