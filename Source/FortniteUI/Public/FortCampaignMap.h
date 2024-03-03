#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortSwipeDetector.h"
#include "FortCampaignMap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCampaignMap : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSwipeDetector SwipeDetector;
    
    UFortCampaignMap();
private:
    UFUNCTION(BlueprintCallable)
    void OnSwipeRight();
    
    UFUNCTION(BlueprintCallable)
    void OnSwipeLeft();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPreviousPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowNextPage();
    
};

