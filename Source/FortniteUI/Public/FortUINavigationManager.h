#pragma once
#include "CoreMinimal.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortItemInspectionMode.h"
#include "EFortUIFeature.h"
#include "EFortUINavigationOp.h"
#include "FortCollectionBookOpDelegate.h"
#include "FortExpeditionsOpDelegate.h"
#include "FortFeatureNavigateOpDelegate.h"
#include "FortItemEvolutionNavigateRequestDelegate.h"
#include "FortNodePageNavigateRequestDelegate.h"
#include "FortPopContentStackOpDelegate.h"
#include "FortQuestItemNavigateRequestDelegate.h"
#include "FortQuestItemOpDelegate.h"
#include "FortSquadOpDelegate.h"
#include "FortSquadSlotNavigateRequestDelegate.h"
#include "FortTabNavigateRequestDelegate.h"
#include "FortUINavigationOperation.h"
#include "FortUINavigationRequest.h"
#include "FortVaultItemNavigateRequestDelegate.h"
#include "FortVaultTabNavigateRequestDelegate.h"
#include "UINavigationManager.h"
#include "FortUINavigationManager.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortGiftBoxItem;
class UFortItem;
class UFortItemTileView;
class UFortQuestItem;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UFortUINavigationManager : public UUINavigationManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabNavigateRequest OnMainTabNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeatureNavigateOp OnFeatureNavigateOp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortNodePageNavigateRequest OnNodePageNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadSlotNavigateRequest OnSquadSlotNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortVaultTabNavigateRequest OnVaultTabNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortVaultItemNavigateRequest OnVaultItemNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEvolutionNavigateRequest OnItemEvolutionNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestItemNavigateRequest OnQuestItemNavigateRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPopContentStackOp OnPopContentStackOp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadOp OnSquadNavigationOp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortExpeditionsOp FortExpeditionsOp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookOp FortCollectionBookOp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestItemOp OnQuestItemOp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortUINavigationRequest> NavigationRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* HiddenCursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* VirtualCursorWidget;
    
public:
    UFortUINavigationManager();
    UFUNCTION(BlueprintCallable)
    bool TryGetPendingNavigationOp(FFortUINavigationOperation& NavigationOp);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PushSquadManagementScreen(FName SquadId, int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, UFortItem* ItemToSelect, bool bShowAutoMulch);
    
    UFUNCTION(BlueprintCallable)
    void PushItemInspectionScreen(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
    
    UFUNCTION(BlueprintCallable)
    void PushHeroLoadoutScreen(UFortCampaignHeroLoadoutItem* HeroLoadout);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSquadSlot(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToQuestObjective(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToItemManagementScreen(EFortFrontendInventoryFilter Filter);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToFeature(EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToExpeditions();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToCollectionBook();
    
    UFUNCTION(BlueprintCallable)
    void NavigateForGift(UFortGiftBoxItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetCentered(UWidget* Widget) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPendingNavigationOp(EFortUINavigationOp NavigationOp);
    
    UFUNCTION(BlueprintCallable)
    void CompletePendingNavigationOp(EFortUINavigationOp NavigationOp);
    
    UFUNCTION(BlueprintCallable)
    void CenterWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool CanNavigateToQuestObjective(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanAccessSquadManagementScreen(FName SquadId, int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanAccessItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter);
    
    UFUNCTION(BlueprintCallable)
    bool CanAccessHeroLoadoutScreen(UFortCampaignHeroLoadoutItem* HeroLoadout);
    
    UFUNCTION(BlueprintCallable)
    bool CanAccessCollectionBook();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptPlayQuest(UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool AttemptMatchmakeForQuest(UFortQuestItem* Quest, bool& OutContentNotDownloaded);
    
};

