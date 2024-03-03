#pragma once
#include "CoreMinimal.h"
#include "FortPublicAccountInfo.h"
#include "Styling/SlateBrush.h"
#include "FortStoreFrontTileWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortStoreFrontOfferWidgetBase.generated.h"

class UCommonLoadGuard;
class UFortItemThumbnailRenderer;
class UFortMtxStoreRootBase;
class UFortStoreFrontOfferDetailsWidgetBase;
class UFortStoreFrontOfferInfo;
class UMaterialInterface;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreFrontOfferWidgetBase : public UFortStoreFrontTileWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> GroupedOffers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* MainImageLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemThumbnailRenderer> ThumbnailRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemThumbnailRenderer* ThumbnailRenderer;
    
public:
    UFortStoreFrontOfferWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCarousel(float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupThumbnailRenderer(UFortItemThumbnailRenderer* InThumbnailRenderer);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupOffer(UFortStoreFrontOfferInfo* InOfferData);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreRoot(UFortMtxStoreRootBase* InStoreRoot);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexInSection(int32 InIndexInSection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendShopInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendSeasonPassInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendRealMoneyStoreInteractionAnalytic(const FString& Interaction) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllOffers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewNextCarouselOffer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoreSelectionOfferSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferTileBrushLoaded(const FSlateBrush& OfferBrush);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferAdded();
    
    UFUNCTION(BlueprintCallable)
    void OnDetailsOpened(UFortStoreFrontOfferDetailsWidgetBase* DetailsWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleCarouselOfferChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMtxStoreRootBase* GetStoreRoot() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetFirstOfferSeriesBackgroundTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> GetFirstOfferSeriesBackgroundMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOffer(UFortStoreFrontOfferInfo* InOfferData);
    
};

