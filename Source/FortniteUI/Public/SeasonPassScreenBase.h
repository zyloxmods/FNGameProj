#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "SeasonPassScreenBase.generated.h"

class UAthenaSeasonItemDefinition;
class UFortSeasonPassLevelInfo;
class USeasonPassLevelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USeasonPassScreenBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USeasonPassLevelWidget*> LevelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UFortSeasonPassLevelInfo*> LevelInfos;
    
public:
    USeasonPassScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStoreHasStarsNotification(bool bShowNotification);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldOpenAboutScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScrollPositive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScrollNegative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PurchaseAvailible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsSeasonPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetGiftability(bool bIsGiftable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSeasonPassChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoCurrentSeason();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigateToLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelsGenerated();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    bool IsCellConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnclaimedBattlePassDiscountToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonPassLevelMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonPassLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetSeasonEndDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSeasonPassLevelInfo* GetLevelInfo(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, UFortSeasonPassLevelInfo*> GetAllLevelInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<USeasonPassLevelWidget*> GenerateLevelWidgets(UFortSeasonPassLevelInfo* LevelInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanClaimBattlePassDiscountToken() const;
    
};

