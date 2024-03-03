#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortTheaterSelect.generated.h"

class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTheaterSelect : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayMain;
    
    UFortTheaterSelect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTheaterRecommendedRatingRange(const FString& UniqueId, int32& Minimum, int32& Maximum) const;
    
};

