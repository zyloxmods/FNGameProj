#include "FortFrontEndContext.h"
#include "Templates/SubclassOf.h"

void UFortFrontEndContext::ViewVaultItemsFromOffer(const FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItems(const TArray<UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItemFromDefinition(const UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::ViewVaultItem(const UFortItem* ItemToView, bool bIgnoreCurrentlyEquippedFavorites, EFortPawnDisplayContext DisplayContext) {
}

void UFortFrontEndContext::UpdateSpatialUINewItemBang(bool bShowBang) const {
}

void UFortFrontEndContext::UpdateNewAccountItemBangCounts(UFortInventoryContext* InventoryContext) const {
}

bool UFortFrontEndContext::TryGetAttributeInfo(const FGameplayAttribute& GameplayAttribute, FFortAttributeInfo& OutAttribute) const {
    return false;
}

void UFortFrontEndContext::SkipInitialBenchmark() {
}

UFortSocialImportPanel* UFortFrontEndContext::ShowSocialImport(TSubclassOf<UFortSocialImportPanel> PanelClass) {
    return NULL;
}

void UFortFrontEndContext::ShowAthenaStoreNewItemBang() const {
}

bool UFortFrontEndContext::ShouldShowSocialImport() const {
    return false;
}

bool UFortFrontEndContext::ShouldShowPhoenixDisplay() const {
    return false;
}

bool UFortFrontEndContext::ShouldShowAccountItemWarning() const {
    return false;
}

bool UFortFrontEndContext::ShouldRunInitialBenchmark() const {
    return false;
}

void UFortFrontEndContext::SetSocialButtonEnabled(bool bEnabled) {
}

void UFortFrontEndContext::SetSelectedTheater(const FString& TheaterId) {
}

void UFortFrontEndContext::SetSeasonTabVariantPreviewInfo(FUnlockableVariantPreviewInfo Info) {
}

void UFortFrontEndContext::SetOfferIdToFocusInItemShop(const FString& OfferId) {
}

void UFortFrontEndContext::SetLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem, FGameplayTag VariantChannelTag, FGameplayTag VariantTag, const FString& CustomData) {
}

void UFortFrontEndContext::SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortFrontEndContext::SetFrontEndCamera(EFrontEndCamera NewState) {
}

void UFortFrontEndContext::SetDefaultLocalVariantPreview(const UAthenaCosmeticItemDefinition* CosmeticItem) {
}

void UFortFrontEndContext::SetCurrentLockerSubslotIndex(int32 NewIndex) {
}

void UFortFrontEndContext::SendPlayQuestAnalytic(UFortQuestItem* QuestItem) {
}

void UFortFrontEndContext::SendFrontendEnteredEvent() {
}

bool UFortFrontEndContext::SelectTileForQuest(UFortQuestItem* QuestItem, float& OutCriticalMissionDifficultyOverrideMin, float& OutCriticalMissionDifficultyOverrideMax) {
    return false;
}

void UFortFrontEndContext::SelectGadgetForSlot(int32 Slot, UFortItemDefinition* GadgetDefinition) {
}

void UFortFrontEndContext::SelectDefaultTheaterTile() {
}

void UFortFrontEndContext::SelectDefaultTheater() {
}

void UFortFrontEndContext::RunBenchmarkAndApplyBestSettings() {
}

void UFortFrontEndContext::PushContentWidget_Adv(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortFrontEndContext::PreviewCatalogOfferItems(const FCatalogOffer& CatalogOffer) {
}

void UFortFrontEndContext::PlayLevelUpEffect() {
}

void UFortFrontEndContext::PlayEvolutionEffect() {
}

void UFortFrontEndContext::OnPlayerProfileInitialized() {
}

bool UFortFrontEndContext::IsTileMissionAlertRewardClaimed(const AFortTheaterMapTile* Tile) const {
    return false;
}

bool UFortFrontEndContext::IsCelebrateEffectPlaying() {
    return false;
}

bool UFortFrontEndContext::IsActiveTileMissionValid() {
    return false;
}

bool UFortFrontEndContext::Is4PlayerTile(const AFortTheaterMapTile* Tile) const {
    return false;
}

void UFortFrontEndContext::HideAthenaStoreNewItemBang() const {
}

void UFortFrontEndContext::HandleDynamicSocialImportClosed() {
}

FDisplayManagerVariantData UFortFrontEndContext::GetVariantDataForMemberIndex(int32 MemberIndex) {
    return FDisplayManagerVariantData{};
}

UClass* UFortFrontEndContext::GetUITestingClass() const {
    return NULL;
}

bool UFortFrontEndContext::GetTileMissionDetails(const AFortTheaterMapTile* Tile, FFortMissionDetails& MissionDetails) const {
    return false;
}

EFortTheaterType UFortFrontEndContext::GetTheaterType(const FString& TheaterId) const {
    return EFortTheaterType::Standard;
}

int32 UFortFrontEndContext::GetTheaterRegionCount(const FString& TheaterId) const {
    return 0;
}

FText UFortFrontEndContext::GetTheaterName(const FString& TheaterId) const {
    return FText::GetEmpty();
}

bool UFortFrontEndContext::GetTheaterData(const FString& TheaterId, FFortTheaterMapData& OutTheaterData) const {
    return false;
}

FString UFortFrontEndContext::GetSelectedTheaterId() const {
    return TEXT("");
}

bool UFortFrontEndContext::GetSelectedTheaterData(FFortTheaterMapData& OutTheaterData) const {
    return false;
}

void UFortFrontEndContext::GetSelectableGadgets(TArray<UFortWorldItem*>& SelectableGadgets, TArray<UFortWorldItem*>& LastSelectedGadgets) {
}

FUnlockableVariantPreviewInfo UFortFrontEndContext::GetSeasonTabVariantPreviewInfo() {
    return FUnlockableVariantPreviewInfo{};
}

EFortReturnToFrontendBehavior UFortFrontEndContext::GetReturnToFrontendBehavior() const {
    return EFortReturnToFrontendBehavior::NotSpecified;
}

AActor* UFortFrontEndContext::GetPrefabActorForCurrentDisplayedItem() {
    return NULL;
}

void UFortFrontEndContext::GetPostMaxAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 RewardOffset) const {
}

void UFortFrontEndContext::GetOutpostStructureUpgradeCost(int32 TheaterSlot, int32 UpgradeLevel, UFortOutpostItemDefinition* OutpostStructure, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const {
}

int32 UFortFrontEndContext::GetOutpostStructureMaxLevel(int32 TheaterSlot, UFortOutpostItemDefinition* OutpostStructure) const {
    return 0;
}

bool UFortFrontEndContext::GetOutpostCoreLevelByTheaterId(const FString& TheaterId, int32& OutCoreLevel) const {
    return false;
}

bool UFortFrontEndContext::GetOutpostCoreLevelByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& OutCoreLevel) const {
    return false;
}

FString UFortFrontEndContext::GetOfferIdToFocusInItemShop() const {
    return TEXT("");
}

UMeshComponent* UFortFrontEndContext::GetMeshForCurrentDisplayedItem() {
    return NULL;
}

FText UFortFrontEndContext::GetMCPRegionText() const {
    return FText::GetEmpty();
}

FText UFortFrontEndContext::GetMCPRegion() const {
    return FText::GetEmpty();
}

FGameDifficultyInfo UFortFrontEndContext::GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles) const {
    return FGameDifficultyInfo{};
}

FFortAthenaLoadout UFortFrontEndContext::GetLoadoutForCurrentDisplayedItem() {
    return FFortAthenaLoadout{};
}

UFortItemDefinition* UFortFrontEndContext::GetItemFromItemQuantityPair(const FFortItemQuantityPair& InPair) const {
    return NULL;
}

EFortFrontendInventoryFilter UFortFrontEndContext::GetInventoryFilterForAccountItemWarning() const {
    return EFortFrontendInventoryFilter::Schematics;
}

bool UFortFrontEndContext::GetHighestEnduranceWaveReachedByItemDefinition(UFortOutpostItemDefinition* OutpostCoreItemDef, int32& HighestWaveNumber) const {
    return false;
}

AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnForCurrentDisplayedItem() {
    return NULL;
}

AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnByIndex(int32 PartyMemberIndex) {
    return NULL;
}

UFortWorldItemDefinition* UFortFrontEndContext::GetHarvestingToolForLevel(int32 TheaterSlot, int32 InHarvestingOptimizerLevel) const {
    return NULL;
}

EFrontEndCamera UFortFrontEndContext::GetFrontEndCamera() const {
    return EFrontEndCamera::Invalid;
}

AFortTheaterMapTile* UFortFrontEndContext::GetFocusedTile() const {
    return NULL;
}

bool UFortFrontEndContext::GetFocusedOrActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const {
    return false;
}

AFortTheaterMapTile* UFortFrontEndContext::GetFocusedOrActiveTile() const {
    return NULL;
}

FText UFortFrontEndContext::GetFeatureStateReasonText(const EFortFrontEndFeatureStateReason Reason) const {
    return FText::GetEmpty();
}

void UFortFrontEndContext::GetFeatureState(const EFortFrontEndFeature Feature, EFortFrontEndFeatureState& OutFeatureState, EFortFrontEndFeatureStateReason& OutReason) const {
}

EFrontEndCamera UFortFrontEndContext::GetDesiredPlayButtonCamera() const {
    return EFrontEndCamera::Invalid;
}

FName UFortFrontEndContext::GetDefenderSquadIDByTheaterID(const FString& TheaterId) const {
    return NAME_None;
}

FText UFortFrontEndContext::GetCurrentTheaterName() const {
    return FText::GetEmpty();
}

int32 UFortFrontEndContext::GetCurrentLockerSubslotIndex() {
    return 0;
}

void UFortFrontEndContext::GetCriticalMissionRewards(TArray<FFortMissionRewardInfo>& RewardList) const {
}

TArray<FGameDifficultyInfo> UFortFrontEndContext::GetAvailableDifficulties(bool bIncludeMissionAlertTiles) const {
    return TArray<FGameDifficultyInfo>();
}

FFortMultiSizeBrush UFortFrontEndContext::GetAttributeIcon(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const {
    return FFortMultiSizeBrush{};
}

FText UFortFrontEndContext::GetAttributeDisplayName(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const {
    return FText::GetEmpty();
}

FText UFortFrontEndContext::GetAttributeDescription(const FFortAttributeInfo& InAttribute, FGameplayTagContainer InRequiredTags) const {
    return FText::GetEmpty();
}

bool UFortFrontEndContext::GetAllTheaterData(TArray<FFortTheaterMapData>& OutAllTheaterData) const {
    return false;
}

bool UFortFrontEndContext::GetActiveTileMissionDetails(FFortMissionDetails& MissionDetails) const {
    return false;
}

AFortTheaterMapTile* UFortFrontEndContext::GetActiveTile() const {
    return NULL;
}

void UFortFrontEndContext::GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const {
}

void UFortFrontEndContext::ForceSetFeatureState(EFortFrontEndFeature Feature, EFortFrontEndFeatureState State, EFortFrontEndFeatureStateReason Reason) {
}

void UFortFrontEndContext::DisplayAthenaCosmetic(const UAthenaCosmeticItemDefinition* CosmeticItemDef, int32 VariantPreviewIdx) {
}

void UFortFrontEndContext::ClearSelectedTheater() {
}

void UFortFrontEndContext::ClearLocalPreview(bool StopUsingLocalPreview) {
}

bool UFortFrontEndContext::CanShowLockerSlotType(EAthenaCustomizationCategory SlotType) const {
    return false;
}

bool UFortFrontEndContext::CanFindTileForQuest(UFortQuestItem* QuestItem) {
    return false;
}

bool UFortFrontEndContext::CanCompleteQuestInFocusedOrActiveTileMission(UFortQuestItem* QuestItem) const {
    return false;
}

bool UFortFrontEndContext::CanCompleteQuestInActiveTileMission(UFortQuestItem* QuestItem) const {
    return false;
}

void UFortFrontEndContext::BroadcastMainTabSelected(FName TabName) {
}

void UFortFrontEndContext::BindToFeatureStateAndInitialize(EFortFrontEndFeature Feature, FFrontEndFeatureStateChangedListener Delegate) {
}

bool UFortFrontEndContext::AreProfilesAvailableToWIFE() const {
    return false;
}

bool UFortFrontEndContext::AreProfilesAvailableForWriting() const {
    return false;
}

void UFortFrontEndContext::AccountItemWarningShown() {
}

UFortFrontEndContext::UFortFrontEndContext() {
    this->ServerBrowserHelper = NULL;
}

