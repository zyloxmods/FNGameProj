#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CreativeAdData.h"
#include "FortCreativeAdTile.generated.h"

class UEpicCMSImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeAdTile : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_CreativeAd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeAdData CMSAdEntry;
    
public:
    UFortCreativeAdTile();
    UFUNCTION(BlueprintCallable)
    void PopulateAdTile(const FCreativeAdData& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCMSDataUpdated();
    
};

