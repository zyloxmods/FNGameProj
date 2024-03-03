#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "DefenderPawnOrItemSetDelegate.h"
#include "EFortDefenderInteractionError.h"
#include "BuildingTrapDefender.generated.h"

class AActor;
class AFortAIPawn;
class AFortPlayerController;
class AFortPlayerStateZone;
class UFortAccountItem;
class UFortDefenderItem;
class UFortDefenderItemDefinition;
class UFortWorldItem;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingTrapDefender : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDefenderInteractionError LastInteractError;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefenderPawn, meta=(AllowPrivateAccess=true))
    AFortAIPawn* DefenderPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DefenderItemDefinition, meta=(AllowPrivateAccess=true))
    UFortDefenderItemDefinition* DefenderItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DefenderItemLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefenderPawnOrItemSet DefenderPawnOrItemSet;
    
public:
    ABuildingTrapDefender();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortWorldItem* TakeWeaponAwayFromDefender(UFortWorldItem* WeaponToTakeAway);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SupplyDefender(const UFortWorldItem* WeaponToGive, const int32 AmmoQuantity);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortAIPawn* SpawnDefenderfromItem(UFortAccountItem* DefenderItem, const FName DefenderSquadId, const FTransform& SpawnTransform, AActor* InOwner);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void RemoveCurrentDefender(AFortPlayerStateZone* RequestingPlayer, bool bRemovalCausedByPlayerJoin);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DefenderPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DefenderItemDefinition();
    
public:
    UFUNCTION(BlueprintCallable)
    FText GetLastInteractErrorText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetDefenderSpawnTransform() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void DeployDefender(const AFortPlayerController* ItemSelectorPC, const UFortDefenderItem* InDefenderItem, const FName InDefenderSquadId, const UFortWorldItem* WeaponToGive, const int32 AmmoQuantity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ClearCurrentDefender(bool bForceKillDefender);
    
};

