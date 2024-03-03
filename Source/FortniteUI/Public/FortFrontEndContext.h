#pragma once
#include "CoreMinimal.h"
#include "DisplayManagerVariantData.h"
#include "EAthenaCustomizationCategory.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortPawnDisplayContext.h"
#include "EFortTheaterType.h"
#include "EFrontEndCamera.h"
#include "FortAthenaLoadout.h"
#include "FortAttributeInfo.h"
#include "FortItemQuantityPair.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortMultiSizeBrush.h"
#include "FortTheaterMapData.h"
#include "GameDifficultyInfo.h"
#include "CatalogOffer.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortFrontEndFeature.h"
#include "EFortFrontEndFeatureState.h"
#include "EFortFrontEndFeatureStateReason.h"
#include "EFortReturnToFrontendBehavior.h"
#include "FortFrontEndFeatureStruct.h"
#include "FortMissionDetails.h"
#include "FortMissionRewardInfo.h"
#include "FrontEndFeatureStateChangedListenerDelegate.h"
#include "LobbyEmptyPlayerClickedDelegateDelegate.h"
#include "LobbyPlayerGadgetsClickedDelegateDelegate.h"
#include "LobbyPlayerPartySuggestionAcceptDelegate.h"
#include "OnCameraChangedDelegateDelegate.h"
#include "OnLobbyPlayerMutingChangedDelegateDelegate.h"
#include "OnLobbyPlayerTalkingChangedDelegateDelegate.h"
#include "OnLobbyPlayersStoppedTalkingDelegateDelegate.h"
#include "OnMainTabSelectedDelegateDelegate.h"
#include "OnRadialPickerStatusChangedDelegate.h"
#include "OnSocialImportClosedDelegateDelegate.h"
#include "PlayerLoginDelegateDelegate.h"
#include "SeasonTabVariantPreviewInfoChangedDelegate.h"
#include "SetPreviewedSceneTheaterDelegateDelegate.h"
#include "ShouldShowPhoenixDisplayChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TheaterDataChangedDelegateDelegate.h"
#include "TheaterPinClickedDelegateDelegate.h"
#include "TheaterSelectedDelegateDelegate.h"
#include "TheaterTileClickedDelegateDelegate.h"
#include "TheaterTileDoubleClickedDelegateDelegate.h"
#include "TheaterTileFocusedDelegateDelegate.h"
#include "UnlockableVariantPreviewInfo.h"
#include "VaultItemViewedDelegate.h"
#include "VaultItemsViewedDelegate.h"
#include "FortFrontEndContext.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortTheaterMapTile;
class UAthenaCosmeticItemDefinition;
class UFortInventoryContext;
class UFortItem;
class UFortItemDefinition;
class UFortOutpostItemDefinition;
class UFortQuestItem;
class UFortServerBrowserHelper;
class UFortSocialImportPanel;
class UFortWorldItem;
class UFortWorldItemDefinition;
class UMeshComponent;
class UWidget;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortFrontEndContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEmptyPlayerClickedDelegate OnLobbyEmptyPlayerClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerGadgetsClickedDelegate OnLobbyPlayerGadgetsClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerPartySuggestionAccept OnPartySuggestionAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyPlayerTalkingChangedDelegate OnLobbyPlayerTalkingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyPlayerMutingChangedDelegate OnLobbyPlayerMutingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyPlayersStoppedTalkingDelegate OnLobbyPlayersStoppedTalking;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialPickerStatusChanged OnRadialPickerStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraChangedDelegate OnFrontEndCameraChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterPinClickedDelegate OnTheaterPinClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPreviewedSceneTheaterDelegate OnSetPreviewedSceneTheater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterSelectedDelegate OnTheaterSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterDataChangedDelegate OnTheaterDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileClickedDelegate OnTheaterTileClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileClickedDelegate OnTheaterTileUnselected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileDoubleClickedDelegate OnTheaterTileDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileFocusedDelegate OnTheaterTileFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTheaterTileFocusedDelegate OnTheaterTileUnfocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShouldShowPhoenixDisplayChangedDelegate OnShouldShowPhoenixDisplayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaultItemViewed OnVaultItemViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaultItemsViewed OnVaultItemsViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonTabVariantPreviewInfoChanged OnSeasonTabVariantPreviewInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoginDelegate OnPlayerLoggedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoginDelegate OnPlayerLoggedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainTabSelectedDelegate OnMainTabSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSocialImportClosedDelegate OnSocialImportClosed;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortFrontEndFeatureStruct Features[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString OfferIdToFocusInItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUnlockableVariantPreviewInfo SeasonTabVariantPreviewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortServerBrowserHelper* ServerBrowserHelper;
    
public:
    UFortFrontEndContext();
    UFUNCTION(BlueprintCallable)
    void ViewVaultItemsFromOffer(const FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItems(const TArray<UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItemFromDefinition(const UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable)
    void ViewVaultItem(const UFortItem* ItemToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateSpatialUINewItemBang(bool bShowBang) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateNewAccountItemBangCounts(UFortInventoryContext* InventoryContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetAttributeInfo(const FGameplayAttribute& GameplayAttribute, FFortAttributeInfo& OutAttribute) const;
    
    UFUNCTION(BlueprintCallable)
    void SkipInitialBenchmark();
    
    UFUNCTION(BlueprintCallable)
    UFortSocialImportPanel* ShowSocialImport(TSubclassOf<UFortSocialImportPanel> PanelClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowAthenaStoreNewItemBang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSocialImport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPhoenixDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowAccountItemWarning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRunInitialBenchmark() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSocialButtonEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedTheater(const FString& TheaterId);
    
    UFUNCTION(BlueprintCallable)
    void SetSeasonTabVariantPreviewInfo(FUnlockableVariantPreviewInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void SetOfferIdToFocusInItemShop(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem, FGameplayTag VariantChannelTag, FGameplayTag VariantTag, const FString& CustomData);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontEndCamera(EFrontEndCamera NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLockerSubslotIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SendPlayQuestAnalytic(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    void SendFrontendEnteredEvent();
    
    UFUNCTION(BlueprintCallable)
    bool SelectTileForQuest(UFortQuestItem* QuestItem, float& OutCriticalMissionDifficultyOverrideMin, float& OutCriticalMissionDifficultyOverrideMax);
    
    UFUNCTION(BlueprintCallable)
    void SelectGadgetForSlot(int32 Slot, UFortItemDefinition* GadgetDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SelectDefaultTheaterTile();
    
    UFUNCTION(BlueprintCallable)
    void SelectDefaultTheater();
    
    UFUNCTION(BlueprintCallable)
    void RunBenchmarkAndApplyBestSettings();
    
    UFUNCTION(BlueprintCallable)
    void PushContentWidget_Adv(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    void PreviewCatalogOfferItems(const FCatalogOffer& CatalogOffer);
    
    UFUNCTION(BlueprintCallable)
    void PlayLevelUpEffect();
    
    UFUNCTION(BlueprintCallable)
    void PlayEvolutionEffect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProfileInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileMissionAlertRewardClaimed(const AFortTheaterMapTile* Tile) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCelebrateEffectPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveTileMissionValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is4PlayerTile(const AFortTheaterMapTile* Tile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideAthenaStoreNewItemBang() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDynamicSocialImportClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    FDisplayManagerVariantData GetVariantDataForMemberIndex(int32 MemberIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetUITestingClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTileMissionDetails(const AFortTheaterMapTile* Tile, FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortTheaterType GetTheaterType(const FString& TheaterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTheaterRegionCount(const FString& TheaterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTheaterName(const FString& TheaterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTheaterData(const FString& TheaterId, FFortTheaterMapData& OutTheaterData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedTheaterId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectedTheaterData(FFortTheaterMapData& OutTheaterData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSelectableGadgets(TArray<UFortWorldItem*>& SelectableGadgets, TArray<UFortWorldItem*>& LastSelectedGadgets);
    
    UFUNCTION(BlueprintCallable)
    FUnlockableVariantPreviewInfo GetSeasonTabVariantPreviewInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortReturnToFrontendBehavior GetReturnToFrontendBehavior() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPrefabActorForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPostMaxAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 RewardOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutpostStructureUpgradeCost(int32 TheaterSlot, int32 UpgradeLevel, UFortOutpostItemDefinition* OutpostStructure, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostStructureMaxLevel(int32 TheaterSlot, UFortOutpostItemDefinition* OutpostStructure) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutpostCoreLevelByTheaterId(const FString& TheaterId, int32& OutCoreLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutpostCoreLevelByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& OutCoreLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOfferIdToFocusInItemShop() const;
    
    UFUNCTION(BlueprintCallable)
    UMeshComponent* GetMeshForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMCPRegionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMCPRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles) const;
    
    UFUNCTION(BlueprintCallable)
    FFortAthenaLoadout GetLoadoutForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetItemFromItemQuantityPair(const FFortItemQuantityPair& InPair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFrontendInventoryFilter GetInventoryFilterForAccountItemWarning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHighestEnduranceWaveReachedByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& HighestWaveNumber) const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetHeroPlayerPawnByIndex(int32 PartyMemberIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetHarvestingToolForLevel(int32 TheaterSlot, int32 InHarvestingOptimizerLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFrontEndCamera GetFrontEndCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortTheaterMapTile* GetFocusedTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusedOrActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortTheaterMapTile* GetFocusedOrActiveTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFeatureStateReasonText(const EFortFrontEndFeatureStateReason Reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFeatureState(const EFortFrontEndFeature Feature, EFortFrontEndFeatureState& OutFeatureState, EFortFrontEndFeatureStateReason& OutReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFrontEndCamera GetDesiredPlayButtonCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDefenderSquadIDByTheaterID(const FString& TheaterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentTheaterName() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLockerSubslotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCriticalMissionRewards(TArray<FFortMissionRewardInfo>& RewardList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortMultiSizeBrush GetAttributeIcon(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAttributeDisplayName(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAttributeDescription(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllTheaterData(TArray<FFortTheaterMapData>& OutAllTheaterData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortTheaterMapTile* GetActiveTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetFeatureState(EFortFrontEndFeature Feature, EFortFrontEndFeatureState State, EFortFrontEndFeatureStateReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void DisplayAthenaCosmetic(const UAthenaCosmeticItemDefinition* CosmeticItemDef, int32 VariantPreviewIdx);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedTheater();
    
    UFUNCTION(BlueprintCallable)
    void ClearLocalPreview(bool StopUsingLocalPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowLockerSlotType(EAthenaCustomizationCategory SlotType) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanFindTileForQuest(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCompleteQuestInFocusedOrActiveTileMission(UFortQuestItem* QuestItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCompleteQuestInActiveTileMission(UFortQuestItem* QuestItem) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastMainTabSelected(FName TabName);
    
    UFUNCTION(BlueprintCallable)
    void BindToFeatureStateAndInitialize(EFortFrontEndFeature Feature, FFrontEndFeatureStateChangedListener Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreProfilesAvailableToWIFE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreProfilesAvailableForWriting() const;
    
    UFUNCTION(BlueprintCallable)
    void AccountItemWarningShown();
    
};

