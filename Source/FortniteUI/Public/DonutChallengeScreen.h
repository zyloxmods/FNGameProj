#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialScreen.h"
#include "Templates/SubclassOf.h"
#include "DonutChallengeScreen.generated.h"

class UAthenaSeasonItemDefinition;
class UBattlePassPurchaseScreen;
class UCommonButton;
class UCommonHierarchicalScrollBox;
class UCommonTextBlock;
class UDonutChallengeEntry;
class UDonutChallengeEntryHeader;
class UDynamicEntryBox;
class UFortChallengeBundleItemDefinition;
class UFortGameStateComponent_EventLevel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UDonutChallengeScreen : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattlePassPurchaseScreen> PurchaseBattlePassScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CustomMouseCursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDonutChallengeEntryHeader> HeaderEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDonutChallengeEntry> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortChallengeBundleItemDefinition*> DonutBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleItemDefinition* SkinUnlockBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AttractChallengeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_BattlepassUpsell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonHierarchicalScrollBox* ScrollBox_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Challenges;
    
public:
    UDonutChallengeScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBPOwnedStateVisuals(bool bInOwnsBattlePass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSkinUnlockMessage(bool bShowMessage, int32 InChallengeNum);
    
    UFUNCTION(BlueprintCallable)
    void SetStyledCursorEnabled(bool bEnableStyledCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryFocus();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToEndOfChallenges();
    
};

