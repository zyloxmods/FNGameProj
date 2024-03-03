#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "BaseUrlContext.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "McpProfile.generated.h"

class UMcpProfileGroup;

UCLASS(Blueprintable, Config=DefaultEngine)
class MCPPROFILESYS_API UMcpProfile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSubscriptionToNotificationsService;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileLockOperationPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileUnlockOperationPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMocks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfileGroup* ProfileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ProfileRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullProfileQueryQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileWriteLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ProfileWriteLockExpireTime;
    
public:
    UMcpProfile();
private:
   /* UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UnlockProfileForWrite(const FString& Code, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void QueryPublicProfile(UPARAM(NotReplicated) FBaseUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void QueryProfile(UPARAM(NotReplicated) FBaseUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void LockProfileForWrite(const FString& Code, int32 Timeout, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DeleteProfile(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DeleteAllProfiles(UPARAM(NotReplicated) FClientUrlContext& Context);*/
    
};

