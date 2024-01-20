#pragma once
#include "CoreMinimal.h"
#include "DedicatedServerUrlContext.h"
#include "EFortCreativePlotPermission.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCreative.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortMcpProfileCreative : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePublishing;
    
public:
    UFortMcpProfileCreative();/*
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void UpdatePlotPublishInfo(const FString& PlotItemId, const FString& LinkCode, int32 LinkVersion, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetLastUsedCreativePlot(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetCreativePlotMetadata(const FString& PlotItemId, const FString& Locale, const FString& Title, const FString& Tagline, const FString& YoutubeVideoId, const FString& Introduction, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RestoreDeletedIsland(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ModifyCreativePlotPermissions(const FString& PlotItemId, EFortCreativePlotPermission Permission, const TArray<FString>& AccountIds, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void DeleteIsland(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void CreateNewIsland(const FString& TemplateId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
  */  
};

