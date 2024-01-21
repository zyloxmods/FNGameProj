#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "ESubGame.h"
#include "EFortSubgameSelectOption.h"
#include "OnRedeemCodeFlowCompleteDelegate.h"
#include "FortSubGameSelectBase.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubGameSelectBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UFortSubGameSelectBase();
    UFUNCTION(BlueprintCallable)
    void ShowRedeemCodeScreen(const ESubGame SubGame, const FOnRedeemCodeFlowComplete& CompletionDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubGameImageLoadedFromCMS(const EFortSubgameSelectOption SubGameOption, UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubGameOptionVisible(EFortSubgameSelectOption SubGameOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUpsellStorefrontNames(const ESubGame SubGame, TArray<FString>& OutStorefrontNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubGame GetSubGameBySubGameSelectOption(EFortSubgameSelectOption SubGameOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShortDescription(EFortSubgameSelectOption SubGameOption, FText& ShortDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOnSale(EFortSubgameSelectOption SubGameOption) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFullDescription(EFortSubgameSelectOption SubGameOption, FText& FullDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRewardRate() const;
    
};

