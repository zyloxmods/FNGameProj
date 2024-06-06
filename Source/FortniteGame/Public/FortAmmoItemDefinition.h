#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "FortCreativeTagsBearer.h"
#include "FortCreativeTagsHelper.h"
#include "FortMultiSizeBrush.h"
#include "FortWorldItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortAmmoItemDefinition.generated.h"

class UFortWorldItem;
class UPlaylistUserOptions;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAmmoItemDefinition : public UFortWorldItemDefinition, public IFortCreativeTagsBearer {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Ammo", GetFName());
    }
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ClipIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bIsConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggersFeedbackLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RegenCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush AmmoIconBrush;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HUDAmmoSmallPreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWorldItem> WorldItemClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* ItemOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeTagsHelper CreativeTagsHelper;
    
public:
    UFortAmmoItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetHUDAmmoSmallPreviewImage() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

