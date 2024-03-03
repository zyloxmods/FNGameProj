#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortColorPalette.h"
#include "GameplayTagContainer.h"
#include "FortCosmeticItemCard.generated.h"

class UCommonLoadGuard;
class UFortItem;
class UImage;
class UMaterialInterface;
class USizeBox;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCosmeticItemCard : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemIconEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDetailIconEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuantityEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthToHeightRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardWidthToHeightRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardCardWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultItemCardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWidgetWidthForLargeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWidgetWidthForLargeAssetMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnhancementTagsToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_NewItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_NewItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* ItemToRepresent;
    
public:
    UFortCosmeticItemCard();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* InItemToRepresent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSeriesOrRarityColors(const FFortColorPalette& ColorPalette);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemCardMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemCardIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateEnhanced(bool bEnhanced);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhover();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizeChanged(float InCardWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemIconVisibilityChanged(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHover();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCardTypeChanged();
    
};

