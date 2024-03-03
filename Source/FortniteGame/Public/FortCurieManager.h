#pragma once
#include "CoreMinimal.h"
#include "CurieManager.h"
#include "GameplayTagContainer.h"
#include "CurieToggleComponentGroup.h"
#include "CurieToggleGroupMemberStateChangeSignatureDelegate.h"
#include "CurieToggleGroupSameStateSignatureDelegate.h"
#include "FortCurieManager.generated.h"

class UActorComponent;
class UFortCurieCableSignalManager;
class UFortCurieElectricityPropagationManager;
class UFortCurieFXManager;
class UFortCurieFirePropagationManager;
class UFortCurieSpatialManager;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieManager : public UCurieManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieToggleComponentGroup> ToggleComponentGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurieSpatialManager* SpatialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurieFirePropagationManager* FirePropagationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurieElectricityPropagationManager* ElectricityPropagationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurieCableSignalManager* CableSignalManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieFXManager* FXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ValidStateIdentifiers, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ValidStateIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> StateIdentifierToIdxMap;
    
public:
    UFortCurieManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleGroupComponentDeactivated(UActorComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleGroupComponentActivated(UActorComponent* InComponent, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ValidStateIdentifiers();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
};

