#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CreativeIslandDescriptionTag.h"
#include "CreativeLoadedLinkData.h"
#include "OnDownloadLinkThumbnailCompleteDelegate.h"
#include "OnQueryLinkDataCompleteDelegate.h"
#include "FortLinkDataManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortLinkDataManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFortLinkDataManager();
    UFUNCTION(BlueprintCallable)
    void QueryLinkDataByCode(const FString& LinkCode, const FOnQueryLinkDataComplete& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLinkTitle(const FCreativeLoadedLinkData& LinkData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLinkTagline(const FCreativeLoadedLinkData& LinkData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLinkIntroduction(const FCreativeLoadedLinkData& LinkData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags(const FCreativeLoadedLinkData& LinkData) const;
    
    UFUNCTION(BlueprintCallable)
    void DownloadThumbnail(const FCreativeLoadedLinkData& LinkData, const FOnDownloadLinkThumbnailComplete& Callback);
    
};

