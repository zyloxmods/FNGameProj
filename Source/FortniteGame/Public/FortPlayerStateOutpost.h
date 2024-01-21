#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStateZone.h"
#include "FortPlayerStateOutpost.generated.h"

class AFortPlayerStateOutpost;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerStateOutpost : public AFortPlayerStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasPermissionToEditOutpost, meta=(AllowPrivateAccess=true))
    bool bHasPermissionToEditOutpost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftingTableItemsRemaining, meta=(AllowPrivateAccess=true))
    int32 CraftingTableItemsRemaining;
    
public:
    AFortPlayerStateOutpost();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetHasPermissionToEditOutpost(AFortPlayerStateOutpost* InPlayer, bool bHasPermission);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHasPermissionToEditOutpost(AFortPlayerStateOutpost* InPlayer, bool bHasPermission);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasPermissionToEditOutpost();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftingTableItemsRemaining();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutpostOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPermissionToEditOutpost() const;
    
};

