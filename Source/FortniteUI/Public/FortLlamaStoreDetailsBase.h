#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLlamaStoreDetailsBase.generated.h"

class UCommonTileView;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLlamaStoreDetailsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* ItemTileView;
    
public:
    UFortLlamaStoreDetailsBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartUpgradingToSilver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartUpgradingToGold();
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferInfoChanged(int32 CurrentOfferRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNotInCollectionBookCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChoiceItemCount() const;
    
};

