#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "FortMcpProfile.h"
#include "FortOutpostCoreInfo.h"
#include "FortMcpProfileMetadata.generated.h"

UCLASS(Blueprintable)
class UFortMcpProfileMetadata : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileMetadata();
   /* UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateOutpostCore(const FString& CoreId, const FFortOutpostCoreInfo& CoreInfo, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdateDeployableBaseTierProgression(const FString& DeployableBaseItemId, const FString& ProgressionLayoutGuid, int32 TierDefeated, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CreateOrUpgradeOutpostItem(const FString& TemplateId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CreateDeployableBaseItem(const FString& TemplateId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);*/
    
};

