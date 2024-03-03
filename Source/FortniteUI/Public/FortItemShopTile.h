#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "FortColorPalette.h"
#include "EItemShopCurrency.h"
#include "EItemShopTileSize.h"
#include "EViolatorIntensity.h"
#include "Templates/SubclassOf.h"
#include "FortItemShopTile.generated.h"

class AFortItemCaptureActor;
class UCommonLazyImage;
class UCommonLoadGuard;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortItemShopTileImage;
class UFortItemThumbnailRenderer;
class UFortMtxOfferData;
class UFortReactiveShopTileText;
class UFortTagRotator;
class UImage;
class UMaterialInterface;
class UTexture2D;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemShopTile : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemThumbnailRenderer* ThumbnailRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Presentations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemThumbnailRenderer> ThumbnailRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortItemCaptureActor> ItemCaptureActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CaptureActorStartingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureActorZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenPresentationSwaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortReactiveShopTileText* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PreviousPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_SalePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_RarityStripe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_OwningStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TileState_Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TileState_NotOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_Violator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTagRotator* TagRotator_ItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemShopTileImage* Image_Offer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemShopTileImage* Image_NextOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_AnimatedWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialBacking_Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialBacking_NoRarity;
    
public:
    UFortItemShopTile();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowNextPresentation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateViolator(EViolatorIntensity ViolatorIntensity, const FText& ViolatorText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTileSize(EItemShopTileSize TileSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSeriesOrRarityColors(const FFortColorPalette& ColorPalette);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemLivePreview(EItemShopTileSize TileSize, UFortItemThumbnailRenderer* ThumbnailRendererPtr, AFortItemCaptureActor* CaptureActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrePresentationSwap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeekStateChanged(bool bIsInPeekState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayAssetImageLoaded(UTexture2D* OfferImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultBackgroundRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrencySet(EItemShopCurrency Currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bIsActiveState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMtxOfferData* GetLegacyDisplayAsset() const;
    
};

