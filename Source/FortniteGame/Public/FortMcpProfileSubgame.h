#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "EAthenaCustomizationCategory.h"
#include "FortAthenaLoadoutData.h"
#include "FortMcpProfile.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortSubgameClientSettings.h"
#include "McpVariantReader.h"
#include "FortMcpProfileSubgame.generated.h"

class UFortCosmeticLockerItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileSubgame : public UFortMcpProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCosmeticLockerItem*> LoadoutLockerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticLockerItem* LastAppliedLoadout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubgameClientSettings CachedClientSettings;
    
public:

  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateQuests(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateQuestClientObjectives(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetRandomCosmeticLoadoutFlag(bool Random, UPARAM(NotReplicated) FClientUrlContext& Context);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetPinnedQuests(const TArray<FString>& PinnedQuestIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetItemFavoriteStatusBatch(const TArray<FString>& ItemIds, const TArray<bool>& itemFavStatus, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetItemFavoriteStatus(const FString& TargetItemId, bool bFavorite, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetCosmeticLockerSlots(const FString& LockerItem, const TArray<FFortAthenaLoadoutData>& LoadoutData, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetCosmeticLockerSlot(const FString& LockerItem, EAthenaCustomizationCategory Category, const FString& ItemToSlot, int32 SlotIndex, const TArray<FMcpVariantReader>& VariantUpdates, int32 OptLockerUseCountOverride, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetCosmeticLockerName(const FString& LockerItem, const FString& Name, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetCosmeticLockerBanner(const FString& LockerItem, const FString& BannerIconTemplateName, const FString& BannerColorTemplateName, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ServerQuestLogin(const FString& MatchmakingSessionId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void MarkNewQuestNotificationSent(const TArray<FString>& ItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void FortRerollDailyQuest(const FString& QuestId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DeleteCosmeticLoadout(int32 Index, int32 FallbackLoadoutIndex, bool leaveNullSlot, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CopyCosmeticLoadout(int32 SourceIndex, int32 TargetIndex, const FString& OptNewNameForTarget, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClientQuestLogin(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClaimQuestReward(const FString& QuestId, int32 SelectedRewardIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

