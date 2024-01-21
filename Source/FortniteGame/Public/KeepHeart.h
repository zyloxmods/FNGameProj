#pragma once
#include "CoreMinimal.h"
#include "EKeepDefenseState.h"
#include "KeepHeartBase.h"
#include "Templates/SubclassOf.h"
#include "KeepHeart.generated.h"

class AActor;
class AFortPlayerController;
class UFortAIEncounterInfo;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AKeepHeart : public AKeepHeartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DecorationRoomPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PermaniteHealEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermaniteWallWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermaniteFloorWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermaniteStairWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermaniteRoofWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EKeepDefenseState::Type> DefenseState;
    
    AKeepHeart();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpgradeAllPermaniteStructures(AFortPlayerController* FortPC, bool bQuickUpgrade);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StreamOutWorld();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StreamInWorld();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartVote(FText VoteText, FText YesText, FText NoText, float PercentageToPass, bool bSkipIfOnePlayerOnly);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPermaniteAvailability(bool bAvailable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestoreKeepHealth();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestoreContainers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetContainers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldStreamedIn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteComplete(bool bResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnDefenseLevelChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyEncounterStarted(UFortAIEncounterInfo* StartedEncounter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyEncounterEnded(UFortAIEncounterInfo* EndedEncounter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsWorldStreamingIn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsWorldStreamedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDefenseActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleVoteComplete(bool bResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float GetWorldStreamingInProgress();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUpgradeAllPermaniteCost(AFortPlayerController* FortPC, bool bQuickUpgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetDefenseLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAveragePermaniteLevel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool DestroyNonPermaniteStructures();
    
    UFUNCTION(BlueprintCallable)
    void DelayedVoteSuccess();
    
};

