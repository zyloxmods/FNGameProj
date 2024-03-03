#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStatePvE.h"
#include "FortPlayerStateOutpost.generated.h"

class AFortPlayerStateOutpost;

UCLASS(Blueprintable)
class AFortPlayerStateOutpost : public AFortPlayerStatePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasPermissionToEditOutpost, meta=(AllowPrivateAccess=true))
    bool bHasPermissionToEditOutpost;
    
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
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutpostOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPermissionToEditOutpost() const;
    
};

