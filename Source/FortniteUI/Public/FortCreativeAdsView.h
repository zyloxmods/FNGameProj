#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreativeAdData.h"
#include "FortCreativeAdsView.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeAdsView : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeAdData> CreativeAdList;
    
public:
    UFortCreativeAdsView();
};

