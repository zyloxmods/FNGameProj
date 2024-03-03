#pragma once
#include "CoreMinimal.h"
#include "BuildingContainer.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EKeepContainerType.h"
#include "KeepItemContainer.generated.h"

class AFortPlayerController;
class AFortPlayerState;
class UDataTable;

UCLASS(Blueprintable)
class AKeepItemContainer : public ABuildingContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HostUpgradeLevel, meta=(AllowPrivateAccess=true))
    int32 HostUpgradeLevel;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SearchedBy, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPlayerState>> SearchedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeepContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultLootLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetThisWhenKeepResets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContainerNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ContainerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowChoiceUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> ItemsInChoiceUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortRarity BestAvailableRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxItems;
    
public:
    AKeepItemContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestoreLoot();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetContainer(AFortPlayerController* FortPC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SearchedBy();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_HostUpgradeLevel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeContainer(int32 InitUpgradeLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetLootTierOverride() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FName GetContainerNameAndLevelKey();
    
};

