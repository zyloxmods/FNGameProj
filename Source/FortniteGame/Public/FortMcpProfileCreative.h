#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "EFortCreativePlotPermission.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCreative.generated.h"

class UFortCreativeRealEstatePlotItemDefinition;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileCreative : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePublishing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCreativeRealEstatePlotItemDefinition> DefaultBattleLabPlot;
    
public:
    UFortMcpProfileCreative();
   /* UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpdatePlotPublishInfo(const FString& PlotItemId, const FString& LinkCode, int32 LinkVersion, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetLastUsedCreativePlot(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetLastUsedBattleLabFile(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetCreativePlotMetadata(const FString& PlotItemId, const FString& Locale, const FString& Title, const FString& Tagline, const TArray<FString>& DescriptionTags, const FString& YoutubeVideoId, const FString& Introduction, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void RestoreDeletedIsland(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ModifyCreativePlotPermissions(const FString& PlotItemId, EFortCreativePlotPermission Permission, const TArray<FString>& AccountIds, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DuplicateIsland(const FString& IslandId, const FString& Locale, const FString& NewTitle, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DeleteIsland(const FString& PlotItemId, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DeleteBattleLabIsland(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CreateNewIslandFromLinkCode(const FString& LinkCode, const FString& Locale, const FString& Title, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CreateNewIsland(const FString& TemplateId, const FString& Locale, const FString& Title, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CreateNewBattleLabFile(const FString& TemplateId, const FString& Locale, const FString& Title, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    */
};

