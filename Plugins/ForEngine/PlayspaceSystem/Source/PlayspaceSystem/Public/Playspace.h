#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "NotifyEndMatchDelegate.h"
#include "NotifyPlayspaceInitializedDelegate.h"
#include "NotifyPlayspaceUserAddedDelegate.h"
#include "NotifyPlayspaceUserRemovedDelegate.h"
#include "NotifyStartMatchDelegate.h"
#include "PlayspaceUserList.h"
#include "Templates/SubclassOf.h"
#include "Playspace.generated.h"

class AGameplayVolume;
class APlayspace;
class UPlayspaceManagerComponent;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API APlayspace : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyPlayspaceUserAdded NotifyPlayspaceUserAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyPlayspaceUserRemoved NotifyPlayspaceUserRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyPlayspaceInitialized NotifyPlayspaceInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyStartMatch NotifyStartMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyEndMatch NotifyEndMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequestedPlayspaceParentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APlayspace>> ChildPlayspaceClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayspaceUsers, meta=(AllowPrivateAccess=true))
    FPlayspaceUserList PlayspaceUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayspace*> ChildPlayspaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PendingUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartMatchOnServerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayspaceManagerComponent* PlayspaceManagerCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameplayVolume* BoundGameplayVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsInitialized, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bMatchHasEnded, meta=(AllowPrivateAccess=true))
    bool bMatchHasEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchStartTime, meta=(AllowPrivateAccess=true))
    float MatchStartTime;
    
public:
    APlayspace();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayspaceUsers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchStartTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bMatchHasEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsInitialized();
    
};

