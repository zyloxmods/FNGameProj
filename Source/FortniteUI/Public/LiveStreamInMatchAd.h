#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LiveStreamInMatchAd.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULiveStreamInMatchAd : public UUserWidget {
    GENERATED_BODY()
public:
    ULiveStreamInMatchAd();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAdvertisement();
    
};

