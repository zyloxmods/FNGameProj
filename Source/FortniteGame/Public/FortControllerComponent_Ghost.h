#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerComponent.h"
#include "FortInterface_OverrideCanInteract.h"
#include "Templates/SubclassOf.h"
#include "FortControllerComponent_Ghost.generated.h"

class AFortPawn;
class AFortPlayerControllerGameplay;
class APawn;
class UFortGadgetItemDefinition;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_Ghost : public UFortControllerComponent, public IFortInterface_OverrideCanInteract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* ItemProvidingGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilitiesToBlockWhenGhosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GhostModeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBecomeInvulnerableWhenGhosted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBecomeAIIgnoredWhenGhosted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetHealthAndShieldsToZeroWhenGhosted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBecomeGhostOnDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInteractionComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DBNOToGhostReviveGameplayEffect;
    
public:
    UFortControllerComponent_Ghost();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartGhostMode();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBecomeGhostOnDBNO(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReviveAndBecomeGhosted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossession(APawn* PossessPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDBNOStateChange(AFortPawn* Pawn, bool bNewDBNOState);
    
    UFUNCTION(BlueprintCallable)
    void OnGhostModeChanged(AFortPlayerControllerGameplay* PlayerController, bool bEnteredGhostMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGhostMode() const;
    
protected:
  //  UFUNCTION(BlueprintCallable)
   // void HandleAbilityEnded(const FAbilityEndedData& AbilityData);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndGhostMode();
    
    
    // Fix for true pure virtual functions not being implemented
};

