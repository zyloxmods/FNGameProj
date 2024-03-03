#pragma once
#include "CoreMinimal.h"
#include "PerkIntroScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "InfiltrationRoundInfoWidget.generated.h"

class AFortGameplayMutator;
class IInfiltrationRoundInfoMutatorInterface;
class UInfiltrationRoundInfoMutatorInterface;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationRoundInfoWidget : public UPerkIntroScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedRoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AttackingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefendingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextRoundAttackingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextRoundDefendingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IInfiltrationRoundInfoMutatorInterface> CachedMutator;
    
public:
    UInfiltrationRoundInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSkipWinLossScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayRoundEndStinger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayFactionIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldModifyAttackingDefendingText(FText& OutAttackingDefendingText, bool bLocalTeamIsAttackers) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWinningTeam(uint8 NewWinningTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToShowStuff(int32 CurrentRound, uint8 LastRoundWinningTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToShowIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerDefendingNextRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerDefending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerAttackingNextRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWinningTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetViewingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRoundResultsText(FText& OutResultsText, bool bLocalTeamIsAttackers, bool bLocalTeamIsWinners) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetRoundIntroFactionSound(bool bLocalTeamIsAttackers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

