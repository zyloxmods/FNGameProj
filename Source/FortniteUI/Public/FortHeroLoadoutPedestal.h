#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewPedestal.h"
#include "FortHeroLoadoutPedestal.generated.h"

class UFortCampaignHeroLoadoutItem;

UCLASS(Blueprintable)
class AFortHeroLoadoutPedestal : public AFortItemPreviewPedestal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortCampaignHeroLoadoutItem> HeroLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlotFocusedInUI;
    
public:
    AFortHeroLoadoutPedestal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSlotFocusInUIChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMcpProfilesInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleDifferentLoadoutViewed(const UFortCampaignHeroLoadoutItem* PreviousLoadout, const UFortCampaignHeroLoadoutItem* CurrentLoadout);
    
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroLoadoutSlotFocused(const FName FocusedSlotName);
    
};

