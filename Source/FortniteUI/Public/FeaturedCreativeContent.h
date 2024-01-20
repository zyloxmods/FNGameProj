#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreativeAdData.h"
#include "FeaturedCreativeContent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFeaturedCreativeContent : public UUserWidget {
    GENERATED_BODY()
public:
    UFeaturedCreativeContent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupAds(const TArray<FString>& MediaURLs, const TArray<FCreativeAdData>& AdMetadata);
    
};

